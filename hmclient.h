/* *--------oO()Oo------- */

#ifndef HMCLIENT_H
#define HMCLIENT_H

/*
** Homematic Sytemvariable definitions 
** @SysVarType 
***/
typedef enum HMTYPE {STRING, LIST, NUMBER, BOOL, ALARM} hmtype_t;

typedef struct HMSTRING {
  hmtype_t Type = STRING;
  const char *Name;
  const char *Comment;
  const char *Value;
  const char *ValueUnit;
  const char *ValueType = "ivtString";
  const char *ValueSubType = "istChar8859";
  boolean Internal = false;
  boolean Visible = true;
}hmstring_t;

typedef struct HMLIST {
  hmtype_t Type = LIST;
  const char *Name;
  const char *Comment;
  uint8_t Value;
  const char *ValueList[];
  const char *ValueType = "ivtBinary";
  const char *ValueSubType = "istEnum";
  boolean Internal = false;
  boolean Visible = true;
}hmlist_t;

typedef struct HMNumber {  
  hmtype_t Type = NUMBER;
  const char *Name;
  const char *Comment;
  float Value;
  const char *ValueUnit;
  float ValueMin = 0;
  float ValueMax = 6500;
  const char *ValueType = "ivtFloat";
  const char *ValueSubType = "istGeneric";
  boolean Internal = false;
  boolean Visible = true;
}hmnumber_t;

typedef struct HMBOOL {
  hmtype_t Type = BOOL;
  const char *Name;
  const char *Comment;
  boolean Value;
  const char *ValueType = "ivtBinary";
  const char *ValueSubType = "istBool";
  boolean Internal = false;
  boolean Visible = true;
}hmbool_t;

typedef struct HMALARM {
  hmtype_t Type = ALARM;
  const char *Name;
  const char *Comment;
  boolean Value;
  const char *ValueType = "ivtBinary";
  const char *ValueSubType = "istAlarm";
  boolean Internal = false;
  boolean Visible = true;
}hmalarm_t;


class HMClient{
  public:
    /* constructor */
    HMClient();
  
    /* read function */
    boolean getHMSystemVariable();
  
    /* write function */
    boolean setHMSystemVariable();
  private:
  
}


#endif #HMCLIENT_H
