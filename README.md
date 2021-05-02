# dwmblocks

Modular status bar for dwm written in c.

# My build

My builds of dwmblocks reads my scripts [here is my scripts repo](https://github.com/ayylouu/scripts/).

# Editing blocks

The statusbar is made from text output from commandline programs. Blocks are added and removed by editing the blocks.h file.

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update. That's still an option in dwmblocks but you can give a module a signal that you can signal to it to update on a relevant event, rather than having it rerun idly.

For example, the audio module has the update signal 10 by default. So running `pkill -RTMIN+10` dwmblocks will update it.

My volume module never updates on its own, instead I have this command run along side my volume shortcuts in sxiv to only update it when it changes.
