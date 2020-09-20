# dwmblocks
Modular status bar for dwm written in c.

# usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.

# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.

# scripts
In the scripts folder there are the following scripts for the statusbar:
+ clock (displays time & date) 
+ kernel (displays the kernel that is running)
+ memory (displays memory usage)
+ pacupdate (displays how many updates are available via pacman)
+ upt (displays the uptime of the system)
+ volume (displays volume)

To use these scripts, place them anywhere you like, and edit the path in the blocks.h file.
