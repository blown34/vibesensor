# vibesensor
Ultra Sensitive PIEZO VIBRATION SENSOR (detector)

This is a simple but effective circuit that uses a piezo speaker element out of an old smoke detector to detect vibrations.
The signal is processed by the 741 op amp, then sent to a small cheap microcontroller (Atmel ATTiny85).
The microcontroller then makes some decisions and adjust its output accordingly.

A simple way to program the ATTiny85 chip, is to use the Sparkfun Tiny AVR Programmer and the Arduino IDE program.
The programmer can be found here: https://www.sparkfun.com/products/11801 (or just search "Tiny AVR Programmer")
The Arduino IDE can be found here: https://www.arduino.cc/
There are a ton of Youtube videos on this subject.

The project was originally for an eBike alarm. The output of the Attiny (via a Chinese relay module) would electrically close ("press")
the dedicated alarm button on a hacked cheap handheld amateur radio (Baofeng UV-5R). The radio would then broadcast the alarm signal
to me via amateur radiowaves to another handheld radio on the same frequency that i carried. I worked perfectly.
You couldn't even touch the bike without the alarm going off, let alone try and steal it. The source code example,
with its strange delays, is based on this specific application. Your needs, obviously, may differ.

For the NOOBS, the circuit worked perfectly for me, so hopefully I made no errors in my schematic (created 6 months later). I checked
it several times. But if I did, I will try to eventually correct.
You can leave me a comment on youtube. https://www.youtube.com/watch?v=PuCPrqZChKc  
HOWEVER, please keep in mind that I don't check that youtube account very often so STOP, BREATHE, DON'T PANIC, use your brain,
break the problem down into simple parts, and test one stage at a time from the beginning. Voltages, connections, etc...
If you're not getting any flashes out of the LED on the output of the 741, then you might as well disconnect
the ATTiny and just focus your attention on that. Test each section as you go along and you should be fine.
It may be a while before I make any corrections...

Good luck!

Obviously, I MAKE ABSOLUTELY NO REPRESENTATIONS OR WARRANTIES WHATSOEVER,
EXPRESS OR IMPLIED, REGARDING THE INFORMATION CONTAINED HEREIN, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTY OF MERCHANTABILITY
OR FITNESS FOR A PARTICULAR PURPOSE. Create and use at your own risk.
