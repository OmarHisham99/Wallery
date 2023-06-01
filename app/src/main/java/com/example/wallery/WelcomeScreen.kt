package com.example.wallery

import android.content.ContentValues.TAG
import android.nfc.Tag
import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.annotation.NonNull
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import androidx.navigation.ui.NavigationUI
import com.example.wallery.databinding.FragmentWelcomeScreenBinding
import com.google.firebase.auth.FirebaseAuth
import kotlin.math.log


class WelcomeScreen : Fragment() {

    private lateinit var welocmeBinding : FragmentWelcomeScreenBinding







    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment )



        welocmeBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_welcome_screen,container,false)
        welocmeBinding.signupBtnWelcome.setOnClickListener(View.OnClickListener {
                findNavController().navigate(R.id.action_welcomeScreen_to_introPage1)
        })
        welocmeBinding.loginTxt.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_welcomeScreen_to_signInPage)
        })

        return welocmeBinding.root
    }


}