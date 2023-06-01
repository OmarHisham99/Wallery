package com.example.wallery

import android.os.Binder
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentIntroPage3Binding


class IntroPage3 : Fragment() {

   private lateinit var introPageBinding: FragmentIntroPage3Binding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        introPageBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_intro_page3,container,false)
        introPageBinding.next3.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage3_to_signUpPage)
        })
        introPageBinding.back3.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage3_to_introPage2)
        })

        return introPageBinding.root
    }


}