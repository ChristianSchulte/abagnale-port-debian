Debian Port of the Abagnale Algorithmic Trading System

You'll need to install some packages needed for building packages first.

```console
user@host:~$ sudo apt update
user@host:~$ sudo apt install build-essential debhelper devscripts
user@host:~/abagnale-port-debian$ sudo apt build-dep .
```

Creating the packages involves multiple commands to issue. The following script
runs all of them in correct order.


```console
user@host:~/abagnale-port-debian$ debian/build
```

That script should download the tagged upstream sources and create the Debian
specific archives and the binary packages in the parent directory. You may
need to install additional packages to make the script succeed depending on
your distribution.

Building for a specific distribution can be done by using pbuilder.

```console
user@host:~$ sudo apt install pbuilder
user@host:~$ sudo pbuilder create --distribution unstable
user@host:~$ sudo pbuilder build ~/abagnale-port-debian/../abagnale_*.dsc
user@host:~$ sudo ls /var/cache/pbuilder/result
user@host:~$ sudo pbuilder login --bindmounts /var/cache/pbuilder/result
```
