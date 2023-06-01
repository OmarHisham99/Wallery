package com.example.wallery

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.FirbaseObj.User
import com.example.wallery.databinding.FragmentSignUpPageBinding
import com.google.android.gms.tasks.OnCompleteListener
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.database.FirebaseDatabase
import kotlin.math.sign


class SignUpPage : Fragment() {


    private lateinit var signUpBinging : FragmentSignUpPageBinding
    private lateinit var firebaseAuth : FirebaseAuth
    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?,
                              savedInstanceState: Bundle?): View? {
        // Inflate the layout for this fragment
        signUpBinging = DataBindingUtil.inflate(inflater, R.layout.fragment_sign_up_page,container,false)
        firebaseAuth = FirebaseAuth.getInstance()

        signUpBinging.loginTxtSignUp.setOnClickListener(View.OnClickListener {
            findNavController().navigate(R.id.action_signUpPage_to_signInPage)
        })

        signUpBinging.signupBtnSignUp.setOnClickListener(View.OnClickListener {
           sigupProcess()
        })


        return signUpBinging.root
    }



    fun sigupProcess(){
        val firstName = signUpBinging.firstNameField.text.toString()
        val secondName = signUpBinging.secondNameField.text.toString()
        val email = signUpBinging.emailFieldSignUp.text.toString()
        val pass = signUpBinging.passwordFieldSignUp.text.toString()
        val birthD = signUpBinging.birthdateFieldSignUp.text.toString()

        if (firstName.isNotEmpty() && secondName.isNotEmpty() && email.isNotEmpty() && pass.isNotEmpty() && birthD.isNotEmpty()) {
            firebaseAuth.createUserWithEmailAndPassword(email, pass).addOnCompleteListener {
                if (it.isSuccessful) {
                    val user = User(firstName, secondName, email, birthD)
                    FirebaseDatabase.getInstance().getReference("Users")
                        .child(FirebaseAuth.getInstance().currentUser!!.uid).setValue(user)
                        .addOnCompleteListener {
                            if (it.isSuccessful) {
                                Toast.makeText(
                                    this.context,
                                    "User Has Been Registered Successfully",
                                    Toast.LENGTH_SHORT
                                ).show()
                                findNavController().navigate(R.id.action_signUpPage_to_homePage)
                            } else {
                                Toast.makeText(this.context, it.exception.toString(), Toast.LENGTH_SHORT).show()
                            }
                        }

                } else{
                    Toast.makeText(this.context, it.exception.toString(), Toast.LENGTH_SHORT).show()
                }
            }

        } else {
            Toast.makeText(this.context, "Empty Fields Are Not Allowed", Toast.LENGTH_SHORT)
                .show()
        }
    }

}