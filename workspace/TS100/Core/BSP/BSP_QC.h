/*
 * BSP_QC.h
 *
 *  Created on: 29 May 2020
 *      Author: Ralim
 */

#ifndef BSP_BSP_QC_H_
#define BSP_BSP_QC_H_

#ifdef __cplusplus
extern "C" {
#endif

//Init GPIO for QC neg
void QC_Init_GPIO();
//Set the DP pin to 0.6V
void DPlusZero_Six();
//Set the DM pin to 0.6V
void DNegZero_Six();
//Set the DP pin to 3.3V
void DPlusThree_Three();
//Set the DM pin to 3.3V
void DNegThree_Three();
//Turn on weak pulldown on the DM pin
//This is used as a helper for some power banks
void QC_DM_PullDown();
//Turn off the pulldown
void QC_DM_No_PullDown();
//Turn on output drivers that were initally disabled to prevent spike through QC disable mode
void QC_Post_Probe_En();
//Check if DM was pulled down
//1=Pulled down, 0 == pulled high
uint8_t QC_DM_PulledDown();
#ifdef __cplusplus
}
#endif

#endif /* BSP_BSP_QC_H_ */
