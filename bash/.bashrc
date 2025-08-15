#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

if [ -f ~/.bash/.bash_utils ]; then
    . ~/.bash/.bash_utils
fi

if [ -f ~/.bash/.bash_aliases ]; then
    . ~/.bash/.bash_aliases
fi

if [ -f ~/.bash/.bash_prompt ]; then
    . ~/.bash/.bash_prompt
fi

if [ -f ~/.bash/.bash_env ]; then
    . ~/.bash/.bash_env
fi

systemctl --user enable opentabletdriver.service --now

[ -f "/home/zupreme/.ghcup/env" ] && . "/home/zupreme/.ghcup/env" # ghcup-env
export PATH=/home/zupreme/.local/bin:/home/zupreme/.cabal/bin:/home/zupreme/.ghcup/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/var/lib/flatpak/exports/bin:/usr/lib/jvm/default/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl
export PATH=/home/zupreme/.local/bin:/home/zupreme/.cabal/bin:/home/zupreme/.ghcup/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/var/lib/flatpak/exports/bin:/usr/lib/jvm/default/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl

# Display power management system (https://unix.stackexchange.com/questions/18882/how-to-prevent-my-screens-from-dimming-going-black-from-the-command-line)
# $ xset -dpms
# $ xset +dpms
# $ set dpms 0 0 0 (is the same as -dpms)
# $ set dpms x y z (x = seconds till standby, y = seconds till suspend, z = seconds till poweroff)
