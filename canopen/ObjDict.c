
/* File generated by gen_cfile.py. Should not be modified. */

#include "ObjDict.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/
UNS8 Read_Inputs_8_Bit[] =		/* Mapped at index 0x6000, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Polarity_Input_8_Bit[] =		/* Mapped at index 0x6002, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Filter_Constant_Input_8_Bit[] =		/* Mapped at index 0x6003, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Global_Interrupt_Enable_Digital = 0x1;		/* Mapped at index 0x6005, subindex 0x00 */
UNS8 Interrupt_Mask_Any_Change_8_Bit[] =		/* Mapped at index 0x6006, subindex 0x01 - 0x01 */
  {
    0xFF	/* 255 */
  };
UNS8 Interrupt_Mask_Low_to_High_8_Bit[] =		/* Mapped at index 0x6007, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Interrupt_Mask_High_to_Low_8_Bit[] =		/* Mapped at index 0x6008, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Write_Outputs_8_Bit[] =		/* Mapped at index 0x6200, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Change_Polarity_Outputs_8_Bit[] =		/* Mapped at index 0x6202, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Error_Mode_Outputs_8_Bit[] =		/* Mapped at index 0x6206, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };
UNS8 Error_Value_Outputs_8_Bit[] =		/* Mapped at index 0x6207, subindex 0x01 - 0x01 */
  {
    0x0	/* 0 */
  };

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 ObjDict_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 ObjDict_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 ObjDict_iam_a_slave = 1;

TIMER_HANDLE ObjDict_heartBeatTimers[1] = {TIMER_NONE};

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 ObjDict_obj1000 = 0x30191;	/* 197009 */
                    subindex ObjDict_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1000, NULL }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 ObjDict_obj1001 = 0x0;	/* 0 */
                    subindex ObjDict_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_obj1001, NULL }
                     };

/* index 0x1003 :   Pre-defined Error Field. */
                    UNS8 ObjDict_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    subindex ObjDict_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1003, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[0], NULL }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 ObjDict_obj1005 = 0x80;	/* 128 */
                    subindex ObjDict_Index1005[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1005, NULL }
                     };

/* index 0x1006 :   Communication / Cycle Period */
                    UNS32 ObjDict_obj1006 = 0x0;   /* 0 */

/* index 0x1008 :   Manufacturer Device Name. */
                    UNS8 ObjDict_obj1008[10] = "";
                    subindex ObjDict_Index1008[] = 
                     {
                       { RO, visible_string, 10, (void*)&ObjDict_obj1008, NULL }
                     };

/* index 0x1009 :   Manufacturer Hardware Version. */
                    UNS8 ObjDict_obj1009[10] = "";
                    subindex ObjDict_Index1009[] = 
                     {
                       { RO, visible_string, 10, (void*)&ObjDict_obj1009, NULL }
                     };

/* index 0x100A :   Manufacturer Software Version. */
                    UNS8 ObjDict_obj100A[10] = "";
                    subindex ObjDict_Index100A[] = 
                     {
                       { RO, visible_string, 10, (void*)&ObjDict_obj100A, NULL }
                     };

/* index 0x100C :   Guard Time */ 
                    UNS16 ObjDict_obj100C = 0x0;   /* 0 */

/* index 0x100D :   Life Time Factor */ 
                    UNS8 ObjDict_obj100D = 0x0;   /* 0 */

/* index 0x1010 :   Store parameters. */
                    UNS8 ObjDict_highestSubIndex_obj1010 = 4; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1010_Save_All_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1010_Save_Communication_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1010_Save_Application_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1010_Save_Manufacturer_Parameters_1 = 0x0;	/* 0 */
                    subindex ObjDict_Index1010[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1010, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1010_Save_All_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1010_Save_Communication_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1010_Save_Application_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1010_Save_Manufacturer_Parameters_1, NULL }
                     };

/* index 0x1011 :   Restore Default Parameters. */
                    UNS8 ObjDict_highestSubIndex_obj1011 = 4; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1011_Restore_All_Default_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1011_Restore_Communication_Default_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1011_Restore_Application_Default_Parameters = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1011_Restore_Manufacturer_Defined_Default_Parameters_1 = 0x0;	/* 0 */
                    subindex ObjDict_Index1011[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1011, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1011_Restore_All_Default_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1011_Restore_Communication_Default_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1011_Restore_Application_Default_Parameters, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1011_Restore_Manufacturer_Defined_Default_Parameters_1, NULL }
                     };

/* index 0x1014 :   Emergency COB ID. */
                    UNS32 ObjDict_obj1014 = 0x80;	/* 128 */
                    subindex ObjDict_Index1014[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1014, NULL }
                     };

/* index 0x1016 :   Consumer Heartbeat Time. */
                    UNS8 ObjDict_highestSubIndex_obj1016 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1016[] = 
                    {
                      0x0	/* 0 */
                    };
                    subindex ObjDict_Index1016[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1016, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1016[0], NULL }
                     };

