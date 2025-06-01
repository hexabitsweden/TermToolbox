cd tbar_source
cc tbar.c -o tbar
cc tline.c -o tline
mv tbar /usr/local/bin/
mv tline /usr/local/bin/
chmod +x /usr/local/bin/tbar
chmod +x /usr/local/bin/tline
rm tbar
rm tline
cd ..
cd tdraw_source
cc tdraw.c -o tdraw
mv tdraw /usr/local/bin/
chmod +x /usr/local/bin/tdraw
rm tdraw

cd ..
cd tcolor_source 
cc tcolor.c -o tcolor
cc tcolorl.c -o tcolorl
mv tcolor /usr/local/bin/
mv tcolorl /usr/local/bin/
chmod +x /usr/local/bin/tcolor
chmod +x /usr/local/bin/tcolorl
rm tcolor
rm tcolorl
