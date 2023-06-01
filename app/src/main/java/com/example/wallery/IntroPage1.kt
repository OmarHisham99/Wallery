package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentIntroPage1Binding


class IntroPage1 : Fragment() {
    private lateinit var intropageBinding : FragmentIntroPage1Binding
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        intropageBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_intro_page1,container,false)
        intropageBinding.next1.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage1_to_introPage2)
        })
        intropageBinding.back1.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage1_to_welcomeScreen)
        })
        intropageBinding.skip1.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_introPage1_to_signUpPage2)
        })
        return intropageBinding.root
    }


}