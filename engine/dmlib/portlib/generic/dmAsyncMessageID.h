/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 *  DESCRIPTION:
 *      The dmAsyncMessageID.h header file 
 */

#ifndef DM_ASYNC_MESSAGEID_H
#define DM_ASYNC_MESSAGEID_H

#include "xpl_Message.h"
#include "xpl_Time.h"

enum {
  SYNCML_DM_INIT_MSG_ID = XPL_DM_TASK_MESSAGE_CATEGORY,
  SYNCML_DM_UNINIT_MSG_ID,
  SYNCML_DM_GET_SUBTREE_MSG_ID,  
  SYNCML_DM_RELEASE_TREE_ID,
  SYNCML_DM_START_SERVER_SESSION_MSG_ID,
  SYNCML_DM_PROCESS_SCRIPT_MSG_ID,
  SYNCML_DM_BOOTSTRAP_MSG_ID,
  SYNCML_DM_PROCESS_NOTIFICATION_MSG_ID,
  SYNCML_DM_GET_NODE_MSG_ID,
  SYNCML_DM_RELEASE_NODE_MSG_ID,
  SYNCML_DM_DELETE_NODE_MSG_ID,
  SYNCML_DM_RENAME_NODE_MSG_ID,
  SYNCML_DM_CREATE_INTERIOR_NODE_MSG_ID,
  SYNCML_DM_CREATE_LEAF_NODE_MSG_ID,
  SYNCML_DM_GET_CHULD_NODE_NAMES_MSG_ID,
  SYNCML_DM_FLUSH_MSG_ID,
  SYNCML_DM_COMMIT_MSG_ID,
  SYNCML_DM_ROLLBACK_MSG_ID,
  SYNCML_DM_BEGIN_MSG_ID,
  SYNCML_DM_GET_CHILD_VALUES_MAP_MSG_ID,
  SYNCML_DM_SET_CHILD_VALUES_MAP_MSG_ID,
  SYNCML_DM_GET_ATTRIBUTES_MSG_ID,
  SYNCML_DM_GET_VALUE_MSG_ID,
  SYNCML_DM_SET_VALUE_MSG_ID,
  SYNCML_DM_SET_TITLE_MSG_ID,
  SYNCML_DM_SET_ACL_MSG_ID,
  SYNCML_DM_EXECUTE_MSG_ID,
  SYNCML_DM_NOTIFY_ON_IDLE_MSG_ID,
  SYNCML_DM_TIMER_MSG_ID,
  SYNCML_DM_TIMER_MSG_ID_LAST,
  SYNCML_DM_TREE_AVAILABLE_MSG_ID,
  SYNCML_DM_GET_FIRST_CHUNK_MSG_ID,
  SYNCML_DM_GET_NEXT_CHUNK_MSG_ID,
  SYNCML_DM_SET_FIRST_CHUNK_MSG_ID,
  SYNCML_DM_SET_NEXT_CHUNK_MSG_ID,
  SYNCML_DM_SET_LAST_CHUNK_MSG_ID
};
typedef UINT32 SYNCML_DM_TASK_MESSAGE_ID;  


#define SYNCML_DM_ASYNC_API_MESSAGE_COUNT (SYNCML_DM_SET_LAST_CHUNK_MSG_ID - SYNCML_DM_INIT_MSG_ID)

typedef struct
{
   XPL_CLK_TIMER_CBACK callback;
   XPL_TIMER_HANDLE_T  timerHandle;
} SYNCML_DM_TIMER_MSG_T;

#endif
