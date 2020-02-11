<img height="150" src="https://i.imgur.com/YEPFEcx.png">

The [Libbulletjme Project][libbulletjme] adds JNI "glue code"
to portions of [Bullet Physics][bullet]
and [Khaled Mamou's V-HACD Library][vhacd],
enabling 3-D physics simulation from Java applications.

Complete source code (in C++ and Java) is provided under
[a mixed open-source license][license].

The project supports the 3 major desktop operating systems:
Windows, Linux, and macOS.  Both the x86 and x86-64 architectures
are supported for each operating system.
In addition, the 64-bit ARM architecture (aarch64) is supported for Linux,
making a total of 7 platforms.

For each platform, 4 native libraries are distributed:
 + a release build using single-precision arithmetic (the default library)
 + a release build using double-precision arithmetic
 + a debug build using single-precision arithmetic
 + a debug build using double-precision arithmetic

Libbulletjme's native libraries are used in [Minie],
which integrates Libbulletjme into [the jMonkeyEngine game engine][jme].
For applications that don't use jMonkeyEngine,
standalone Maven artifacts are provided.

<a name="toc"/>

## Contents of this document

 + [How to add Libbulletjme to an existing project](#add)
 + [How to build Libbulletjme from source](#build)
 + [Lexicon of class/enum/struct names](#lexicon)
 + [What's missing](#todo)
 + [External links](#links)
 + [History](#history)
 + [Acknowledgments](#acks)

<a name="add"/>

## How to add Libbulletjme to an existing project

 1. For projects built using Gradle, add the following dependency:

        repositories {
            jcenter()
        }
        dependencies {
            compile 'com.github.stephengold:Libbulletjme:3.0.5'
        }

 2. Download appropriate native libraries from [GitHub][latest].
    You probably don't need all 34 files.
    Start with the ReleaseSp library for your development environment
    (for instance, "Linux64ReleaseSp_libbulletjme.so" for 64-bit Linux).

 3. Load the native library:

        import com.jme3.system.NativeLibraryLoader;
        NativeLibraryLoader.loadLibbulletjme(true, downloadDirectory, "Release", "Sp");

TODO HelloWorld application

<a name="build"/>

## How to build Libbulletjme from source

 1. Install build software:
   + one of the supported C++ compilers:
     + for Linux:  the [GNU Compiler Collection][gcc] or [Clang][llvm]
     + for Windows:  Microsoft Visual Studio
     + for macOS:  Xcode
   + a Java Development Kit, and
   + [Gradle]
 2. Download and extract the source code from GitHub:
   + using Git:
     + `git clone https://github.com/stephengold/Libbulletjme.git`
     + `cd Libbulletjme`
     + `git checkout -b latest 3.0.5`
   + using a web browser:
     + browse to [https://github.com/stephengold/Libbulletjme/releases/latest][latest]
     + follow the "Source code (zip)" link
     + save the ZIP file
     + unzip the saved ZIP file
     + `cd` to the extracted directory/folder
 3. Set the `JAVA_HOME` environment variable:
   + using Bash:  `export JAVA_HOME="` *path to your JDK* `"`
   + using Windows Command Prompt:  `set JAVA_HOME="` *path to your JDK* `"`
 4. Run the Gradle wrapper:
   + using Bash:  `./gradlew build`
   + using Windows Command Prompt:  `.\gradlew build`

After a successful build,
Maven artifacts and native libraries will be found
in the `dist` directory/folder.

You can install the Maven artifacts to your local cache:
 + using Bash:  `./gradlew :Libbulletjme:publishToMavenLocal`
 + using Windows Command Prompt:  `.\gradlew :Libbulletjme:publishToMavenLocal`

<a name="lexicon"/>

## Lexicon of class/enum/struct names

<pre>
Bullet v2 C++ type:                 corresponding Java class: com.jme3...
===================                 =====================================
btBox2dShape                        .bullet.collision.shapes.Box2dShape
btBoxShape                          .bullet.collision.shapes.BoxCollisionShape
btBU_Simplex1to4                    .bullet.collision.shapes.SimplexCollisionShape
btBvhTriangleMeshShape              .bullet.collision.shapes.MeshCollisionShape
btCapsuleShape                      .bullet.collision.shapes.CapsuleCollisionShape
btCollisionObject                   .bullet.collision.PhysicsCollisionObject
btCollisionObject::CollisionFlags   .bullet.collision.CollisionFlag
btCollisionShape                    .bullet.collision.shapes.CollisionShape
btCollisionWorld::LocalConvexResult .bullet.collision.PhysicsSweepTestResult
btCollisionWorld::LocalRayResult    .bullet.collision.PhysicsRayTestResult
btCompoundShape                     .bullet.collision.shapes.CompoundCollisionShape
btCompoundShapeChild                .bullet.collision.shapes.info.ChildCollisionShape
btConeShape                         .bullet.collision.shapes.ConeCollisionShape
btConeTwistConstraint               .bullet.joints.ConeJoint
btConstraintParams                  .bullet.joints.motors.MotorParam
btConvex2dShape                     .bullet.collision.shapes.Convex2dShape
btConvexHullShape                   .bullet.collision.shapes.HullCollisionShape
btCylinderShape                     .bullet.collision.shapes.CylinderCollisionShape
btDynamicsWorld                     .bullet.PhysicsSpace
btEmptyShape                        .bullet.collision.shapes.EmptyShape
btGeneric6DofConstraint             .bullet.joints.SixDofJoint
btGeneric6DofSpring2Constraint      .bullet.joints.New6Dof
btGeneric6DofSpringConstraint       .bullet.joints.SixDofSpringJoint
btGImpactMeshShape                  .bullet.collision.shapes.GImpactCollisionShape
btHeightfieldTerrainShape           .bullet.collision.shapes.HeightfieldCollisionShape
btHingeConstraint                   .bullet.joints.HingeJoint
btIndexedMesh                       .bullet.collision.shapes.infos.IndexedMesh
btKinematicCharacterController      .bullet.objects.PhysicsCharacter
btManifoldPoint                     .bullet.collision.PhysicsCollisionEvent
btMatrix3x3                         .math.Matrix3f
btMultiSphereShape                  .bullet.collision.shapes.MultiSphere
btPairCachingGhostObject            .bullet.objects.PhysicsGhostObject
btPoint2PointConstraint             .bullet.joints.Point2PointJoint
btQuaternion                        .math.Quaternion
btRaycastVehicle                    .bullet.objects.PhysicsVehicle
btRaycastVehicle::btVehicleTuning   .bullet.objects.infos.VehicleTuning
btRigidBody                         .bullet.objects.PhysicsRigidBody
btRotationalLimitMotor              .bullet.joints.motors.RotationalLimitMotor
btRotationalLimitMotor2             .bullet.joints.motors.RotationMotor
btSliderConstraint                  .bullet.joints.SliderJoint
btSoftBody                          .bullet.objects.PhysicsSoftBody
btSoftBody::AJoint                  .bullet.joints.SoftAngularJoint
btSoftBody::Anchor                  .bullet.joints.Anchor
btSoftBody::Body                    .bullet.object.PhysicsBody
btSoftBody::Config                  .bullet.objects.infos.SoftBodyConfig
btSoftBody::eAeroModel              .bullet.objects.infos.Aero
btSoftBody::Joint                   .bullet.joints.SoftPhysicsJoint
btSoftBody::LJoint                  .bullet.joints.SoftLinearJoint
btSoftBodyWorldInfo                 .bullet.SoftBodyWorldInfo
btSoftRigidDynamicsWorld            .bullet.PhysicsSoftSpace
btSphereShape                       .bullet.collision.shapes.SphereCollisionShape
btStaticPlaneShape                  .bullet.collision.shapes.PlaneCollisionShape
btTransform                         .math.Transform
btTranslationalLimitMotor           .bullet.joints.motors.TranslationalLimitMotor
btTranslationalLimitMotor2          .bullet.joints.motors.TranslationMotor
btTriangleIndexVertexArray          .bullet.collision.shapes.infos.CompoundMesh
btTriangleRaycastCallback::Eflags   .bullet.RayTestFlag
btTypedConstraint                   .bullet.joints.Constraint
btVector3                           .math.Vector3f
btWheelInfo                         .bullet.objects.VehicleWheel
</pre>

<pre>
V-HACD C++ type:                    corresponding Java class:
===================                 =====================================
IVHACD                              vhacd.VHACD
IVHACD::ConvexHull                  vhacd.VHACDHull
IVHACD::Parameters                  vhacd.VHACDParamters
</pre>

<a name="todo"/>

## What's missing

 + `btMultiBody` (Featherstone)
 + certain constraints:
   + `btFixedConstraint`
   + `btGearConstraint`
   + `btHinge2Constraint`
   + `btUniversalConstraint`
 + certain collision shapes:
   + `btMinkowskiSumShape`
   + `btMultimaterialTriangleMeshShape`
   + `btScaledBvhTriangleMeshShape`
 + inverse dynamics
 + serialization (file loader)
 + profiling
 + extras, examples, and tests
 + execution tracing
 + support for ARM architecture
 + `btAssert()` should perhaps throw a Java exception

<a name="links"/>

## External links

 + The [Bullet Physics SDK Manual](https://github.com/bulletphysics/bullet3/blob/master/docs/Bullet_User_Manual.pdf)
 + The [Bullet source-code repository](https://github.com/bulletphysics/bullet3) at [GitHub]
 + The [Minie project][minie] at [GitHub]
 + The [V-HACD Library][vhacd] at [GitHub]
 + The [physics section of the jMonkeyEngine Wiki](https://wiki.jmonkeyengine.org/jme3/advanced/physics.html)
 + The [Bullet Forum](https://pybullet.org/Bullet/phpBB3)
 + The [Bullet home page][bullet]
 + [JBullet], a known alternative to Libbulletjme

[Jump to table of contents](#toc)


[appveyor]: https://www.appveyor.com "AppVeyor Continuous Integration"
[bsd3]: https://opensource.org/licenses/BSD-3-Clause "3-Clause BSD License"
[bullet]: https://pybullet.org/wordpress "Bullet Real-Time Physics Simulation"
[chrome]: https://www.google.com/chrome "Chrome"
[findbugs]: http://findbugs.sourceforge.net "FindBugs Project"
[firefox]: https://www.mozilla.org/en-US/firefox "Firefox"
[gcc]: https://gcc.gnu.org "Gcc Compiler"
[git]: https://git-scm.com "Git"
[github]: https://github.com "GitHub"
[gradle]: https://gradle.org "Gradle Project"
[heart]: https://github.com/stephengold/Heart "Heart Project"
[imgur]: https://imgur.com/ "Imgur"
[jbullet]: http://jbullet.advel.cz "JBullet"
[jfrog]: https://www.jfrog.com "JFrog"
[jme]: https://jmonkeyengine.org  "jMonkeyEngine Project"
[latest]: https://github.com/stephengold/Libbulletjme/releases/latest "latest release"
[libbulletjme]: https://github.com/stephengold/Libbulletjme "Libbulletjme Project"
[license]: https://github.com/stephengold/Libbulletjme/blob/master/LICENSE "Libbulletjme license"
[llvm]: https://www.llvm.org "LLVM Compiler"
[log]: https://github.com/stephengold/Libbulletjme/blob/master/release-notes.md "release log"
[markdown]: https://daringfireball.net/projects/markdown "Markdown Project"
[minie]: https://github.com/stephengold/Minie "Minie Project"
[mint]: https://linuxmint.com "Linux Mint Project"
[netbeans]: https://netbeans.org "NetBeans Project"
[travis]: https://travis-ci.org "Travis CI"
[vhacd]: https://github.com/kmammou/v-hacd "V-HACD Library"
[v-hacd-java-bindings]: https://github.com/riccardobl/v-hacd-java-bindings "Riccardo's V-hacd-java-bindings Project"


<a name="history"/>

## History

The evolution of the project is chronicled in [its release log][log].

The C++ glue code for Bullet was originally copied from `jme3-bullet-native`,
a library of [jMonkeyEngine][jme].
The soft-body portion was added in 2018,
and is based on the work of Jules (aka "dokthar").

The Java code is based partly jMonkeyEngine,
partly on [Riccardo's V-hacd-java-bindings][v-hacd-java-bindings],
and partly on [Minie].
Minie is, in turn, based on `jme3-bullet`, another jMonkeyEngine library.

[Jump to table of contents](#toc)

<a name="acks"/>

## Acknowledgments

The Libbulletjme Project is based on open-source software:

  + the [Bullet] physics simulation kit
  + the [jMonkeyEngine][jme] game engine
  + [Dokthar's fork of jMonkeyEngine](https://github.com/dokthar/jmonkeyengine)
  + [Khaled Mamou's V-HACD Library][vhacd] for approximate convex decomposition
  + Riccardo's [V-hacd-java-bindings]

This project also made use of the following software tools:

    + the [FindBugs] source-code analyzer
    + the [GNU Compiler Collection][gcc]
    + the [Git] revision-control system and GitK commit viewer
    + the [Firefox] and [Google Chrome][chrome] web browsers
    + the [Gradle] build tool
    + the Java compiler, standard doclet, and runtime environment
    + [jMonkeyEngine][jme] and the jME3 Software Development Kit
    + the [Linux Mint][mint] operating system
    + the [LLVM Compiler Infrastructure][llvm]
    + the [Markdown] document-conversion tool
    + Microsoft Windows and Visual Studio
    + the [NetBeans] integrated development environment

I am grateful to Riccardo Balbo (aka "riccardo") for bringing
V-HACD to my attention.

I am grateful to [Github], [JFrog], [AppVeyor], [Travis], and [Imgur]
for providing free hosting for this project
and many other open-source projects.

I'm also grateful to my dear Holly, for keeping me sane.

If I've misattributed anything or left anyone out, please let me know so I can
correct the situation: sgold@sonic.net

[Jump to table of contents](#toc)
