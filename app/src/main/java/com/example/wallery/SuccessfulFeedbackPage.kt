package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentSuccessfulFeedbackPageBinding


class SuccessfulFeedbackPage : Fragment() {

    private lateinit var successfulFeedbackPageBinding:FragmentSuccessfulFeedbackPageBinding
    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?,
                              savedInstanceState: Bundle?): View? {
        // Inflate the layout for this fragment
        successfulFeedbackPageBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_successful_feedback_page,container,false)
        successfulFeedbackPageBinding.nextBtnSuccessFeedbackPage.setOnClickListener{
            findNavController().navigate(R.id.action_successfulFeedbackPage_to_homePage)
        }
        return successfulFeedbackPageBinding.root
    }

}
