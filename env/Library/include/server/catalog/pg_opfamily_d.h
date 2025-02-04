/*-------------------------------------------------------------------------
 *
 * pg_opfamily_d.h
 *    Macro definitions for pg_opfamily
 *
 * Portions Copyright (c) 1996-2024, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_OPFAMILY_D_H
#define PG_OPFAMILY_D_H

#define OperatorFamilyRelationId 2753
#define OpfamilyAmNameNspIndexId 2754
#define OpfamilyOidIndexId 2755

#define Anum_pg_opfamily_oid 1
#define Anum_pg_opfamily_opfmethod 2
#define Anum_pg_opfamily_opfname 3
#define Anum_pg_opfamily_opfnamespace 4
#define Anum_pg_opfamily_opfowner 5

#define Natts_pg_opfamily 5


/* This does not account for non-core opfamilies that might accept boolean */
#define IsBuiltinBooleanOpfamily(opfamily) \
	((opfamily) == BOOL_BTREE_FAM_OID || (opfamily) == BOOL_HASH_FAM_OID)

#define BOOL_BTREE_FAM_OID 424
#define BPCHAR_BTREE_FAM_OID 426
#define BYTEA_BTREE_FAM_OID 428
#define NETWORK_BTREE_FAM_OID 1974
#define INTEGER_BTREE_FAM_OID 1976
#define INTERVAL_BTREE_FAM_OID 1982
#define OID_BTREE_FAM_OID 1989
#define TEXT_BTREE_FAM_OID 1994
#define TEXT_PATTERN_BTREE_FAM_OID 2095
#define BPCHAR_PATTERN_BTREE_FAM_OID 2097
#define BOOL_HASH_FAM_OID 2222
#define TEXT_SPGIST_FAM_OID 4017

#endif							/* PG_OPFAMILY_D_H */
