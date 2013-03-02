ALTER TABLE YKT_CUR.T_TIF_REPORT_SHOP_BALANCE
 ADD (outorin  NUMBER);

ALTER TABLE YKT_CUR.T_TIF_REPORT_SHOP_BALANCE
 ADD (seri_type  NUMBER);
 
 CREATE TABLE YKT_CUR.T_TIF_REPORT_TRADELOG_GROUPING
(
  BALANCE_DATE   CHAR(8 BYTE)                   NOT NULL,
  OPER_CODE      CHAR(10 BYTE)                  NOT NULL,
  SERI_TYPE      NUMBER                         NOT NULL,
  FEE_TYPE       NUMBER                         NOT NULL,
  SUBNO          VARCHAR2(20 BYTE)              NOT NULL,
  ACT_ID         CHAR(16 BYTE)                  NOT NULL,
  OUTORIN        NUMBER                         NOT NULL,
  MAINDEVICE_ID  NUMBER,
  DEVICE_ID      NUMBER,
  TRADE_COUNT    NUMBER,
  TRADE_FEE      NUMBER(16,6)
)
TABLESPACE TS_YKT_CUR
PCTUSED    0
PCTFREE    10
INITRANS   1
MAXTRANS   255
STORAGE    (
            INITIAL          64K
            MINEXTENTS       1
            MAXEXTENTS       UNLIMITED
            PCTINCREASE      0
            BUFFER_POOL      DEFAULT
           )
LOGGING 
NOCOMPRESS 
NOCACHE
NOPARALLEL
MONITORING;


CREATE INDEX YKT_CUR.IDX_01 ON YKT_CUR.T_TIF_REPORT_TRADELOG_GROUPING
(BALANCE_DATE, OPER_CODE, SERI_TYPE, FEE_TYPE, SUBNO, 
ACT_ID, OUTORIN, MAINDEVICE_ID, DEVICE_ID)
LOGGING
TABLESPACE TS_YKT_CUR
PCTFREE    10
INITRANS   2
MAXTRANS   255
STORAGE    (
            INITIAL          64K
            MINEXTENTS       1
            MAXEXTENTS       UNLIMITED
            PCTINCREASE      0
            BUFFER_POOL      DEFAULT
           )
NOPARALLEL;


ALTER TABLE YKT_CUR.T_AIF_ACCOUNT
 ADD (SUBSIDY_NO  NUMBER);

 