Set so = WScript.CreateObject("MessageBoxServer","event_")
so.ShowMessageBox "Hello World"

Sub event_OnMessageBoxShowed()
  MsgBox "Callback received!"
End Sub