package com.example.wallery.FirbaseObj

class User {
    var firstName :String = ""
    var secondName:String =""
    var email : String = ""
    var birthDate:String= ""

    constructor(){}

    constructor(FN:String, SN:String,Em:String,BD:String){
        firstName= FN;
        secondName=SN;
        email= Em;
        birthDate=BD;
    }


}