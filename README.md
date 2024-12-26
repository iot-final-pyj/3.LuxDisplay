LuxDisplay
---
<img width="439" alt="Screenshot 2024-10-01 at 6 32 30 PM" src="https://github.com/user-attachments/assets/1514a8c5-3fee-4366-9884-dbbac64d1aeb">


### platformio.ini
```
lib_deps = 
	bodmer/TFT_eSPI@^2.5.43
```
### customize User_Setup.h
find the User_Setup.h
```
find . -name User_Setup_Select.h
```
or using VSCode/PIO, naviate to the file
1. click on .pio 
2. click on libdeps
3. click on TFT_eSPI
4. scroll down
5. find and click on User_Setup_Select.h
   
![Untitled](https://github.com/user-attachments/assets/5ca9c033-f228-46d8-a6fd-b6643f9ba7ce)


and modify User_Setup_Select.h
1. comment out the following line
```
//#include <User_Setup.h>           // Default setup is root library folder
```
2. uncomment the following line
```
#include <User_Setups/Setup206_LilyGo_T_Display_S3.h>
```
