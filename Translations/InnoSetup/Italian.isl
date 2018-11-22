; *** Inno Setup version 5.1.11+ Italian messages ***
;
; To download user-contributed translations of this file, go to:
;   http://www.jrsoftware.org/files/istrans/
;
; Note: When translating this text, do not add periods (.) to the end of
; messages that didn't have them already, because on those messages Inno
; Setup adds the periods automatically (appending a period would result in
; two periods being displayed).
;
; Italian.isl revisione 37 - 2008/02/23 (Basato su Default.isl 1.70)
;
; Tradotto da ale5000
; E-mail: ale5000 AT tiscali DOT it
; Segnalatemi via e-mail eventuali errori o suggerimenti.

[LangOptions]
; The following three entries are very important. Be sure to read and 
; understand the '[LangOptions] section' topic in the help file.
LanguageName=Italiano
LanguageID=$0410
LanguageCodePage=1252
; If the language you are translating to requires special font faces or
; sizes, uncomment any of the following entries and change them accordingly.
;DialogFontName=
;DialogFontSize=8
;WelcomeFontName=Verdana
;WelcomeFontSize=12
;TitleFontName=Arial
;TitleFontSize=29
;CopyrightFontName=Arial
;CopyrightFontSize=8

[Messages]

; *** Application titles
SetupAppTitle=Installazione
SetupWindowTitle=Installazione di %1
UninstallAppTitle=Disinstallazione
UninstallAppFullTitle=Disinstallazione di %1

; *** Misc. common
InformationTitle=Informazioni
ConfirmTitle=Conferma
ErrorTitle=Errore

; *** SetupLdr messages
SetupLdrStartupMessage=Questa � l'installazione di %1. Si desidera continuare?
LdrCannotCreateTemp=Impossibile creare un file temporaneo. Installazione annullata
LdrCannotExecTemp=Impossibile eseguire un file nella cartella temporanea. Installazione annullata

; *** Startup error messages
LastErrorMessage=%1.%n%nErrore %2: %3
SetupFileMissing=File %1 non trovato nella cartella di installazione. Correggere il problema o richiedere una nuova copia del software.
SetupFileCorrupt=I file di installazione sono danneggiati. Richiedere una nuova copia del software.
SetupFileCorruptOrWrongVer=I file di installazione sono danneggiati, o sono incompatibili con questa versione del programma di installazione. Correggere il problema o richiedere una nuova copia del software.
NotOnThisPlatform=Questo programma non � compatibile con %1.
OnlyOnThisPlatform=Questo programma richiede %1.
OnlyOnTheseArchitectures=Questo programma pu� essere installato solo su versioni di Windows progettate per le seguenti architetture del processore:%n%n%1
MissingWOW64APIs=La versione di Windows utilizzata non include la funzionalit� richiesta dal programma di installazione per realizzare un'installazione a 64-bit. Per correggere questo problema, installare il Service Pack %1.
WinVersionTooLowError=Questo programma richiede %1 versione %2 o successiva.
WinVersionTooHighError=Questo programma non pu� essere installato su %1 versione %2 o successiva.
AdminPrivilegesRequired=Sono richiesti privilegi di amministratore per installare questo programma.
PowerUserPrivilegesRequired=Sono richiesti privilegi di amministratore o di Power Users per poter installare questo programma.
SetupAppRunningError=%1 � attualmente in esecuzione.%n%nChiudere adesso tutte le istanze del programma e poi premere OK, oppure premere Annulla per uscire.
UninstallAppRunningError=%1 � attualmente in esecuzione.%n%nChiudere adesso tutte le istanze del programma e poi premere OK, oppure premere Annulla per uscire.

; *** Misc. errors
ErrorCreatingDir=Impossibile creare la cartella "%1"
ErrorTooManyFilesInDir=Impossibile creare i file nella cartella "%1" perch� contiene troppi file

; *** Setup common messages
ExitSetupTitle=Uscita dall'installazione
ExitSetupMessage=L'installazione non � completa. Uscendo dall'installazione in questo momento, il programma non sar� installato.%n%n� possibile eseguire l'installazione in un secondo tempo.%n%nUscire dall'installazione?
AboutSetupMenuItem=&Informazioni sull'installazione...
AboutSetupTitle=Informazioni sull'installazione
AboutSetupMessage=%1 versione %2%n%3%n%n%1 sito web:%n%4
AboutSetupNote=
TranslatorNote=Italian translation maintained by ale5000

