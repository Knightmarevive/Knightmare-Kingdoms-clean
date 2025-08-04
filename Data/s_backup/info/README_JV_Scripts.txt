Changes to WoG Scripts by Jim Vogan (2007-2009):

These scripts are optional enhancements to the WoG scripts in Data/s.  Save a copy of the original scripts, then try some or all of these - your choice.

Note:  these are enhanced versions of the original "allinon1" WoG scripts, not the updates which were never officially released.

Script00 (wogification):

Fixed 'Treasure Chest' bug that can cause an ERM error during wogification on some maps.

Added code to pre-set most random choices for special Treasure Chests and Fishing Wells.
(So that reloading will not change result.)

Script01 (Map Rules)

Changed Hidden Skills so that if a player rejects a skill, it will not be re-offered unless some other skill is rejected.
(The last rejected skill is not re-offered.)  (I once was offered Scouting as a hidden skill three times in a row, and was offered the same skill twice in a row at least once in every map.)

Script07 (Fishing Wells):

Wells can can give four types of results.  Once a result of each type has been obtained from each well, the well is "fished-out".  This prevents the unlimited supply of artifacts and treasure which can make a map designed to be difficult become easy.

The four types are:  a random treasure (artifact, scroll, or gold); a random event (old boot, cheese sandwich, rainbow fish, etc.); a battle with a small number of random monsters; a tunneling to some other well.  The AI is not allowed to tunnel - sorry, AI's.

In combination with the revised script00, most of the random numbers are generated and stored in position variables during wogification, so that saving and reloading will not change the result.

Script13 (Tavern Card Game):

Fixed a bug that occurred when a Tavern is located underground.

Script16 (Battle Academy):

  got ERM error "!!UN:Av382/1/?v383; - wrong artifact number".
  Added -10 conditional to next 3 commands to try to prevent re-occurance.
  Also found and corrected typo - DO319 should be DO3619.

Script29 and Script 31 (New Treasure Chests):

In combination with the revised script00, most of the random numbers are generated and stored in position variables during wogification, so that saving and reloading will not change the result.

Also, I didn't like to take a week to read the Book of ____ to get Expert ____, and changed this so the Book gets read overnight.   

Script32 (Summoning Stones):

Changed
!!UN:P33/?y-1; [Check if Summoning Stones is enabled in WoGify Options: y-1]
To
!!UN:P32/?y-1; [Check if Summoning Stones is enabled in WoGify Options: y-1]

So that the WoG Settings Menu will enable or disable this script correctly.

Script40:

The original function of this script is unchanged, but extra functions have been added:  Monster Resources,
Buckler of Beezelbub, an enhancement to the Armor of the Damned, and Dress Code.

Monster Resources:  after destroying a bunch of Gold Golems, why would you leave that gold on the battlefield, instead of picking it up?  This script gives you some resources for each creature you destroy which is made of those resources, e.g., crystal from Crystal Dragons, wood from Dendroids, ore from golems, etc.  It is enabled or disabled by P107, which is the "Fishing Wells" flag.  So maps which are set to be wogified without Fishing Wells will not have this feature.

The "Buckler of Beelzebub" is a new combo artifact (#15), formed of the Sword of Hellfire (11), the Shield of the Damned (17), the Hellstorm Helmet (23), and  the Breastplate of Brimstone (29), and represented by shield #163

In addition to the attributes of its components, "Held with the left hand, the Buckler of Beelzebub gives the wearer a devil's power to teleport and to avoid retaliation, and increases all attributes by 2."

Enhancement to Combo Artifact "Armor of the Damned": 

Opponents' troops have Slow, Curse, Weakness, and Mistfortune cast on them for 50 turns, and the wearer's primary attributes are increased by 1 for every five hero levels.

Dress Code:  right-click on the active hero in the Hero Screen list to:
              1) Save the currently-equipped artifacts as the "Day" set.
              2) Save the currently-equipped artifacts as the "Night" set.
              3) Equip the Day artifact set.
              4) Equip the Night artifact set.
WARNING:  new combo artifacts such as the Barbarian Lord's Axe of Ferocity cannot be removed properly by ERM commands, so they must be disassembled into components before saving or removing them.  The script checks for the presence of the BLAoF (158) and the Buckler of Beezelbub (163) and will not process them to avoid this error.

Script44 (Emerald Tower):

This script is supposed to reset each Tower for weekly visits, but was not doing so correctly, so that each tower could only be used once.  Fixed.

Script48 (Enhanced Secondary Skills)

Some of the enhanced skills are supposed to operate during the first turn of a battle, but can cause a crash during Tactics pre-rounds.

Changed
** start of battle turn one trigger
!?BR&v7191=1/v997<1;
To
** start of battle turn one trigger
!?BR&v7191=1/v997=0; [revised JHV, <1-->=0][-1 causes crash w/tactics]





