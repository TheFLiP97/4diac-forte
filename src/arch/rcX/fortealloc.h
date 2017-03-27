/*******************************************************************************
 * Copyright (c) 2016 fortiss GmbH
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *  Alois Zoitl - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef FORTEALLOC_H_
#define FORTEALLOC_H_

#include "datatype.h"
#include <rX_Includes.h>

inline
void forte_free(void *paData){
  rX_MemFreeMemory(paData);
}

inline
void *forte_malloc(size_t paSize){
  void *memory;
  rX_MemAllocateMemory(&memory, paSize);
  //TODO add error handling for the return value
  return memory;
}


#endif /* FORTEALLOC_H_ */