; *** Buttons
ButtonBack=< &Indietro
ButtonNext=&Avanti >
ButtonInstall=Inst&alla
ButtonOK=OK
ButtonCancel=Annulla
ButtonYes=&Si
ButtonYesToAll=Si a &tutto
ButtonNo=&No
ButtonNoToAll=N&o a tutto
ButtonFinish=&Fine
ButtonBrowse=&Sfoglia...
ButtonWizardBrowse=S&foglia...
ButtonNewFolder=&Crea nuova cartella

; *** "Select Language" dialog messages
SelectLanguageTitle=Selezionare la lingua dell'installazione
SelectLanguageLabel=Selezionare la lingua da utilizzare durante l'installazione:

; *** Common wizard text
ClickNext=Premere Avanti per continuare, o Annulla per uscire.
BeveledLabel=
BrowseDialogTitle=Sfoglia per cartelle
BrowseDialogLabel=Selezionare una cartella dalla lista, poi premere OK.
NewFolderName=Nuova cartella

; *** "Welcome" wizard page
WelcomeLabel1=Benvenuti nel programma di installazione di [name]
WelcomeLabel2=[name/ver] sar� installato sul computer.%n%nSi consiglia di chiudere tutte le applicazioni attive prima di procedere.

; *** "Password" wizard page
WizardPassword=Password
PasswordLabel1=Questa installazione � protetta da password.
PasswordLabel3=Inserire la password, poi premere Avanti per continuare. Le password sono sensibili alle maiuscole/minuscole.
PasswordEditLabel=&Password:
IncorrectPassword=La password inserita non � corretta, riprovare.

; *** "License Agreement" wizard page
WizardLicense=Contratto di licenza
LicenseLabel=Leggere con attenzione le informazioni che seguono prima di procedere.
LicenseLabel3=Leggere il seguente contratto di licenza. � necessario accettare tutti i termini del contratto per procedere con l'installazione.
LicenseAccepted=Accetto i termini del &contratto di licenza 
LicenseNotAccepted=&Non accetto i termini del contratto di licenza

; *** "Information" wizard pages
WizardInfoBefore=Informazioni
InfoBeforeLabel=Leggere le importanti informazioni che seguono prima di procedere.
InfoBeforeClickLabel=Quando si � pronti per proseguire, premere Avanti.
WizardInfoAfter=Informazioni
InfoAfterLabel=Leggere le importanti informazioni che seguono prima di procedere.
InfoAfterClickLabel=Quando si � pronti per proseguire, premere Avanti.

; *** "User Information" wizard page
WizardUserInfo=Informazioni utente
UserInfoDesc=Inserire le seguenti informazioni.
UserInfoName=&Nome:
UserInfoOrg=&Societ�:
UserInfoSerial=&Numero di serie:
UserInfoNameRequired=� necessario inserire un nome.

; *** "Select Destination Location" wizard page
WizardSelectDir=Selezione della cartella di installazione
SelectDirDesc=Dove si vuole installare [name]?
SelectDirLabel3=[name] sar� installato nella seguente cartella.
SelectDirBrowseLabel=Per continuare, premere Avanti. Per scegliere un'altra cartella, premere Sfoglia.
DiskSpaceMBLabel=Sono richiesti almeno [mb] MB di spazio sul disco.
ToUNCPathname=Non � possiblie installare su un percorso di rete. Se si sta installando attraverso una rete, si deve connettere la risorsa come una unit� di rete.
InvalidPath=Si deve inserire un percorso completo di lettera di unit�; per esempio:%n%nC:\APP%n%no un percorso di rete nella forma:%n%n\\server\condivisione
InvalidDrive=L'unit� o il percorso di rete selezionato non esiste o non � accessibile. Selezionarne un'altro.
DiskSpaceWarningTitle=Spazio su disco insufficiente
DiskSpaceWarning=L'installazione richiede almeno %1 KB di spazio libero per eseguire l'installazione, ma l'unit� selezionata ha solo %2 KB disponibili.%n%nSi desidera continuare comunque?
DirNameTooLong=Il nome della cartella o il percorso sono troppo lunghi.
InvalidDirName=Il nome della cartella non � valido.
BadDirName32=Il nome della cartella non pu� includere nessuno dei caratteri seguenti:%n%n%1
DirExistsTitle=Cartella gi� esistente
DirExists=La cartella:%n%n%1 esiste gi�.%n%nSi desidera utilizzarla comunque?
DirDoesntExistTitle=Cartella inesistente
DirDoesntExist=La cartella:%n%n%1 non esiste.%n%nSi desidera crearla?

