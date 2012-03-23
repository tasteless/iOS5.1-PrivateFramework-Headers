/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGSize {
    float _field1;
    float _field2;
};

struct Connection;

struct InputDataStream {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    _Bool _field4;
    _Bool _field5;
};

struct MapPoint {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct Point {
    int _field1;
    int _field2;
};

struct Requester {
    void **_field1;
    int _field2;
    struct Connection *_field3;
    char *_field4;
    _Bool _field5;
    _Bool _field6;
};

struct Response {
    void **_field1;
    id _field2;
};

struct TileStore {
    long long _field1;
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field2;
    char *_field3;
    struct sqlite3 *_field4;
    struct sqlite3_stmt *_field5;
    struct sqlite3_stmt *_field6;
    struct sqlite3_stmt *_field7;
    struct sqlite3_stmt *_field8;
    struct sqlite3_stmt *_field9;
    struct sqlite3_stmt *_field10;
    struct sqlite3_stmt *_field11;
    struct sqlite3_stmt *_field12;
};

struct _GEOTileKey {
    unsigned int :6;
    unsigned int :26;
    unsigned int :26;
    unsigned int :6;
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :1;
    unsigned int :7;
    unsigned char _field1[4];
};

struct sqlite3;

struct sqlite3_stmt;

#pragma mark Typedef'd Structures

typedef struct {
    int *list;
    unsigned int count;
    unsigned int size;
} CDStruct_56d48c16;

typedef struct {
    long long *list;
    unsigned int count;
    unsigned int size;
} CDStruct_815f15fd;

typedef struct {
    unsigned int :6;
    unsigned int :26;
    unsigned int :26;
    unsigned int :6;
} CDStruct_1ea8d665;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