/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 ObjDict_obj1017 = 0x2710;	/* 10000 */
                    subindex ObjDict_Index1017[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1017, NULL }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 ObjDict_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1018_Vendor_ID = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Product_Code = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Revision_Number = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Serial_Number = 0x0;	/* 0 */
                    subindex ObjDict_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1018, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Vendor_ID, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Product_Code, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Revision_Number, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Serial_Number, NULL }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex ObjDict_Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1200, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO, NULL }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1400 = 5; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1400_COB_ID_used_by_PDO = 0x200;	/* 512 */
                    UNS8 ObjDict_obj1400_Transmission_Type = 0x1;	/* 1 */
                    UNS16 ObjDict_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1400_Event_Timer = 0x0;	/* 0 */
                    subindex ObjDict_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1400, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1400_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Event_Timer, NULL }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1600 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1600[] = 
                    {
                      0x62000108	/* 1644167432 */
                    };
                    subindex ObjDict_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1600, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1600[0], NULL }
                     };

/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1800 = 5; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1800_COB_ID_used_by_PDO = 0x180;	/* 384 */
                    UNS8 ObjDict_obj1800_Transmission_Type = 0xFF;	/* 255 */
                    UNS16 ObjDict_obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1800_Event_Timer = 0x0;	/* 0 */
                    subindex ObjDict_Index1800[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1800, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1800_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Event_Timer, NULL }
                     };

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A00 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A00[] = 
                    {
                      0x60000108	/* 1610613000 */
                    };
                    subindex ObjDict_Index1A00[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A00, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1A00[0], NULL }
                     };

/* index 0x6000 :   Mapped variable Read Inputs 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6000 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6000[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6000, NULL },
                       { RO, uint8, sizeof (UNS8), (void*)&Read_Inputs_8_Bit[0], NULL }
                     };

/* index 0x6002 :   Mapped variable Polarity Input 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6002 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6002[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6002, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Polarity_Input_8_Bit[0], NULL }
                     };

/* index 0x6003 :   Mapped variable Filter Constant Input 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6003 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6003[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6003, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Filter_Constant_Input_8_Bit[0], NULL }
                     };

/* index 0x6005 :   Mapped variable Global Interrupt Enable Digital */
                    subindex ObjDict_Index6005[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&Global_Interrupt_Enable_Digital, NULL }
                     };

