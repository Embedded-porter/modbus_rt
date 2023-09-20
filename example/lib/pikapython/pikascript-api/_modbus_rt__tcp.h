/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc-en.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * http://pikapython.com/doc/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef ___modbus_rt__tcp__H
#define ___modbus_rt__tcp__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New__modbus_rt__tcp(Args *args);

void _modbus_rt__tcp___del__(PikaObj *self);
int _modbus_rt__tcp__close(PikaObj *self);
void _modbus_rt__tcp__init(PikaObj *self, int mode);
int _modbus_rt__tcp__isopen(PikaObj *self);
char* _modbus_rt__tcp__master_get_saddr(PikaObj *self);
PikaObj* _modbus_rt__tcp__master_read_list(PikaObj *self, int slave, int fuction, int addr, PikaTuple* val);
int _modbus_rt__tcp__master_set_server(PikaObj *self, char* saddr, int sport);
int _modbus_rt__tcp__master_write_int(PikaObj *self, int slave, int fuction, int addr, PikaTuple* val);
int _modbus_rt__tcp__master_write_list(PikaObj *self, int slave, int fuction, int addr, PikaTuple* val);
int _modbus_rt__tcp__open(PikaObj *self);
int _modbus_rt__tcp__set_ip(PikaObj *self, char* ip);
int _modbus_rt__tcp__set_net(PikaObj *self, char* ip, int port, int type);
int _modbus_rt__tcp__set_port(PikaObj *self, int port);
int _modbus_rt__tcp__set_type(PikaObj *self, int type);
int _modbus_rt__tcp__slave_add_block(PikaObj *self, char* name, int type, int addr, int nums);
PikaObj* _modbus_rt__tcp__slave_read_regs(PikaObj *self, int type, int addr, PikaTuple* val);
int _modbus_rt__tcp__slave_set_addr(PikaObj *self, int addr);
int _modbus_rt__tcp__slave_set_done_callback(PikaObj *self, Arg* cb);
int _modbus_rt__tcp__slave_set_pre_ans_callback(PikaObj *self, Arg* cb);
int _modbus_rt__tcp__slave_set_strict(PikaObj *self, int strict);
int _modbus_rt__tcp__slave_write_regs(PikaObj *self, int type, int addr, PikaTuple* val);

#endif
