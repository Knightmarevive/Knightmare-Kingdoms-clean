After enabling all WOG&Era options i admited that the creators of the scripts left a lot of bugs.The game often crashes and throws exeptions.There are incorrect values too.The project isn't supported anymore, so to play safe,I should learn ERM scripting to fix them.This work could not be be done without help of Sav(many thanks to him!!) and other WOG comunity.


Version 1.2
(*)Improoved function !!BA:P without bugs-now it not crashes and only 3 lines long

(*)Script 5 wog - enhanced war machines 3.*424-425 Fixed bug with incorrect numdef of first aid tents for defender*


Version 1.1

(*)Added scripts updated by Jim Vogan.See README_JV_Scripts.txt and original Era fixes(graal bug)

(*)The function !!BA:P?y1/?y2/?y3 returns incorrect y3 at random.This led to bugs in all scripts using it.Exchanged it by function fixing the scripts:

**[function BA:P without bugs]

!!VRy1:Sv998;   [updated by rennyo 26..02.2012]
!!VRy2:Sv999;   [updated by rennyo 26..02.2012]
!!VRy3:Sv1000;  [updated by rennyo 26..02.2012]

in scripts:
24 wog - enhanced war machines 1 290-297
22 wog - metamorphs              54-62
10 wog - new battlefields	29-38	
5 wog - enhanced war machines 3  321-328


Version 1.00

(*)Script 5 wog - enhanced war machines 3.*385,428 Fixed bug with incorrect number of balistas with comander "Ogre leader" and its level beyong the 1st,reduced the number of first aid tents given by comander*

(*)Script 5 wog - enhanced war machines 3.*69 Fixed bug with syntax(may caused bugs)*

(*)Script 5 wog - enhanced war machines 3.*560 Fixed spaces betwean two !! in comands*

(*)Script 5 wog - enhanced war machines 3.*320 Fixed bug with reciver BA.By the strange reason when AI attacks in some cases(Enchanted Tower,town) !!BA:P returned incorrect location of the battle(underground level=1 instead of correct 0).This led to crashes at the end of triger.*

(*)Script 30 wog - enhanced secondary skills.*310,311,314,315 Fixed bug with First Aid I,when it resurects army of the caracter, who lost the battle, which led to crashes*

(*)Script 16 wog - split decision.*382-384 Fixed horror bug with killing splited stack by teleporting it, which led to crashes in adress 0x00000018.Now this is doing with flags* 

(*)Script 16 wog - split decision.*476,499 Fixed bug when one half of the spliting stack disappeared after battle(499) and possible bug in FU49 call.See picture  FU49 for details* 

Now first aid I and war machines III works fine together.

		rennyo, rennyo@inbox.ru