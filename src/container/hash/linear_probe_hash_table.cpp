//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// linear_probe_hash_table.cpp
//
// Identification: src/container/hash/linear_probe_hash_table.cpp
//
// Copyright (c) 2015-2019, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include <iostream>
#include <string>
#include <vector>

#include "common/exception.h"
#include "common/logger.h"
#include "common/rid.h"
#include "container/hash/linear_probe_hash_table.h"

namespace bustub {

INDEX_TEMPLATE_ARGUMENTS
HASH_TABLE_TYPE::LinearProbeHashTable(const std::string &name, BufferPoolManager *buffer_pool_manager,
                                      const KeyComparator &comparator, size_t num_buckets,
                                      void (*hash_fn)(const void *, const int, const uint32_t, void *))
    : buffer_pool_manager_(buffer_pool_manager), comparator_(comparator), hash_fn_(hash_fn) {}

/*****************************************************************************
 * SEARCH
 *****************************************************************************/
INDEX_TEMPLATE_ARGUMENTS
bool HASH_TABLE_TYPE::GetValue(Transaction *transaction, const KeyType &key, std::vector<ValueType> *result) { return false; }
/*****************************************************************************
 * INSERTION
 *****************************************************************************/
INDEX_TEMPLATE_ARGUMENTS
bool HASH_TABLE_TYPE::Insert(Transaction *transaction, const KeyType &key, const ValueType &value) { return false; }

/*****************************************************************************
 * REMOVE
 *****************************************************************************/
INDEX_TEMPLATE_ARGUMENTS
bool HASH_TABLE_TYPE::Remove(Transaction *transaction, const KeyType &key, const ValueType &value) { return false; }

/*****************************************************************************
 * RESIZE
 *****************************************************************************/
INDEX_TEMPLATE_ARGUMENTS
void HASH_TABLE_TYPE::Resize(size_t initial_size) {}

/*****************************************************************************
 * GETSIZE
 *****************************************************************************/
INDEX_TEMPLATE_ARGUMENTS
size_t HASH_TABLE_TYPE::GetSize() { return 0; }

template class LinearProbeHashTable<int, int, IntComparator>;

template class LinearProbeHashTable<GenericKey<4>, RID, GenericComparator<4>>;
template class LinearProbeHashTable<GenericKey<8>, RID, GenericComparator<8>>;
template class LinearProbeHashTable<GenericKey<16>, RID, GenericComparator<16>>;
template class LinearProbeHashTable<GenericKey<32>, RID, GenericComparator<32>>;
template class LinearProbeHashTable<GenericKey<64>, RID, GenericComparator<64>>;

}  // namespace bustub