; *** "Select Components" wizard page
WizardSelectComponents=Selezione componenti
SelectComponentsDesc=Quali componenti devono essere installati?
SelectComponentsLabel2=Selezionare i componenti da installare, deselezionare quelli che non si desidera installare. Premere Avanti per continuare.
FullInstallation=Installazione completa
; if possible don't translate 'Compact' as 'Minimal' (I mean 'Minimal' in your language)
CompactInstallation=Installazione compatta
CustomInstallation=Installazione personalizzata
NoUninstallWarningTitle=Componente esistente
NoUninstallWarning=I seguenti componenti sono gi� installati sul computer:%n%n%1%n%nDeselezionando questi componenti essi non verranno rimossi.%n%nSi desidera continuare comunque?
ComponentSize1=%1 KB
ComponentSize2=%1 MB
ComponentsDiskSpaceMBLabel=La selezione corrente richiede almeno [mb] MB di spazio su disco.

; *** "Select Additional Tasks" wizard page
WizardSelectTasks=Selezione processi addizionali
SelectTasksDesc=Quali processi aggiuntivi si vogliono avviare?
SelectTasksLabel2=Selezionare i processi aggiuntivi che verranno eseguiti durante l'installazione di [name], poi premere Avanti.

; *** "Select Start Menu Folder" wizard page
WizardSelectProgramGroup=Selezione della cartella nel Menu Avvio/Start
SelectStartMenuFolderDesc=Dove si vuole inserire i collegamenti al programma?
SelectStartMenuFolderLabel3=Saranno creati i collegamenti al programma nella seguente cartella del Menu Avvio/Start.
SelectStartMenuFolderBrowseLabel=Per continuare, premere Avanti. Per selezionare un'altra cartella, premere Sfoglia.
MustEnterGroupName=Si deve inserire il nome della cartella.
GroupNameTooLong=Il nome della cartella o il percorso sono troppo lunghi.
InvalidGroupName=Il nome della cartella non � valido.
BadGroupName=Il nome della cartella non pu� includere nessuno dei caratteri seguenti:%n%n%1
NoProgramGroupCheck2=&Non creare una cartella nel Menu Avvio/Start

; *** "Ready to Install" wizard page
WizardReady=Pronto per l'installazione
ReadyLabel1=Il programma di installazione � pronto per iniziare l'installazione di [name] sul computer.
ReadyLabel2a=Premere Installa per continuare con l'installazione, o Indietro per rivedere o modificare le impostazioni.
ReadyLabel2b=Premere Installa per procedere con l'installazione.
ReadyMemoUserInfo=Informazioni utente:
ReadyMemoDir=Cartella di installazione:
ReadyMemoType=Tipo di installazione:
ReadyMemoComponents=Componenti selezionati:
ReadyMemoGroup=Cartella del menu Avvio/Start:
ReadyMemoTasks=Processi addizionali:

; *** "Preparing to Install" wizard page
WizardPreparing=Preparazione all'installazione
PreparingDesc=Preparazione all'installazione di [name] sul computer.
PreviousInstallNotCompleted=L'installazione/rimozione precedente del programma non � stata completata. � necessario riavviare il sistema per completare l'installazione.%n%nDopo il riavvio del sistema eseguire di nuovo l'installazione di [name].
CannotContinue=L'installazione non pu� continuare. Premere Annulla per uscire.

; *** "Installing" wizard page
WizardInstalling=Installazione in corso
InstallingLabel=Attendere il completamento dell'installazione di [name] sul computer.

