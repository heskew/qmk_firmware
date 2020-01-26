# heskew Clueboard layout

```shell
make clueboard/66/rev4:heskew
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash .build/clueboard_66_rev4_heskew.hex && \
dfu-programmer atmega32u4 reset
```
