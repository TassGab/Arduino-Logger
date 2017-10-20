#include "Logging_class.h"
//#define debug
LoggingCs::LoggingCs()
{
  LogLevel=ZBLogLevel=_Verbose;
  AutoCR=false;
  ZBen=false;
}
void LoggingCs::Verbose(String s)
{
  if(_Verbose>=Log.LogLevel)
  {
    Print(s);
  }
  if((_Verbose>=Log.ZBLogLevel)&(Log.ZBen))
  {
    //ZBsend(s);
	#ifdef debug
    Serial.print("ZB:");
    Serial.print(s);
	#endif
    if(Log.AutoCR) Serial.println();
  }
}
void LoggingCs::Debug(String s)
{
  if(_Debug>=Log.LogLevel)
  {
    Print(s);
  }
  if((_Debug>=Log.ZBLogLevel)&(Log.ZBen))
  {
    //ZBsend(s);
	#ifdef debug
    Serial.print("ZB:");
    Serial.print(s);
	#endif
    if(Log.AutoCR) Serial.println();
  }
}
void LoggingCs::Info(String s)
{
  if(_Info>=Log.LogLevel)
  {
    Print(s);
  }
  if((_Info>=Log.ZBLogLevel)&(Log.ZBen))
  {
    //ZBsend(s);
	#ifdef debug
    Serial.print("ZB:");
    Serial.print(s);
	#endif
    if(Log.AutoCR) Serial.println();
  }
}
void LoggingCs::Error(String s)
{
  if(_Error>=Log.LogLevel)
  {
    Print(s);
  }
  if((_Error>=Log.ZBLogLevel)&(Log.ZBen))
  {
    //ZBsend(s);
	#ifdef debug
    Serial.print("ZB:");
    Serial.print(s);
	#endif
    if(Log.AutoCR) Serial.println();
  }
}
void LoggingCs::Print(String s)
{
  Serial.print(s);
  if(Log.AutoCR) Serial.println();
}
//void LoggingCs::ZBsend(String s)
//{
//  Serial.print(s);
//  byte data[CHB_MAX_PAYLOAD];
//  unsigned int len;
//  s+='\0';
//  len=byte(s.length());
//  s.toCharArray(data,len);
//  chibiTx(BROADCAST_ADDR, (byte *)data,len);
//}
LoggingCs Log=LoggingCs(); //instance for the user

