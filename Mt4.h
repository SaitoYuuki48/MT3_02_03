#pragma once
#include "Matrix4x4.h"
#include "Vector3.h"
#include <cmath>
#include<assert.h>
#include <math.h>

//加法
Vector3 Add(Vector3 v1, Vector3 v2);

//減法
Vector3 Subtract(Vector3 v1, Vector3 v2);

//スカラー倍 (積)
Vector3 Multiply(float k, Vector3 v1);

//内積
float Dot(const Vector3& v1, const Vector3& v2);

//長さ(ノルム)
float Length(const Vector3& v);

//正規化
Vector3 Normalize(const Vector3& v);

//行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

//逆行列
Matrix4x4 Inverse(const Matrix4x4& m1);

//転置行列
Matrix4x4 Transpose(const Matrix4x4& m1);

//単位行列の作成
Matrix4x4 MakeIdentity4x4();

//平行移動
Matrix4x4 MakeTranslateMatrix(Vector3 translate);

//座標変換
Vector3 Transform(Vector3 vector, Matrix4x4 matrix);

//X軸回転行列
Matrix4x4 MakeRotateXmatrix(float radian);

//Y軸回転行列
Matrix4x4 MakeRotateYmatrix(float radian);

//Z軸回転行列
Matrix4x4 MakeRotateZmatrix(float radian);

//アフィン変換
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);

//透視投影行列
Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

//正射影行列
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

//ビューポート変換行列
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);