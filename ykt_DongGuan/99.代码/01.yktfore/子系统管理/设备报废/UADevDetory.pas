unit UADevDetory;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  UqhSimpleQueryTemp, WVCmdReq, WorkViews, Grids, DBGrids, StdCtrls,
  ImageCtrls, ExtCtrls, UICtrls, WVCtrls, Mask, WVDBBinders, Db, WVCmdProc,
  KCWVProcBinds, WVCmdTypeInfo, UIncrementComboBox, RzDBGrid, Buttons;

type
  TfaqhDevDestory = class(TfaqhSimpleQueryTemp)
    Panel1: TPanel;
    Label2: TLabel;
    Label5: TLabel;
    Label8: TLabel;
    WVEdit8: TWVEdit;
    WVEdit5: TWVEdit;
    edtPosIdQ: TWVEdit;
    Label3: TLabel;
    edtBusiIdQ: TWVEdit;
    WVComboBox3: TWVComboBox;
    Label6: TLabel;
    Label10: TLabel;
    WVComboBox1: TWVComboBox;
    Label9: TLabel;
    Label7: TLabel;
    Label4: TLabel;
    WVEdit4: TWVEdit;
    WVComboBox2: TWVComboBox;
    WVComboBox4: TWVComboBox;
    WorkView1: TWorkView;
    QueryRequest: TWVRequest;
    btnDestory: TBitBtn;
    procedure btnDestoryClick(Sender: TObject);
    procedure btnQueryClick(Sender: TObject);
  private

    { Private declarations }
  public
    procedure Init; override;
    { Public declarations }
  end;

var
  faqhDevDestory: TfaqhDevDestory;

implementation

uses KsFrameworks, KSFrameWorkUtils, KSComCmdDefs, KSCustomers, Contnrs,
     KSClientConsts,KSDataDictionary,DataUsageUtils;
     
{$R *.DFM}

procedure TfaqhDevDestory.Init;
begin
  inherited;
  {
  WorkView.FieldByName('操作标志').DefaultValue := '';
  WorkView.FieldByName('地区代码').DefaultValue := '';
  WorkView.FieldByName('设备编号').DefaultValue := '';
  WorkView.FieldByName('所属商户号').DefaultValue := 0;
  WorkView.FieldByName('设备终端号').DefaultValue := '';
  WorkView.FieldByName('终端序列号').DefaultValue := '';
  WorkView.FieldByName('设备型号').DefaultValue := 0;
  WorkView.FieldByName('设备类型').DefaultValue := '';
  WorkView.FieldByName('设备名称').DefaultValue := '';
  WorkView.FieldByName('用途').DefaultValue := 0;
  WorkView.FieldByName('设备状态').DefaultValue := '';
  WorkView.Reset;
  }
end;

procedure TfaqhDevDestory.btnDestoryClick(Sender: TObject);
var
  devId:string;
begin
  if Application.MessageBox('你确定要报废该设备吗？',PChar(Application.Title),MB_ICONQUESTION+mb_yesno)=idno then
    Exit;
  devId := Grid.DataSource.DataSet.fieldbyname('scert_no').AsString;
  WorkView.FieldByName('设备状态').Data.SetString('D');
  WorkView.FieldByName('设备编号').Data.SetString(devId);
  MainRequest.SendCommand;
  Context.GetDialogSystem.ShowMessage('该设备报废完成！');
end;

procedure TfaqhDevDestory.btnQueryClick(Sender: TObject);
begin
  btnDestory.Enabled := False;
  if Trim(edtBusiIdQ.Text)='' then
    edtBusiIdQ.Text := '0';
  WorkView1.FieldByName('操作标志').Data.SetString('R');
  QueryRequest.SendCommand;
  if WorkView1.FieldByName('返回码').Data.AsInteger=0 then
    btnDestory.Enabled := True
  else
    Context.GetDialogSystem.ShowMessage(WorkView1.FieldByName('返回信息').Data.AsString);
  //inherited;
end;

initialization
  TUIStdClassFactory.Create('设备报废',TfaqhDevDestory);

end.