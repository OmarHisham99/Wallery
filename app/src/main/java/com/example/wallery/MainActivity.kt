package com.example.wallery

import android.content.ContentValues
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.annotation.NonNull
import androidx.navigation.findNavController
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth

class MainActivity : AppCompatActivity() {

    private lateinit var firebaseAuth: FirebaseAuth
    lateinit var mAuth: FirebaseAuth.AuthStateListener

    private lateinit var mainBinding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        //setContentView(R.layout.activity_main)
    }

    override fun onStart() {
        super.onStart()
        firebaseAuth = FirebaseAuth.getInstance()
        mAuth = FirebaseAuth.AuthStateListener() {
            fun onAuthStateChanged(@NonNull firebaseAuth: FirebaseAuth) {
                val user = FirebaseAuth.getInstance()!!.currentUser
                if (user != null) {
                    Log.d(ContentValues.TAG, "userFound")
                   findNavController(R.id.welcomeScreen).navigate(R.id.action_welcomeScreen_to_homePage)
                } else {
                    Log.d(ContentValues.TAG, "User Not Found")

                }
            }
        }
    }
}