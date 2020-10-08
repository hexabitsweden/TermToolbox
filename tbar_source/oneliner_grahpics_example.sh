clear

######################################
# This only works on BSD but it give #
# you som idea of what you can do.   #
######################################

bat=`sysctl hw.acpi.battery.life | cut -d ' ' -f 2`; tbar blue 11;tline blue 1;printf "Power";tcolorl yellow :;printf $bat;tbar blue 1;tline blue 11;tcolorl white "This is an example of termtools";echo

# This one should work on every *nix system:

bat=`uname -mor`; tbar red 40;tline red 1;printf "System:";tcolorl blue "$bat";tbar red 1;tbar red 40;tcolor pink "in just two onliners...";tdraw 1231231123123123123123123123112312312312.

