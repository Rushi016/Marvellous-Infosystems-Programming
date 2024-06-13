#   1. Design automation script which display information of running processes
#      as its name, PID, Username.

import psutil

def DisplayProcess():
    print("List of all running processess are : ")

    print("________________________________________________________________________________________________")

    for process in psutil.process_iter(['pid', 'name', 'username']):
        print(process.info)
        # pid = process.info['pid']
        # name = process.info['name']
        # username = process.info['username']

        # print(f"PID : {pid}, \tName : {name}, \t\t\tUsername : {username}")
    print("__________________________________________________________________________________________________")

def main():

    DisplayProcess()

if __name__ == "__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 12>Python Assignment12_1.py

List of all running processess are : 
________________________________________________________________________________________________
{'username': 'NT AUTHORITY\\SYSTEM', 'name': 'System Idle Process', 'pid': 0}
{'username': 'NT AUTHORITY\\SYSTEM', 'name': 'System', 'pid': 4}
{'username': None, 'name': '', 'pid': 140}
{'username': None, 'name': 'Registry', 'pid': 196}
{'username': None, 'name': 'smss.exe', 'pid': 716}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 904}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'LockApp.exe', 'pid': 1068}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 1088}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 1228}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 1308}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 1352}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 1496}
{'username': None, 'name': 'csrss.exe', 'pid': 1624}
{'username': None, 'name': 'wininit.exe', 'pid': 1712}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 1728}
{'username': None, 'name': 'services.exe', 'pid': 1840}
{'username': None, 'name': 'LsaIso.exe', 'pid': 1872}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 1880}
{'username': None, 'name': 'lsass.exe', 'pid': 1896}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 1988}
{'username': None, 'name': 'svchost.exe', 'pid': 2012}
{'username': None, 'name': 'WUDFHost.exe', 'pid': 2028}
{'username': None, 'name': 'fontdrvhost.exe', 'pid': 2032}
{'username': None, 'name': 'unsecapp.exe', 'pid': 2060}
{'username': None, 'name': 'svchost.exe', 'pid': 2092}
{'username': None, 'name': 'svchost.exe', 'pid': 2148}
{'username': None, 'name': 'svchost.exe', 'pid': 2152}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 2164}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AnyDesk.exe', 'pid': 2244}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 2260}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 2300}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'lmc.exe', 'pid': 2304}
{'username': None, 'name': 'svchost.exe', 'pid': 2344}
{'username': None, 'name': 'svchost.exe', 'pid': 2360}
{'username': None, 'name': 'svchost.exe', 'pid': 2372}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 2384}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 2440}
{'username': None, 'name': 'svchost.exe', 'pid': 2468}
{'username': None, 'name': 'svchost.exe', 'pid': 2488}
{'username': None, 'name': 'svchost.exe', 'pid': 2528}
{'username': None, 'name': 'svchost.exe', 'pid': 2580}
{'username': None, 'name': 'svchost.exe', 'pid': 2588}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 2600}
{'username': None, 'name': 'svchost.exe', 'pid': 2640}
{'username': None, 'name': 'svchost.exe', 'pid': 2648}
{'username': None, 'name': 'svchost.exe', 'pid': 2656}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 2708}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'taskhostw.exe', 'pid': 2744}
{'username': None, 'name': 'svchost.exe', 'pid': 2832}
{'username': None, 'name': 'IntelCpHDCPSvc.exe', 'pid': 2860}
{'username': None, 'name': 'svchost.exe', 'pid': 2868}
{'username': None, 'name': 'svchost.exe', 'pid': 2884}
{'username': None, 'name': 'svchost.exe', 'pid': 3180}
{'username': None, 'name': 'WUDFHost.exe', 'pid': 3276}
{'username': None, 'name': 'svchost.exe', 'pid': 3348}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 3540}
{'username': None, 'name': 'svchost.exe', 'pid': 3704}
{'username': None, 'name': 'svchost.exe', 'pid': 3736}
{'username': None, 'name': 'svchost.exe', 'pid': 3764}
{'username': None, 'name': 'svchost.exe', 'pid': 3780}
{'username': None, 'name': 'svchost.exe', 'pid': 3788}
{'username': None, 'name': 'svchost.exe', 'pid': 3800}
{'username': None, 'name': 'MemCompression', 'pid': 3896}
{'username': None, 'name': 'svchost.exe', 'pid': 3948}
{'username': None, 'name': 'svchost.exe', 'pid': 3992}
{'username': None, 'name': 'svchost.exe', 'pid': 3996}
{'username': None, 'name': 'svchost.exe', 'pid': 4020}
{'username': None, 'name': 'WUDFHost.exe', 'pid': 4048}
{'username': None, 'name': 'svchost.exe', 'pid': 4164}
{'username': None, 'name': 'svchost.exe', 'pid': 4260}
{'username': None, 'name': 'svchost.exe', 'pid': 4456}
{'username': None, 'name': 'svchost.exe', 'pid': 4484}
{'username': None, 'name': 'svchost.exe', 'pid': 4600}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 4696}
{'username': None, 'name': 'svchost.exe', 'pid': 4768}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 4788}
{'username': None, 'name': 'AsusOptimization.exe', 'pid': 4800}
{'username': None, 'name': 'svchost.exe', 'pid': 4808}
{'username': None, 'name': 'BraveCrashHandler.exe', 'pid': 4860}
{'username': None, 'name': 'BraveCrashHandler64.exe', 'pid': 4916}
{'username': None, 'name': 'ipf_uf.exe', 'pid': 4952}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AsusOptimizationStartupTask.exe', 'pid': 4972}
{'username': None, 'name': 'jhi_service.exe', 'pid': 5068}
{'username': None, 'name': 'spoolsv.exe', 'pid': 5144}
{'username': None, 'name': 'svchost.exe', 'pid': 5248}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 5268}
{'username': None, 'name': 'wlanext.exe', 'pid': 5360}
{'username': None, 'name': 'conhost.exe', 'pid': 5524}
{'username': None, 'name': 'svchost.exe', 'pid': 5620}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 5760}
{'username': None, 'name': 'AsusAppService.exe', 'pid': 5768}
{'username': None, 'name': 'AsusSystemAnalysis.exe', 'pid': 5776}
{'username': None, 'name': 'AsusSystemDiagnosis.exe', 'pid': 5780}
{'username': None, 'name': 'DtsApo4Service.exe', 'pid': 5792}
{'username': None, 'name': 'svchost.exe', 'pid': 5800}
{'username': None, 'name': 'AsusScreenXpertHostService.exe', 'pid': 5808}
{'username': None, 'name': 'svchost.exe', 'pid': 5828}
{'username': None, 'name': 'GlideXNearService.exe', 'pid': 5840}
{'username': None, 'name': 'AnyDesk.exe', 'pid': 5856}
{'username': None, 'name': 'ipfsvc.exe', 'pid': 5864}
{'username': None, 'name': 'armsvc.exe', 'pid': 5872}
{'username': None, 'name': 'AsusSoftwareManager.exe', 'pid': 5880}
{'username': None, 'name': 'OfficeClickToRun.exe', 'pid': 5896}
{'username': None, 'name': 'AsusSwitch.exe', 'pid': 5916}
{'username': None, 'name': 'GlideXRemoteService.exe', 'pid': 5924}
{'username': None, 'name': 'svchost.exe', 'pid': 5948}
{'username': None, 'name': 'GlideXService.exe', 'pid': 5976}
{'username': None, 'name': 'GlideXServiceExt.exe', 'pid': 5984}
{'username': None, 'name': 'OneApp.IGCC.WinService.exe', 'pid': 5996}
{'username': None, 'name': 'IntelAudioService.exe', 'pid': 6036}
{'username': None, 'name': 'svchost.exe', 'pid': 6092}
{'username': None, 'name': 'svchost.exe', 'pid': 6128}
{'username': None, 'name': 'AsusWiFiSmartConnect.exe', 'pid': 6176}
{'username': None, 'name': 'MpDefenderCoreService.exe', 'pid': 6192}
{'username': None, 'name': 'RstMwService.exe', 'pid': 6296}
{'username': None, 'name': 'RtkAudUService64.exe', 'pid': 6312}
{'username': None, 'name': 'conhost.exe', 'pid': 6356}
{'username': None, 'name': 'sqlwriter.exe', 'pid': 6364}
{'username': None, 'name': 'svchost.exe', 'pid': 6432}
{'username': None, 'name': 'sqlservr.exe', 'pid': 6436}
{'username': None, 'name': 'svchost.exe', 'pid': 6456}
{'username': None, 'name': 'svchost.exe', 'pid': 6464}
{'username': None, 'name': 'MsMpEng.exe', 'pid': 6484}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'ctfmon.exe', 'pid': 6500}
{'username': None, 'name': 'WMIRegistrationService.exe', 'pid': 6528}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'OneDrive.exe', 'pid': 6556}
{'username': None, 'name': 'svchost.exe', 'pid': 6588}
{'username': None, 'name': 'svchost.exe', 'pid': 6608}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 6732}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 7208}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'dllhost.exe', 'pid': 7408}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 7564}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 7572}
{'username': None, 'name': 'RtkAudUService64.exe', 'pid': 7664}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 7812}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'StartMenuExperienceHost.exe', 'pid': 7896}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 7924}
{'username': None, 'name': 'svchost.exe', 'pid': 8064}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'SearchHost.exe', 'pid': 8268}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 8292}
{'username': None, 'name': 'svchost.exe', 'pid': 8336}
{'username': None, 'name': 'WmiPrvSE.exe', 'pid': 8444}
{'username': None, 'name': 'svchost.exe', 'pid': 8460}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 8468}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'powershell.exe', 'pid': 8520}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 8572}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 8812}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 8824}
{'username': None, 'name': 'svchost.exe', 'pid': 8848}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 8988}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 9076}
{'username': None, 'name': 'svchost.exe', 'pid': 9268}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 9296}
{'username': None, 'name': 'svchost.exe', 'pid': 9320}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 9552}
{'username': None, 'name': 'svchost.exe', 'pid': 9564}
{'username': None, 'name': 'AggregatorHost.exe', 'pid': 9612}
{'username': None, 'name': 'svchost.exe', 'pid': 9664}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 9680}
{'username': None, 'name': 'AsusScreenXpertUI.exe', 'pid': 10052}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 10092}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 10096}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'WidgetService.exe', 'pid': 10116}
{'username': None, 'name': 'svchost.exe', 'pid': 10156}
{'username': None, 'name': 'svchost.exe', 'pid': 10348}
{'username': None, 'name': 'csrss.exe', 'pid': 10592}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 10628}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'conhost.exe', 'pid': 10884}
{'username': None, 'name': 'SecurityHealthService.exe', 'pid': 10964}
{'username': None, 'name': 'svchost.exe', 'pid': 10980}
{'username': None, 'name': 'svchost.exe', 'pid': 11076}
{'username': None, 'name': 'svchost.exe', 'pid': 11096}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 11100}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 11468}
{'username': None, 'name': 'MoUsoCoreWorker.exe', 'pid': 11556}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'SecurityHealthSystray.exe', 'pid': 12040}
{'username': None, 'name': 'WmiPrvSE.exe', 'pid': 12084}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 12092}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'backgroundTaskHost.exe', 'pid': 12140}
{'username': None, 'name': 'WmiApSrv.exe', 'pid': 12292}
{'username': None, 'name': 'svchost.exe', 'pid': 12332}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 12492}
{'username': None, 'name': 'SearchIndexer.exe', 'pid': 12508}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 12568}
{'username': None, 'name': 'svchost.exe', 'pid': 12592}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 12924}
{'username': None, 'name': 'svchost.exe', 'pid': 13032}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'ApplicationFrameHost.exe', 'pid': 13136}
{'username': None, 'name': 'svchost.exe', 'pid': 13456}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'SystemSettings.exe', 'pid': 13596}
{'username': None, 'name': 'winlogon.exe', 'pid': 13872}
{'username': None, 'name': 'NisSrv.exe', 'pid': 14028}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 14064}
{'username': None, 'name': 'svchost.exe', 'pid': 14148}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'uihost.exe', 'pid': 14156}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 14696}
{'username': None, 'name': 'svchost.exe', 'pid': 15104}
{'username': None, 'name': 'fontdrvhost.exe', 'pid': 15348}
{'username': None, 'name': 'svchost.exe', 'pid': 15480}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AdobeCollabSync.exe', 'pid': 15512}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 15540}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 15552}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 15664}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 15728}
{'username': None, 'name': 'svchost.exe', 'pid': 15844}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 16068}
{'username': None, 'name': 'svchost.exe', 'pid': 16124}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 16148}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'explorer.exe', 'pid': 16412}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'python.exe', 'pid': 16608}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 16632}
{'username': None, 'name': 'servicehost.exe', 'pid': 16688}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'FileCoAuth.exe', 'pid': 16904}
{'username': None, 'name': 'svchost.exe', 'pid': 17188}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 17336}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'dllhost.exe', 'pid': 17444}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'WhatsApp.exe', 'pid': 17752}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'cmd.exe', 'pid': 17936}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'UserOOBEBroker.exe', 'pid': 17940}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 18356}
{'username': None, 'name': 'svchost.exe', 'pid': 18460}
{'username': None, 'name': 'svchost.exe', 'pid': 18524}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 18556}
{'username': None, 'name': 'svchost.exe', 'pid': 18560}
{'username': None, 'name': 'WmiPrvSE.exe', 'pid': 18580}
{'username': None, 'name': 'dasHost.exe', 'pid': 18648}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'TextInputHost.exe', 'pid': 19064}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 19080}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'taskhostw.exe', 'pid': 19368}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 19404}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 19492}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'HxOutlook.exe', 'pid': 19504}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AsusScreenXpertUserUI.exe', 'pid': 19512}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 19800}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'sihost.exe', 'pid': 19840}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 19848}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 19856}
{'username': None, 'name': 'svchost.exe', 'pid': 19896}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AdobeCollabSync.exe', 'pid': 20124}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'SystemSettingsBroker.exe', 'pid': 20128}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 20244}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 20388}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'ipf_helper.exe', 'pid': 20416}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'ShellExperienceHost.exe', 'pid': 20484}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AsusSoftwareManagerAgent.exe', 'pid': 20568}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 20576}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 20676}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 20892}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Code.exe', 'pid': 20940}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 20952}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 20984}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 21212}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'Widgets.exe', 'pid': 21228}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 21556}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 21632}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'svchost.exe', 'pid': 21684}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 21696}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AsusOSD.exe', 'pid': 21776}
{'username': None, 'name': 'dwm.exe', 'pid': 21792}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 22060}
{'username': None, 'name': 'svchost.exe', 'pid': 22112}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'HxTsr.exe', 'pid': 22208}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msteams.exe', 'pid': 22332}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 22908}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RuntimeBroker.exe', 'pid': 23072}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'conhost.exe', 'pid': 23160}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'AsusScreenXpertReunion.exe', 'pid': 23248}
{'username': None, 'name': 'svchost.exe', 'pid': 23516}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 23856}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'SDXHelper.exe', 'pid': 23896}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 23944}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'LocationNotificationWindows.exe', 'pid': 23952}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 24100}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'RtkAudUService64.exe', 'pid': 24116}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 24208}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedge.exe', 'pid': 24372}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'msedgewebview2.exe', 'pid': 24416}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 24464}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'backgroundTaskHost.exe', 'pid': 24508}
{'username': 'LAPTOP-LK1V5OH1\\ASUS', 'name': 'chrome.exe', 'pid': 24520}
{'username': None, 'name': 'svchost.exe', 'pid': 24544}
{'username': None, 'name': 'svchost.exe', 'pid': 24568}
__________________________________________________________________________________________________

"""