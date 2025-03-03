
typedef struct _PMU_SMB_DIAG_t { 
   uint8_t  DiagTestNum;      // Byte offset 0x400, CSR Addr 0x58200, Direction=N/A 
   uint8_t  DiagSubTest;      // Byte offset 0x401, CSR Addr 0x58200, Direction=N/A 
   uint8_t  DiagPrbs;         // Byte offset 0x402, CSR Addr 0x58201, Direction=N/A 
   uint8_t  DiagRank;         // Byte offset 0x403, CSR Addr 0x58201, Direction=N/A 
   uint8_t  DiagChannel;      // Byte offset 0x404, CSR Addr 0x58202, Direction=N/A 
   uint8_t  DiagRepeatCount;  // Byte offset 0x405, CSR Addr 0x58202, Direction=N/A 
   uint8_t  DiagLoopCount;    // Byte offset 0x406, CSR Addr 0x58203, Direction=N/A 
   uint8_t  DiagByte;         // Byte offset 0x407, CSR Addr 0x58203, Direction=N/A 
   uint8_t  DiagLane;         // Byte offset 0x408, CSR Addr 0x58204, Direction=N/A 
   uint8_t  DiagVrefInc;      // Byte offset 0x409, CSR Addr 0x58204, Direction=N/A 
   uint8_t  DiagReserved0A;   // Byte offset 0x40a, CSR Addr 0x58205, Direction=N/A 
   uint8_t  DiagXCount;       // Byte offset 0x40b, CSR Addr 0x58205, Direction=N/A 
   uint16_t DiagAddrLow;      // Byte offset 0x40c, CSR Addr 0x58206, Direction=N/A 
   uint16_t DiagAddrHigh;     // Byte offset 0x40e, CSR Addr 0x58207, Direction=N/A 
   uint16_t DiagPatternLow;   // Byte offset 0x410, CSR Addr 0x58208, Direction=N/A 
   uint16_t DiagPatternHigh;  // Byte offset 0x412, CSR Addr 0x58209, Direction=N/A 
   uint8_t  DiagMisc0;        // Byte offset 0x414, CSR Addr 0x5820a, Direction=N/A 
   uint8_t  DiagMisc1;        // Byte offset 0x415, CSR Addr 0x5820a, Direction=N/A 
   uint8_t  DiagMisc2;        // Byte offset 0x416, CSR Addr 0x5820b, Direction=N/A 
   uint8_t  DiagMisc3;        // Byte offset 0x417, CSR Addr 0x5820b, Direction=N/A 
   uint8_t  DiagMisc4;        // Byte offset 0x418, CSR Addr 0x5820c, Direction=N/A 
   uint8_t  DiagReserved19;   // Byte offset 0x419, CSR Addr 0x5820c, Direction=N/A 
   uint8_t  DiagReserved1A;   // Byte offset 0x41A, CSR Addr 0x5820d, Direction=N/A 
   uint8_t  DiagReserved1B;   // Byte offset 0x41B, CSR Addr 0x5820d, Direction=N/A 
   uint8_t  DiagReserved1C;   // Byte offset 0x41C, CSR Addr 0x5820e, Direction=N/A 
   uint8_t  DiagReserved1D;   // Byte offset 0x41D, CSR Addr 0x5820e, Direction=N/A 
   uint8_t  DiagReserved1E;   // Byte offset 0x41E, CSR Addr 0x5820f, Direction=N/A 
   uint8_t  DiagReserved1F;   // Byte offset 0x41F, CSR Addr 0x5820f, Direction=N/A 
   uint8_t  DiagReserved20;   // Byte offset 0x420, CSR Addr 0x58210, Direction=N/A 
   uint8_t  DiagReserved21;   // Byte offset 0x421, CSR Addr 0x58210, Direction=N/A 
   uint8_t  DiagReserved22;   // Byte offset 0x422, CSR Addr 0x58211, Direction=N/A 
   uint8_t  DiagReserved23;   // Byte offset 0x423, CSR Addr 0x58211, Direction=N/A 
   uint8_t  DiagReserved24;   // Byte offset 0x424, CSR Addr 0x58212, Direction=N/A 
   uint8_t  DiagReserved25;   // Byte offset 0x425, CSR Addr 0x58212, Direction=N/A 
   uint8_t  DiagReserved26;   // Byte offset 0x426, CSR Addr 0x58213, Direction=N/A 
   uint8_t  DiagReserved27;   // Byte offset 0x427, CSR Addr 0x58213, Direction=N/A 
   uint8_t  DiagReserved28;   // Byte offset 0x428, CSR Addr 0x58214, Direction=N/A 
   uint8_t  DiagReserved29;   // Byte offset 0x429, CSR Addr 0x58214, Direction=N/A 
   uint8_t  DiagReserved2A;   // Byte offset 0x42A, CSR Addr 0x58215, Direction=N/A 
   uint8_t  DiagReserved2B;   // Byte offset 0x42B, CSR Addr 0x58215, Direction=N/A 
   uint8_t  DiagReserved2C;   // Byte offset 0x42C, CSR Addr 0x58216, Direction=N/A 
   uint8_t  DiagReserved2D;   // Byte offset 0x42D, CSR Addr 0x58216, Direction=N/A 
   uint8_t  DiagReserved2E;   // Byte offset 0x42E, CSR Addr 0x58217, Direction=N/A 
   uint8_t  DiagReserved2F;   // Byte offset 0x42F, CSR Addr 0x58217, Direction=N/A 
   uint8_t  DiagReserved30;   // Byte offset 0x430, CSR Addr 0x58218, Direction=N/A 
   uint8_t  DiagReserved31;   // Byte offset 0x431, CSR Addr 0x58218, Direction=N/A 
   uint8_t  DiagReserved32;   // Byte offset 0x432, CSR Addr 0x58219, Direction=N/A 
   uint8_t  DiagReserved33;   // Byte offset 0x433, CSR Addr 0x58219, Direction=N/A 
   uint8_t  DiagReserved34;   // Byte offset 0x434, CSR Addr 0x5821A, Direction=N/A 
   uint8_t  DiagReserved35;   // Byte offset 0x435, CSR Addr 0x5821A, Direction=N/A 
   uint8_t  DiagReserved36;   // Byte offset 0x436, CSR Addr 0x5821B, Direction=N/A 
   uint8_t  DiagReserved37;   // Byte offset 0x437, CSR Addr 0x5821B, Direction=N/A 
   uint8_t  DiagReserved38;   // Byte offset 0x438, CSR Addr 0x5821C, Direction=N/A 
   uint8_t  DiagReserved39;   // Byte offset 0x439, CSR Addr 0x5821C, Direction=N/A 
   uint8_t  DiagReserved3A;   // Byte offset 0x43A, CSR Addr 0x5821D, Direction=N/A 
   uint8_t  DiagReserved3B;   // Byte offset 0x43B, CSR Addr 0x5821D, Direction=N/A 
   uint8_t  DiagReserved3C;   // Byte offset 0x43C, CSR Addr 0x5821E, Direction=N/A 
   uint8_t  DiagReserved3D;   // Byte offset 0x43D, CSR Addr 0x5821E, Direction=N/A 
   uint8_t  DiagReserved3E;   // Byte offset 0x43E, CSR Addr 0x5821F, Direction=N/A 
   uint8_t  DiagReserved3F;   // Byte offset 0x43F, CSR Addr 0x5821F, Direction=N/A 
   uint16_t DiagReturnData;   // Byte offset 0x440, CSR Addr 0x58220, Direction=N/A 
                              // This byte offset is the pointer to the first address 
                              // of the DiagReturnData ; please see individual tests for  
                              // details of the data structure 
} __attribute__ ((packed)) PMU_SMB_DIAG_t; 