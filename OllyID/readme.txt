Copy OllyID.dll userdb.txt into the Plugins directory.

/*******************************************************************************
 * Version 0.3.0 (12NOV2012)
 * [*] Changed the way signatures are searched for another huge speed increase
 * [*] Minor code cleanup
 *
 * Version 0.2.0 (09NOV2012)
 * [+] Add "Browse" button for database
 * [+] Enable drag-n-drop for database into Settings
 * [+] Major code optimization: about 1000% increase (literally) in non ep_only scanning (whoops!)
 
 * Version 0.1.1 (02NOV2012)
 * [+] Implemented Scan on analysis
 * [+] Added notification to log window for scanning
 * [*] Fix bug where settings were not always updated in memory
 *
 * Version 0.1.0 (01NOV2012)
 * [+] Scan entire module or only from EP
 * [+] Settings Dialog
 * [-] Removed TEST menu...finally
 * [-] Removed Log Window remnants
 * [*] Main menu and Popup menus now match
 * [*] Significant code cleanup
 *
 * Version 0.0.4-alpha (08OCT2012)
 * [+] Updated for OllyDbg 2.01g PDK
 *
 * Version 0.0.3-alpha (24SEP2012)
 * [+] Improved scan functionality
 *
 * Version 0.0.2-alpha
 * [+] Added ScanModule routine to search database
 *
 * Version 0.0.1-alpha
 * [+] Base code
 *
 *
 * -----------------------------------------------------------------------------
 * TODO
 * -----------------------------------------------------------------------------
 *
 * [ ] Add Show scan time setting
 * [ ] Scan any module currently in CPU instead of just main module
 * [ ] Option: Scan On Module Load
 * [ ] Implement "Create Signature"
 * [ ] Implement string routines in code instead of stdlib.h (id est strlen, strcpy, etc)
 * [ ] Fix the way the parser handles double brackets. Exempli gratia [[MSLRH]] displays as [[MSLRH
 * [ ] Improve error checking for most everything
 *
 ******************************************************************************/