; *** "Setup Completed" wizard page
FinishedHeadingLabel=Completamento dell'installazione di [name]
FinishedLabelNoIcons=L'installazione di [name] � stata completata con successo.
FinishedLabel=L'installazione di [name] � stata completata con successo. L'applicazione pu� essere eseguita selezionando le relative icone.
ClickFinish=Premere Fine per uscire dall'installazione.
FinishedRestartLabel=Per completare l'installazione di [name], � necessario riavviare il sistema. Si desidera riavviare adesso?
FinishedRestartMessage=Per completare l'installazione di [name], � necessario riavviare il sistema.%n%nSi desidera riavviare adesso?
ShowReadmeCheck=Si, desidero vedere il file LEGGIMI adesso
YesRadio=&Si, riavvia il sistema adesso
NoRadio=&No, riavvia il sistema pi� tardi
; used for example as 'Run MyProg.exe'
RunEntryExec=Avvia %1
; used for example as 'View Readme.txt'
RunEntryShellExec=Visualizza %1

; *** "Setup Needs the Next Disk" stuff
ChangeDiskTitle=L'installazione necessita del disco successivo
SelectDiskLabel2=Inserire il disco %1 e premere OK.%n%nSe i file su questo disco si trovano in una cartella diversa da quella visualizzata sotto, inserire il percorso corretto o premere Sfoglia.
PathLabel=&Percorso:
FileNotInDir2=Il file "%1" non � stato trovato in "%2". Inserire il disco corretto o selezionare un'altra cartella.
SelectDirectoryLabel=Specificare il percorso del prossimo disco.

; *** Installation phase messages
SetupAborted=L'installazione non � stata completata.%n%nCorreggere il problema e rieseguire nuovamente l'installazione.
EntryAbortRetryIgnore=Premere Riprova per ritentare nuovamente, Ignora per procedere in ogni caso, o Interrompi per terminare l'installazione.

; *** Installation status messages
StatusCreateDirs=Creazione cartelle...
StatusExtractFiles=Estrazione file...
StatusCreateIcons=Creazione icone...
StatusCreateIniEntries=Creazione voci nei file INI...
StatusCreateRegistryEntries=Creazione voci di registro...
StatusRegisterFiles=Registrazione file...
StatusSavingUninstall=Salvataggio delle informazioni di disinstallazione...
StatusRunProgram=Termine dell'installazione...
StatusRollback=Recupero delle modifiche...

; *** Misc. errors
ErrorInternal2=Errore Interno %1
ErrorFunctionFailedNoCode=%1 fallito
ErrorFunctionFailed=%1 fallito; codice %2
ErrorFunctionFailedWithMessage=%1 fallito; codice %2.%n%3
ErrorExecutingProgram=Impossibile eseguire il file:%n%1

; *** Registry errors
ErrorRegOpenKey=Errore di apertura della chiave di registro:%n%1\%2
ErrorRegCreateKey=Errore di creazione della chiave di registro:%n%1\%2
ErrorRegWriteKey=Errore di scrittura della chiave di registro:%n%1\%2

; *** INI errors
ErrorIniEntry=Errore nella creazione delle voci INI nel file "%1".

