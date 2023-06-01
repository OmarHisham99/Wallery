package com.example.wallery

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.PopupMenu
import androidx.databinding.DataBindingUtil
import androidx.navigation.fragment.findNavController
import com.example.wallery.databinding.FragmentHomePageBinding
import com.google.firebase.auth.FirebaseAuth
import com.unity3d.player.UnityPlayerActivity
import java.lang.Exception



class HomePage : Fragment() {

    private lateinit var firebaseAuth : FirebaseAuth
    private lateinit var homePageBinding: FragmentHomePageBinding
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        firebaseAuth = FirebaseAuth.getInstance()
        homePageBinding = DataBindingUtil.inflate(inflater,R.layout.fragment_home_page,container,false)

        homePageBinding.profileBtn.setOnClickListener{
           menuBehavior(it)
        }

        homePageBinding.arBtnHomePage.setOnClickListener{
            val intent = Intent(this.context,UnityPlayerActivity::class.java)
            startActivity(intent)


        }
        homePageBinding.staticBtnHomePage.setOnClickListener{
            val intent = Intent(this.context,StaticImagePage::class.java)
            startActivity(intent)
        }
        return homePageBinding.root
    }


private fun menuBehavior(view:View){
    val popupMenu = PopupMenu(this.context,view)
    popupMenu.setOnMenuItemClickListener { item->
        when(item.itemId){
            R.id.feedback_menu_btn-> {
                findNavController().navigate(R.id.action_homePage_to_feedback_page)
                true
            }
            R.id.logout_menu_btn ->{
                firebaseAuth.signOut()
                findNavController().navigate(R.id.action_homePage_to_signInPage)
                true
            }
            else ->false
        }
    }
    popupMenu.inflate(R.menu.profile_menu)
    try{
        val fieldMPop = PopupMenu::class.java.getDeclaredField("mPopup")
        fieldMPop.isAccessible = true
        val mPopup = fieldMPop.get(popupMenu)
        mPopup.javaClass.getDeclaredMethod("setForceShowIcon",Boolean::class.java)
                .invoke(mPopup,true)
    }catch (e:Exception){
        Log.e("HomePage","Error Showing Menu",e)
    }finally {
        popupMenu.show()
    }
}
}