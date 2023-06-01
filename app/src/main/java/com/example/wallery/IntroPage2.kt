package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentIntroPage2Binding


class IntroPage2 : Fragment() {

    private lateinit var introPageBinding : FragmentIntroPage2Binding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        introPageBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_intro_page2,container,false)
        introPageBinding.next2.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage2_to_introPage3)
        })
        introPageBinding.back2.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage2_to_introPage1)
        })
        introPageBinding.skip2.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage2_to_signUpPage)
        })
        return introPageBinding.root
    }


}