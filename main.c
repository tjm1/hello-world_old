/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>


void testfunc(uint8_t num);

void main(void)
{
  uint8_t i;
  printk("Hello World! %s %s\n",__DATE__,__TIME__);
  printk("Board Name(TJM): %s\n", CONFIG_BOARD);
  for(i=0;i<5;i++)
  {
    testfunc(i);
  }
  while(1);

}
