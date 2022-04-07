
/**
 * @brief machinekey.h is specific declare for machinekey.c
 * @author EthanJuan
 * @date 2022/3/22
 * @version 1.0
 */
#ifndef __MachineKey__
#define __MachineKey__
/**
 * @brief MachineKey function will provide a MachineCode from inputting right Serial Number
 * 			meanwhile it will return 0 (Serial No is right) or 1 (Serial No is wrong) back for Serial Number checking.
 * @param SerialNo [IN]
 * @param MachineCode [OUT]
 * @return int [0/1]
 */
int MachineKey(unsigned char *SerialNo, unsigned char *MachineCode);
#endif