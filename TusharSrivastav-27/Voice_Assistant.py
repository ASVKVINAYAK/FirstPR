import pyttsx3
import speech_recognition as sr
import os
import datetime
import pytz
import requests,json
import pywhatkit as kit
converter=pyttsx3.init()
 
voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0"
converter.setProperty('voice',voice_id)
converter.runAndWait()

pyttsx3.speak("hello sir ")
pyttsx3.speak("My name is hp")
pyttsx3.speak("your artificial intelegence assistant sir. how can i help you?")

def takecommand():
    r=sr.Recognizer() 
    with sr.Microphone() as source:
         print("Listening...")
         r.pause_threshold=1
         audio=r.listen(source)

    try:
         print("Recognizing....")
         query=r.recognize_google(audio,language='en-in')
         print(query)
    except Exception as e:
         print(e)
         pyttsx3.speak("please say again")

         return "None"
    return query

while True:
 converter=pyttsx3.init()
 
 voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0"
 converter.setProperty('voice',voice_id)
 converter.runAndWait()

 query=takecommand().lower()
 if 'activate' in query:
   pyttsx3.speak("activating jarvis sir")

   converter=pyttsx3.init()

   voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_DAVID_11.0"
   converter.setProperty('voice',voice_id)
   converter.runAndWait()
   pyttsx3.speak("hello sir")
   pyttsx3.speak("i Jarvis")
   pyttsx3.speak("myself coming from village area ")

   while True:
     
     query=takecommand().lower()
     if 'search' in query:
       pyttsx3.speak("Searching sir")
       kit.search(query)


     elif 'whatsapp mummy jio' in query:
        pyttsx3.speak("what is your message. sir")
        query=takecommand().lower()
        current_time = datetime.datetime.now(pytz.timezone('Asia/Kolkata'))
        a=current_time.hour
        b=current_time.minute
        kit.sendwhatmsg("+91 7905470761",query,a,b+1)

     elif 'whatsapp brother' in query:
        pyttsx3.speak("what is your message. sir")
        query=takecommand().lower()
        current_time = datetime.datetime.now(pytz.timezone('Asia/Kolkata'))
        a=current_time.hour
        b=current_time.minute
        kit.sendwhatmsg("+91 8417829444",query,a,b+1)

     elif 'play' in query:
       #pyttsx3.speak("one minute sir. just hogaya.      please sir wait")
       #takecommand()
       #pyttsx3.speak("shut up! you aashhole don't disturb me.let me do my work")
       #takecommand()
       #pyttsx3.speak("sorry sir. i am just kidding")
       pyttsx3.speak("playing your music sir")
       kit.playonyt(query)

     elif 'restart my computer' in query:
       os.system("shutdown /r /t 1")
 
     elif 'sleep my computer' in query:
      os.system("shutdown.exe /h")

     elif 'goodbye jarvis' in query:
       pyttsx3.speak("ok sir good bye      I will be always present     whenever you call me")
       break


     elif 'jarvis change your voice to girl' in query:
       converter=pyttsx3.init()
 
       voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0"
       converter.setProperty('voice',voice_id)
       pyttsx3.speak("changed my voice to girl sir")
       converter.runAndWait()

     elif 'jarvis change your voice to boy' in query:
       converter=pyttsx3.init()
 
       voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_DAVID_11.0"
       converter.setProperty('voice',voice_id)
       pyttsx3.speak("changed my voice to boy sir")
       converter.runAndWait()

     elif 'create a text file' in query:
       pyttsx3.speak("what will be the name of the file sir?")
       query=takecommand().lower()
       file1=open(query+"txt","a")
       pyttsx3.speak("what should i write sir.In your text file")
       query=takecommand().lower()
       L=[query]
       file1.writelines(L)
       pyttsx3.speak("should i close and save your file sir?")
       query=takecommand().lower()
       if 'my file' in query:
         file1.close()
         pyttsx3.speak("file is saved successfully sir")

 
     elif 'navigate' in query:
       pyttsx3.speak("navigating sir")
       kit.search(query)
   
 #converter=pyttsx3.init()
 #voice_id ="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0"
 #converter.setProperty('voice',voice_id)
 #converter.runAndWait()

 elif 'goodbye hp' in query:
   pyttsx3.speak("ok sir goodbye")
   exit()