; *** File copying errors
FileAbortRetryIgnore=Premere Riprova per tentare di nuovo, Ignora per saltare questo file (sconsigliato), o Interrompi per terminare l'installazione.
FileAbortRetryIgnore2=Premere Riprova per tentare di nuovo, Ignora per proseguire comunque (sconsigliato), o Interrompi per terminare l'installazione.
SourceIsCorrupted=Il file sorgente � danneggiato
SourceDoesntExist=Il file sorgente "%1" non esiste
ExistingFileReadOnly=Il file esistente ha l'attributo di sola lettura.%n%nPremere Riprova per rimuovere l'attributo di sola lettura e ritentare, Ignora per saltare questo file, o Interrompi per terminare l'installazione.
ErrorReadingExistingDest=Si � verificato un errore durante la lettura del file esistente:
FileExists=Il file esiste gi�.%n%nDesideri sovrascriverlo?
ExistingFileNewer=Il file esistente � pi� recente di quello che si st� installando. Si raccomanda di mantenere il file esistente.%n%nSi desidera mantenere il file esistente?
ErrorChangingAttr=Si � verificato un errore durante il tentativo di modifica dell'attributo del file esistente:
ErrorCreatingTemp=Si � verificato un errore durante la creazione di un file nella cartella di installazione:
ErrorReadingSource=Si � verificato un errore durante la lettura del file sorgente:
ErrorCopying=Si � verificato un errore durante la copia di un file:
ErrorReplacingExistingFile=Si � verificato un errore durante la sovrascrittura del file esistente:
ErrorRestartReplace=Errore durante Riavvio-Sostituzione:
ErrorRenamingTemp=Si � verificato un errore durante il tentativo di rinominare un file nella cartella di installazione:
ErrorRegisterServer=Impossibile registrare la DLL/OCX: %1
ErrorRegSvr32Failed=RegSvr32 � fallito con codice di uscita %1
ErrorRegisterTypeLib=Impossibile registrare la libreria di tipo: %1

; *** Post-installation errors
ErrorOpeningReadme=Si � verificato un errore durante l'apertura del file LEGGIMI.
ErrorRestartingComputer=Impossibile riavviare il sistema. Riavviare manualmente.

; *** Uninstaller messages
UninstallNotFound=Il file "%1" non esiste. Impossibile disinstallare.
UninstallOpenError=Il file "%1" non pu� essere aperto. Impossibile disinstallare
UninstallUnsupportedVer=Il file log di disinstallazione "%1" � in un formato non riconosciuto da questa versione del programma di disinstallazione. Impossibile disinstallare
UninstallUnknownEntry=Trovata una voce sconosciuta (%1) nel file log di disinstallazione
ConfirmUninstall=Si desidera rimuovere completamente %1 e tutti i suoi componenti?
UninstallOnlyOnWin64=Questa applicazione pu� essere disinstallata solo su Windows a 64-bit.
OnlyAdminCanUninstall=Questa applicazione pu� essere disinstallata solo da un utente con privilegi di amministratore.
UninstallStatusLabel=Attendere fino a che %1 � stato rimosso dal computer.
UninstalledAll=%1 � stato rimosso con successo dal computer.
UninstalledMost=Disinstallazione di %1 completata.%n%nAlcuni elementi non possono essere rimossi. Dovranno essere rimossi manualmente.
UninstalledAndNeedsRestart=Per completare la disinstallazione di %1, � necessario riavviare il sistema.%n%nSi desidera riavviare adesso?
UninstallDataCorrupted=Il file "%1" � danneggiato. Impossibile disinstallare

; *** Uninstallation phase messages
ConfirmDeleteSharedFileTitle=Rimuovere il file condiviso?
ConfirmDeleteSharedFile2=Il sistema indica che il seguente file condiviso non � pi� usato da nessun programma. Rimuovere questo file condiviso?%n%nSe qualche programma usasse questo file, potrebbe non funzionare pi� correttamente. Se non si � sicuri, scegliere No. Lasciare il file nel sistema non pu� causare danni.
SharedFileNameLabel=Nome del file:
SharedFileLocationLabel=Percorso:
WizardUninstalling=Stato della disinstallazione
StatusUninstalling=Disinstallazione di %1 in corso...

; The custom messages below aren't used by Setup itself, but if you make
; use of them in your scripts, you'll want to translate them.

[CustomMessages]
;Inno Setup Built-in Custom Messages
NameAndVersion=%1 versione %2
AdditionalIcons=Icone aggiuntive:
OptionalFeatures=Optional Features:
CreateDesktopIcon=Crea un'icona sul &desktop
CreateQuickLaunchIcon=Crea un'icona nella &barra Avvio veloce
ProgramOnTheWeb=%1 sul Web
UninstallProgram=Disinstalla %1
LaunchProgram=Avvia %1
AssocFileExtension=&Associa l'estensione %2 a %1
AssocingFileExtension=Associazione dell'estensione %2 a %1 in corso...
;Things we can also localize
CompanyName=Thingamahoochie Software

