#ifndef MATH_H
#define MATH_H

#include "../SDK/SDK.h"

namespace Math {
    void inline SinCos(float, float*, float*);
    void AngleVectors(const QAngle&, Vector&);
    void NormalizeAngles(QAngle&);
    void ClampAngles(QAngle&);
    void CorrectMovement(const QAngle&, CUserCmd*, float, float);
    float GetFov(const QAngle&, const QAngle&);
    float DotProduct(const Vector&, const float*);
    void VectorAngles(const Vector&, QAngle&);
    void VectorTransform (const Vector&, const matrix3x4_t&, Vector&);
    QAngle CalcAngle(const Vector&, const Vector&);
    float float_rand(float, float);
}

#endif // MATH_H
