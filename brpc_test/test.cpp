#include "bthread/bthread.h"
#include "bthread/task_meta.h"
#include "bthread/unstable.h"
#include "butil/gperftools_profiler.h"
#include "butil/logging.h"
#include "butil/macros.h"
#include "butil/time.h"
#include <bthread/types.h>

static void *yield_thread(void *) {
  LOG(INFO) << "in yield";
  return NULL;
}

int main(void) {
  LOG(INFO) << "hello...";
  bthread_t tid;
  bthread_start_background(&tid, &BTHREAD_ATTR_DEBUG, yield_thread, nullptr);
  bthread_join(tid, nullptr);
  return 0;
}