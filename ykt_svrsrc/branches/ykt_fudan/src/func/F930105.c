/* --------------------------------------------
 * ��������: F930105.c
 * ��������: 2005-09-02
 * ��������: �Ž�
 * �汾��Ϣ: 1.0.0.0
 * ������:�´���ʱ��ʱ���
 * --------------------------------------------
 * �޸�����:
 * �޸���Ա:
 * �޸�����:
 * �汾��Ϣ:
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
#include "dbfunc_foo.h"

int F930105(TRUSERID *handle,int iRequest,ST_PACK *in_pack,int *pRetCode,char *szMsg)
{
	int ret = 0;
	T_t_tif_meslist tMesList;
	memset(&tMesList,0,sizeof(tMesList));
	des2src(tMesList.devphy999_id, in_pack->sdate0);
	trim(tMesList.devphy999_id);
	
	if(strlen(tMesList.devphy999_id)==0)
	{
		*pRetCode=E_DEVPHYID_NULL;
		goto L_RETU;
	}
	if(in_pack->lvol3<1||in_pack->lvol3>8)
	{
		*pRetCode=E_INPUT_DATA_INVAILD;
		goto L_RETU;
	}
	ret = process930105(tMesList.devphy999_id,in_pack->lvol3);
	if(ret)
	{
		*pRetCode = ret;
		goto L_RETU;
	}
	AddXmlItemInt(tMesList.incontent,XML_KEY_WEEKNO,in_pack->lvol3);			//����
	AddXmlItemInt(tMesList.incontent,XML_KEY_OUTNUM,in_pack->lvol5);			//��¼��
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME1,in_pack->saddr);		//ʱ���1
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME2,in_pack->saddr2);		//ʱ���2
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME3,in_pack->sall_name);	//ʱ���3
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME4,in_pack->snote);		//ʱ���4
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME5,in_pack->snote2);		//ʱ���5
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME6,in_pack->scert_addr);	//ʱ���6
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME7,in_pack->sbankname);	//ʱ���7
	AddXmlItemStr(tMesList.incontent,XML_KEY_DOORTIME8,in_pack->sbankname2);	//ʱ���8
	//FIXME
	//��Ҫ��ѯʱ��α��´�
	//FIXME
	//tMesList.funid = iRequest;
	tMesList.funid=930105;
	tMesList.level =1;
	// ����10��
	tMesList.max_send_cnt = 10;

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