/* index 0x6006 :   Mapped variable Interrupt Mask Any Change 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6006 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6006[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6006, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Interrupt_Mask_Any_Change_8_Bit[0], NULL }
                     };

/* index 0x6007 :   Mapped variable Interrupt Mask Low to High 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6007 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6007[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6007, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Interrupt_Mask_Low_to_High_8_Bit[0], NULL }
                     };

/* index 0x6008 :   Mapped variable Interrupt Mask High to Low 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6008 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6008[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6008, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Interrupt_Mask_High_to_Low_8_Bit[0], NULL }
                     };

/* index 0x6200 :   Mapped variable Write Outputs 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6200 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6200, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Write_Outputs_8_Bit[0], NULL }
                     };

/* index 0x6202 :   Mapped variable Change Polarity Outputs 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6202 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6202[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6202, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Change_Polarity_Outputs_8_Bit[0], NULL }
                     };

/* index 0x6206 :   Mapped variable Error Mode Outputs 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6206 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6206[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6206, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Error_Mode_Outputs_8_Bit[0], NULL }
                     };

/* index 0x6207 :   Mapped variable Error Value Outputs 8 Bit */
                    UNS8 ObjDict_highestSubIndex_obj6207 = 1; /* number of subindex - 1*/
                    subindex ObjDict_Index6207[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj6207, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&Error_Value_Outputs_8_Bit[0], NULL }
                     };

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable ObjDict_objdict[] = 
{
  { (subindex*)ObjDict_Index1000,sizeof(ObjDict_Index1000)/sizeof(ObjDict_Index1000[0]), 0x1000},
  { (subindex*)ObjDict_Index1001,sizeof(ObjDict_Index1001)/sizeof(ObjDict_Index1001[0]), 0x1001},
  { (subindex*)ObjDict_Index1003,sizeof(ObjDict_Index1003)/sizeof(ObjDict_Index1003[0]), 0x1003},
  { (subindex*)ObjDict_Index1005,sizeof(ObjDict_Index1005)/sizeof(ObjDict_Index1005[0]), 0x1005},
  { (subindex*)ObjDict_Index1008,sizeof(ObjDict_Index1008)/sizeof(ObjDict_Index1008[0]), 0x1008},
  { (subindex*)ObjDict_Index1009,sizeof(ObjDict_Index1009)/sizeof(ObjDict_Index1009[0]), 0x1009},
  { (subindex*)ObjDict_Index100A,sizeof(ObjDict_Index100A)/sizeof(ObjDict_Index100A[0]), 0x100A},
  { (subindex*)ObjDict_Index1010,sizeof(ObjDict_Index1010)/sizeof(ObjDict_Index1010[0]), 0x1010},
  { (subindex*)ObjDict_Index1011,sizeof(ObjDict_Index1011)/sizeof(ObjDict_Index1011[0]), 0x1011},
  { (subindex*)ObjDict_Index1014,sizeof(ObjDict_Index1014)/sizeof(ObjDict_Index1014[0]), 0x1014},
  { (subindex*)ObjDict_Index1016,sizeof(ObjDict_Index1016)/sizeof(ObjDict_Index1016[0]), 0x1016},
  { (subindex*)ObjDict_Index1017,sizeof(ObjDict_Index1017)/sizeof(ObjDict_Index1017[0]), 0x1017},
  { (subindex*)ObjDict_Index1018,sizeof(ObjDict_Index1018)/sizeof(ObjDict_Index1018[0]), 0x1018},
  { (subindex*)ObjDict_Index1200,sizeof(ObjDict_Index1200)/sizeof(ObjDict_Index1200[0]), 0x1200},
  { (subindex*)ObjDict_Index1400,sizeof(ObjDict_Index1400)/sizeof(ObjDict_Index1400[0]), 0x1400},
  { (subindex*)ObjDict_Index1600,sizeof(ObjDict_Index1600)/sizeof(ObjDict_Index1600[0]), 0x1600},
  { (subindex*)ObjDict_Index1800,sizeof(ObjDict_Index1800)/sizeof(ObjDict_Index1800[0]), 0x1800},
  { (subindex*)ObjDict_Index1A00,sizeof(ObjDict_Index1A00)/sizeof(ObjDict_Index1A00[0]), 0x1A00},
  { (subindex*)ObjDict_Index6000,sizeof(ObjDict_Index6000)/sizeof(ObjDict_Index6000[0]), 0x6000},
  { (subindex*)ObjDict_Index6002,sizeof(ObjDict_Index6002)/sizeof(ObjDict_Index6002[0]), 0x6002},
  { (subindex*)ObjDict_Index6003,sizeof(ObjDict_Index6003)/sizeof(ObjDict_Index6003[0]), 0x6003},
  { (subindex*)ObjDict_Index6005,sizeof(ObjDict_Index6005)/sizeof(ObjDict_Index6005[0]), 0x6005},
  { (subindex*)ObjDict_Index6006,sizeof(ObjDict_Index6006)/sizeof(ObjDict_Index6006[0]), 0x6006},
  { (subindex*)ObjDict_Index6007,sizeof(ObjDict_Index6007)/sizeof(ObjDict_Index6007[0]), 0x6007},
  { (subindex*)ObjDict_Index6008,sizeof(ObjDict_Index6008)/sizeof(ObjDict_Index6008[0]), 0x6008},
  { (subindex*)ObjDict_Index6200,sizeof(ObjDict_Index6200)/sizeof(ObjDict_Index6200[0]), 0x6200},
  { (subindex*)ObjDict_Index6202,sizeof(ObjDict_Index6202)/sizeof(ObjDict_Index6202[0]), 0x6202},
  { (subindex*)ObjDict_Index6206,sizeof(ObjDict_Index6206)/sizeof(ObjDict_Index6206[0]), 0x6206},
  { (subindex*)ObjDict_Index6207,sizeof(ObjDict_Index6207)/sizeof(ObjDict_Index6207[0]), 0x6207},
};

const indextable * ObjDict_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode)
{
	int i;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1003: i = 2;break;
		case 0x1005: i = 3;break;
		case 0x1008: i = 4;break;
		case 0x1009: i = 5;break;
		case 0x100A: i = 6;break;
		case 0x1010: i = 7;break;
		case 0x1011: i = 8;break;
		case 0x1014: i = 9;break;
		case 0x1016: i = 10;break;
		case 0x1017: i = 11;break;
		case 0x1018: i = 12;break;
		case 0x1200: i = 13;break;
		case 0x1400: i = 14;break;
		case 0x1600: i = 15;break;
		case 0x1800: i = 16;break;
		case 0x1A00: i = 17;break;
		case 0x6000: i = 18;break;
		case 0x6002: i = 19;break;
		case 0x6003: i = 20;break;
		case 0x6005: i = 21;break;
		case 0x6006: i = 22;break;
		case 0x6007: i = 23;break;
		case 0x6008: i = 24;break;
		case 0x6200: i = 25;break;
		case 0x6202: i = 26;break;
		case 0x6206: i = 27;break;
		case 0x6207: i = 28;break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &ObjDict_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status ObjDict_PDO_status[1] = {s_PDO_status_Initializer};

const quick_index ObjDict_firstIndex = {
  13, /* SDO_SVR */
  0, /* SDO_CLT */
  14, /* PDO_RCV */
  15, /* PDO_RCV_MAP */
  16, /* PDO_TRS */
  17 /* PDO_TRS_MAP */
};

const quick_index ObjDict_lastIndex = {
  13, /* SDO_SVR */
  0, /* SDO_CLT */
  14, /* PDO_RCV */
  15, /* PDO_RCV_MAP */
  16, /* PDO_TRS */
  17 /* PDO_TRS_MAP */
};

const UNS16 ObjDict_ObjdictSize = sizeof(ObjDict_objdict)/sizeof(ObjDict_objdict[0]); 

CO_Data ObjDict_Data = CANOPEN_NODE_DATA_INITIALIZER(ObjDict);

