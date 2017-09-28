typedef enum {Verbose,Debug, Info, Error} Log_en;
Log_en LogLevel;
Log_en ZBLogLevel;
bool ZigBeeEn;
bool AutoCR;
void setup() {
  // put your setup code here, to run once:
LogLevel=Info;
ZigBeeEn=true;
ZBLogLevel=Error;
AutoCR=true;
Serial.begin(9600);
Log("Ciao",Info);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void Log(String s, Log_en mode)
{
 // Serial.print(String(mode));
  if(mode>=LogLevel)
  {
    Print(s);
  }
  if((mode>=ZBLogLevel)&(ZigBeeEn))
  {
    //SendZB(s);
    Serial.print("ZB:");
    Serial.print(s);
    if(AutoCR) Serial.println();
  }
}
void Print(String s)
{
  Serial.print(s);
  if(AutoCR) Serial.println();
  //SendZB(s);
}
//void SendZB(String s)
//{
//  Serial.print(s);
//  byte data[CHB_MAX_PAYLOAD];
//  unsigned int len;
//  s+='\0';
//  len=byte(s.length());
//  s.toCharArray(data,len);
//  chibiTx(BROADCAST_ADDR, (byte *)data,len);
//}

