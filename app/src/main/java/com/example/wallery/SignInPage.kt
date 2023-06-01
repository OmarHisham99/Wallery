package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentSignInPageBinding
import com.google.firebase.auth.FirebaseAuth

class SignInPage : Fragment() {

    private lateinit var signinBinding : FragmentSignInPageBinding
    private lateinit var firebaseAuth : FirebaseAuth
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        signinBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_sign_in_page,container,false)
        firebaseAuth = FirebaseAuth.getInstance()


        signinBinding.signupTxtlogin.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_signInPage_to_signUpPage2)
        })

        signinBinding.loginBtn.setOnClickListener(View.OnClickListener {
            signInProcess()
        })
        return signinBinding.root
    }

    fun signInProcess(){
        val email = signinBinding.emailField.text.toString()
        val pass = signinBinding.passwordField.text.toString()

        if (email.isNotEmpty() && pass.isNotEmpty()) {
            firebaseAuth.signInWithEmailAndPassword(email, pass).addOnCompleteListener {
                if (it.isSuccessful) {
                    Toast.makeText(this.context, "Login Successfully.", Toast.LENGTH_SHORT)
                        .show()
                    findNavController().navigate(R.id.action_signInPage_to_homePage)
                } else {
                    Toast.makeText(this.context, it.exception.toString(), Toast.LENGTH_SHORT)
                        .show()
                }
            }
        } else {
            Toast.makeText(this.context, "Empty Fields Are Not Allowed", Toast.LENGTH_SHORT).show()
        }
    }
}