# Craine Studio
Operating System Studio Maker 

# operation

## preset

create preset preset with gitrepo
```
./craine -o preset -m create -n [name] -l [gitrepo link]
```

create local preset 
```
./craine -o preset -m create -n [name]
```

updating preset
```
craine -o preset -m update -n [name]
```

upgrade preset
```
craine -o preset -m upgrade
```

clone preset
```
craine -o preset -m clone -l [gitrepo link]
```

reset preset
```
craine -o preset -m reset -n [name]
```


delete preset
```
craine -o preset -m delete -n [name]
```


## protos

create remote protos
```
./craine -o protos -m create -a [author] -b [group] -n [name] -l [gitrepo link]
```

create local protos 
```
./craine -o protos -m create -a [author] -b [group] -n [name]
```

clone protos
```
./craine -o protos -m clone -l [gitrepo link]
```

reset protos
```
./craine -o protos -m reset -b [group] -n [name]
```

update protos
```
./craine -o protos -m update -b [group] -n [name]
```

upgrade protos
```
./craine -o protos -m upgrade
```

delete protos
```
./craine -o protos -m delete -b [group] -n [name]
```


## debuging

### automatic push to repository
```
./debug -m make -n creamy -g git@github.com:almuhdilkarim/rapdevs.git
```



## abadoned
### dekstop
1. deepin
2. UKUI
