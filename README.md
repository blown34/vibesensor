# vibesensor
Ultra Sensitive PIEZO VIBRATION SENSOR (detector)

There are several related videos I've made that can be found here:

https://www.youtube.com/watch?v=PuCPrqZChKc (How to make a quick SENSITIVE PIEZO VIBRATION SENSOR and interface - DIY for Arduino Raspberry Pi)

https://www.youtube.com/watch?v=Uo7RD28HdAY&t=22s (Ultra Sensitive PIEZO VIBRATION SENSOR demo)

https://www.youtube.com/watch?v=K3lNiC3RexI&t=17s (UV-5R Call Button Hack for Bike Alarm)

https://www.youtube.com/watch?v=-3LGOeC2N48 (Vibration detector with Amateur Radio Alarm)

This is a simple but effective circuit that uses a piezo speaker element out of an old smoke detector to detect vibrations.
The signal is processed by the 741 op amp, and then is sent to a small cheap microcontroller (Atmel ATTiny85).
The microcontroller then makes some decisions and adjust its output accordingly. It wouldn't take much to consolidate and shrink the circuit down to a small surface-mount design. The prototype is a bit bulky.

A simple way to program the ATTiny85 chip, is to use the Sparkfun Tiny AVR Programmer and the Arduino IDE program.
The programmer can be found here: https://www.sparkfun.com/products/11801 (or just search "Tiny AVR Programmer")
The Arduino IDE can be found here: https://www.arduino.cc/
There are a ton of Youtube videos on this subject.

The project was originally for an eBike alarm. The output of the Attiny (via a Chinese relay module) would electrically close ("press")
the dedicated alarm button on a hacked cheap handheld amateur radio (Baofeng UV-5R). (see video here: https://www.youtube.com/watch?v=K3lNiC3RexI&t=17s) The radio would then broadcast the alarm signal to me via amateur radiowaves to another handheld
radio on the same frequency that i carried. It worked perfectly. You couldn't even touch the bike without the alarm going off,
let alone try and steal it. The source code example, with its strange delays, is based on this specific application.
Your needs, obviously, may differ.

For the NOOBS, the circuit worked perfectly for me, so hopefully I made no errors in my schematic (created 6 months later). I did check
it several times. But if I made an error, I will try to eventually correct.
You can leave me a comment on the initial video here: https://www.youtube.com/watch?v=PuCPrqZChKc  
or on the final DEMO video here: https://www.youtube.com/watch?v=Uo7RD28HdAY&t=22s
HOWEVER, please keep in mind that I don't check that youtube account very often so STOP, BREATHE, DON'T PANIC, use your brain,
break the problem down into simple parts, and test one stage at a time from the beginning. Voltages, connections, etc...
If you're not getting any flashes out of the LED on the output of the 741, then you might as well disconnect
the ATTiny and just focus your attention on that. Test each section as you go along and you should be fine.
It may be a while before I make any corrections...

Good luck!

THIS IS NOT AN ACTIVE PROJECT. No further posts or development is to be expected.

Obviously, I MAKE ABSOLUTELY NO REPRESENTATIONS OR WARRANTIES WHATSOEVER,
EXPRESS OR IMPLIED, REGARDING THE INFORMATION CONTAINED HEREIN, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTY OF MERCHANTABILITY
OR FITNESS FOR A PARTICULAR PURPOSE. Create and use at your own risk.
