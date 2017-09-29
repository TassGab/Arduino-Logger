//typedef enum {Verbose,Debug, Info, Error} Log_en;
//Log_en LogLevel;
//Log_en ZBLogLevel;
//bool ZigBeeEn;
//bool AutoCR;
#include "logging_class.h"
void setup() {
  // put your setup code here, to run once:
Log.LogLevel=_Info;
Log.ZBen=true;
Log.ZBLogLevel=_Error;
Log.AutoCR=true;
Serial.begin(9600);
Log.Error("Ciao, Error is enabled");
Log.Info("Info is enabled");
Log.Debug("DebugSTop");
Log.Verbose("VerboseStop");
}

void loop() {
  // put your main code here, to run repeatedly:

}

//void Log(String s, Log_en mode)
//{
// // Serial.print(String(mode));
//  if(mode>=LogLevel)
//  {
//    Print(s);
//  }
//  if((mode>=ZBLogLevel)&(ZigBeeEn))
//  {
//    //SendZB(s);
//    Serial.print("ZB:");
//    Serial.print(s);
//    if(AutoCR) Serial.println();
//  }
//}
//void Print(String s)
//{
//  Serial.print(s);
//  if(AutoCR) Serial.println();
//  //SendZB(s);
//}
////void SendZB(String s)
////{
////  Serial.print(s);
////  byte data[CHB_MAX_PAYLOAD];
////  unsigned int len;
////  s+='\0';
////  len=byte(s.length());
////  s.toCharArray(data,len);
////  chibiTx(BROADCAST_ADDR, (byte *)data,len);
////}

