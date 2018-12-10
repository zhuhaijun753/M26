/********************************************************************************
 * File Name:           heartbeat.c
 * Function Describe:	������������������·����
 * Relate Module:       heartbeat.h
 * Writer:              Joneming
 * Date:                2015-05-12
 * Rewriter: 			
 * Date:				
 *******************************************************************************/
#ifndef __HEARTBEAT_H_
#define __HEARTBEAT_H_

//**********��������**********
/*********************************************************************
//��������	:Heartbeat_UpdatePram(void)
//����		:����������ʱ����
//����		:�޲���
//��ע		:
*********************************************************************/
void HeartBeat_ParamInit(void);
/*********************************************************************
//��������	:Heartbeat_TimeTask(void)
//����		:ÿ��һ��ʱ�䣨180s���ϴ�һ�����ݰ���������·����
//����		:�޲���
//��ע		:
*********************************************************************/
FunctionalState HeartBeat_TimeTask(void);
/*********************************************************************
//��������	:Heartbeat_UpdatePram(void)
//����		:����������ʱ����
//����		:�޲���
//��ע		:
*********************************************************************/
void HeartBeat_UpdatePram(void);
/*********************************************************************
//��������	:Heartbeat_ClrHeartbeatCount(void)
//����		:�������HeartbeatCount
//����		:�޲���
//���		:
//ʹ����Դ	:
//ȫ�ֱ���	:
//���ú���	:
//�ж���Դ	:  
//����		:
//��ע		:
*********************************************************************/
void Heartbeat_ClrHeartbeatCount(void);
/*********************************************************************
//��������	:Heartbeat_ReportHeartbeat(void)
//����		:Heartbeat_ReportHeartbeat
//����		:�޲���
//���		:
//ʹ����Դ	:
//ȫ�ֱ���	:
//���ú���	:
//�ж���Դ	:  
//����		:
//��ע		:
*********************************************************************/
void Heartbeat_ReportHeartbeat(void);
/*********************************************************************
//��������	:Heartbeat_GetHeartbeatTime(void)
//����		:�������HeartbeatCount
//����		:�޲���
//���		:
//ʹ����Դ	:
//ȫ�ֱ���	:
//���ú���	:
//�ж���Դ	:  
//����		:
//��ע		:
*********************************************************************/
unsigned char Heartbeat_GetHeartbeatTime(void);
#endif

/******************************************************************************
**                            End Of File
******************************************************************************/