;Translated by Andrea Decorte <klenje@adriacom.it>
;Types
TypicalInstallation=Installazione tipica
FullInstallation=Installazione completa
CompactInstallation=Installazione compatta
CustomInstallation=Installazione personalizzata

;Components
AppCoreFiles=File base di WinMerge
Filters=Filtri
Plugins=Plugin
Frhed=Frhed(Free hex editor)
WinIMerge=WinIMerge(Image Diff/Merge)
ArchiveSupport=Archive Support
ShellExtension32bit=32-bit WinMerge ShellExtension
Patch=GnuWin32 Patch for Windows

;Localization Components
Languages=Lingue
BasqueLanguage=Basque menus and dialogs
BulgarianLanguage=Menu e finestre di dialogo in bulgaro
CatalanLanguage=Menu e finestre di dialogo in catalano
ChineseSimplifiedLanguage=Menu e finestre di dialogo in cinese (semplificato)
ChineseTraditionalLanguage=Menu e finestre di dialogo in cinese (tradizionale)
CroatianLanguage=Croatian menus and dialogs
CzechLanguage=Menu e finestre di dialogo in ceco
DanishLanguage=Menu e finestre di dialogo in danese
DutchLanguage=Menu e finestre di dialogo in olandese
FinnishLanguage=Finnish menus and dialogs
FrenchLanguage=Menu e finestre di dialogo in francese
GalicianLanguage=Galician menus and dialogs
GermanLanguage=Menu e finestre di dialogo in tedesco
GreekLanguage=Greek menus and dialogs
HungarianLanguage=Menu e finestre di dialogo in ungherese
ItalianLanguage=Menu e finestre di dialogo in italiano
JapaneseLanguage=Menu e finestre di dialogo in giapponese
KoreanLanguage=Menu e finestre di dialogo in coreano
LithuanianLanguage=Menu e finestre di dialogo in lituano
NorwegianLanguage=Menu e finestre di dialogo in norvegese
PersianLanguage=Persian menus and dialogs
PolishLanguage=Menu e finestre di dialogo in polacco
PortugueseBrazilLanguage=Menu e finestre di dialogo in portoghese (brasiliano)
PortugueseLanguage=Menu e finestre di dialogo in portoghese
RomanianLanguage=Menu e finestre di dialogo in Romeno
RussianLanguage=Menu e finestre di dialogo in russo
SerbianLanguage=Serbian menus and dialogs
SinhalaLanguage=Sinhala menus and dialogs
SlovakLanguage=Menu e finestre di dialogo in slovacco
SlovenianLanguage=Slovenian menus and dialogs
SpanishLanguage=Menu e finestre di dialogo in spagnolo
SwedishLanguage=Menu e finestre di dialogo in svedese
TurkishLanguage=Menu e finestre di dialogo in turco
UkrainianLanguage=Ukrainian menus and dialogs

;Tasks
ExplorerContextMenu=&Attiva l'integrazione con il menu contestuale di Explorer
IntegrateTortoiseCVS=Integrazione con &TortoiseCVS
IntegrateTortoiseGIT=Integrazione con To&rtoiseGIT
IntegrateTortoiseSVN=Integrazione con T&ortoiseSVN
IntegrateClearCase=Integrazione con Rational &ClearCase
AddToPath=&Add WinMerge folder to your system path

; 3-way merge wizard page
ThreeWayMergeWizardPageCaption=3-Way Merge
ThreeWayMergeWizardPageDescription=Do you use WinMerge as a 3-way merge tool for TortoiseSVN/GIT?
RegisterWinMergeAs3WayMergeTool=Register WinMerge as a 3-way merge tool
MergeAtRightPane=Merge at right pane
MergeAtCenterPane=Merge at center pane
MergeAtLeftPane=Merge at left pane
AutoMergeAtStartup=Auto-merge at startup time

;Icon Labels
ReadMe=Leggimi
UsersGuide=Guida per l'utente
ViewStartMenuFolder=&Visualizza cartella del menu Start di WinMerge

;Code Dialogs
DeletePreviousStartMenu=L'installer ha rilevato che il tuo menu Start � stato spostato da "%s" a "%s". Desideri eliminare la precedente cartella del menu Start?

; Project file description
ProjectFileDesc=File di progetto di WinMerge
