#ifndef Logging_h
  #define logging_h
 #include <Arduino.h>
typedef enum {_Verbose,_Debug, _Info, _Error} Log_en;
class LoggingCs
{
  public:
   LoggingCs();
   Log_en LogLevel;
   Log_en ZBLogLevel;
   bool ZBen;
   bool AutoCR;
   void Verbose(String);
   void Debug(String);
   void Info(String);
   void Error(String);
  private:
   void Print(String);
    //ZBsend(String);
};
extern LoggingCs Log; //make an instance for the user

#endif
