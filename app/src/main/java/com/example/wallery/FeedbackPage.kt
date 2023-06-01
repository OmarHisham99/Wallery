package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.FirbaseObj.Feedback
import com.example.wallery.databinding.FragmentFeedbackPageBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.database.FirebaseDatabase


class FeedbackPage : Fragment() {


    private lateinit var feedbackBinding: FragmentFeedbackPageBinding
    private var rate: String = ""
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        feedbackBinding =
            DataBindingUtil.inflate(inflater, R.layout.fragment_feedback_page, container, false)


        feedbackBinding.verybadBtn.setOnClickListener { rate = "Very Bad." }
        feedbackBinding.badBtn.setOnClickListener { rate = "Bad." }
        feedbackBinding.notbadBtn.setOnClickListener { rate = "It Is Okay." }
        feedbackBinding.happyBtn.setOnClickListener { rate = "Good Job." }
        feedbackBinding.veryhappyBtn.setOnClickListener { rate = "Excellent Work." }

        feedbackBinding.backBtnFeedbackPage.setOnClickListener {
            findNavController().navigate(R.id.action_feedback_page_to_homePage)
        }

        feedbackBinding.nextBtnFeedbackPage.setOnClickListener {
            val des = feedbackBinding.feedbackDescription.text.toString()
            if (rate.isNotEmpty() && des.isNotEmpty()) {
                submitFeedback()
            }
            else{
                Toast.makeText(this.context, "Please complete the feedback", Toast.LENGTH_SHORT).show()
            }
        }
        return feedbackBinding.root
    }

    fun submitFeedback() {
        val description = feedbackBinding.feedbackDescription.text.toString()

        val feedback = Feedback( rate, description)
        FirebaseDatabase.getInstance().getReference("Feedbacks")
            .child(FirebaseAuth.getInstance().currentUser!!.uid)
            .setValue(feedback).addOnCompleteListener {
                if (it.isSuccessful) {
                    findNavController().navigate(R.id.action_feedback_page_to_successfulFeedbackPage)
                } else {
                    Toast.makeText(this.context, it.exception.toString(), Toast.LENGTH_SHORT).show()
                }
            }
    }


}