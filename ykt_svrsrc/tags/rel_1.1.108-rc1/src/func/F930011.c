/* --------------------------------------------
 * ��������: F930011.sqc
 * ��������: 9 17 2004
 * ��������: ��Ҷ��
 * �汾��Ϣ: 1.0.0.0
 * ������:�������ѱ�ż��汾
 * --------------------------------------------
 * �޸�����:2004-12-14
 * �޸���Ա:	�Ž�
 * �޸�����: �޸�ҵ���߼�
 * �汾��Ϣ:1.0.0.1
 * ��ע��Ϣ:
 * --------------------------------------------*/
#define _IN_SQC_                    
#include <string.h>
#include <stdio.h>
#include "pubfunc.h"
#include "pubdb.h"
#include "pubdef.h"
#include "errdef.h"
#include "dbfunc.h"
#include "fdsqc.h"

int F930011(TRUSERID *handle,int iRequest,ST_PACK *in_pack,int *pRetCode,char *szMsg)
{
	int ret = 0;
       T_t_tif_meslist tMesList;
	T_t_pif_device tDevice;

	memset(&tMesList,0,sizeof(tMesList));
	memset(&tDevice,0,sizeof(tDevice));

	if(strlen(in_pack->sdate0) == 0 )
	{
		*pRetCode = E_DEVPHYID_NULL;
		goto L_RETU;
	}

	AddXmlItemStr(tMesList.incontent, XML_KEY_CONCODEVER, in_pack->sserial2);
	AddXmlItemInt(tMesList.incontent, XML_KEY_CONCODE, in_pack->lvol4);

	if((ret = get_devinfo_by_phyid(in_pack->sdate0,&tDevice)))
	{
		*pRetCode = ret;
		goto L_RETU;
	}

	tMesList.devid = tDevice.device_id;
	tMesList.funid = 930011;
	tMesList.level = 2;
	ret=AddMsgLst(&tMesList);
	if(ret)
	{
		*pRetCode=ret;
		writelog(LOG_ERR,"AddMsgLst err[%d]",ret);
		goto L_RETU;
	}
	return 0;
L_RETU:
	return  -1;	
}




