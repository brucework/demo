
struct pyopencv_AKAZE_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AKAZE_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AKAZE",
    sizeof(pyopencv_AKAZE_t),
};

static void pyopencv_AKAZE_dealloc(PyObject* self)
{
    ((pyopencv_AKAZE_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AKAZE>& r)
{
    pyopencv_AKAZE_t *m = PyObject_NEW(pyopencv_AKAZE_t, &pyopencv_AKAZE_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AKAZE>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AKAZE_Type))
    {
        failmsg("Expected cv::AKAZE for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AKAZE_t*)src)->v.dynamicCast<cv::AKAZE>();
    return true;
}


struct pyopencv_AffineTransformer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AffineTransformer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AffineTransformer",
    sizeof(pyopencv_AffineTransformer_t),
};

static void pyopencv_AffineTransformer_dealloc(PyObject* self)
{
    ((pyopencv_AffineTransformer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AffineTransformer>& r)
{
    pyopencv_AffineTransformer_t *m = PyObject_NEW(pyopencv_AffineTransformer_t, &pyopencv_AffineTransformer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AffineTransformer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AffineTransformer_Type))
    {
        failmsg("Expected cv::AffineTransformer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AffineTransformer_t*)src)->v.dynamicCast<cv::AffineTransformer>();
    return true;
}


struct pyopencv_AgastFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AgastFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AgastFeatureDetector",
    sizeof(pyopencv_AgastFeatureDetector_t),
};

static void pyopencv_AgastFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_AgastFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AgastFeatureDetector>& r)
{
    pyopencv_AgastFeatureDetector_t *m = PyObject_NEW(pyopencv_AgastFeatureDetector_t, &pyopencv_AgastFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AgastFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AgastFeatureDetector_Type))
    {
        failmsg("Expected cv::AgastFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AgastFeatureDetector_t*)src)->v.dynamicCast<cv::AgastFeatureDetector>();
    return true;
}


struct pyopencv_Algorithm_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Algorithm_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Algorithm",
    sizeof(pyopencv_Algorithm_t),
};

static void pyopencv_Algorithm_dealloc(PyObject* self)
{
    ((pyopencv_Algorithm_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Algorithm>& r)
{
    pyopencv_Algorithm_t *m = PyObject_NEW(pyopencv_Algorithm_t, &pyopencv_Algorithm_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Algorithm>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Algorithm_Type))
    {
        failmsg("Expected cv::Algorithm for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Algorithm_t*)src)->v.dynamicCast<cv::Algorithm>();
    return true;
}


struct pyopencv_AlignExposures_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AlignExposures_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AlignExposures",
    sizeof(pyopencv_AlignExposures_t),
};

static void pyopencv_AlignExposures_dealloc(PyObject* self)
{
    ((pyopencv_AlignExposures_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AlignExposures>& r)
{
    pyopencv_AlignExposures_t *m = PyObject_NEW(pyopencv_AlignExposures_t, &pyopencv_AlignExposures_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AlignExposures>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AlignExposures_Type))
    {
        failmsg("Expected cv::AlignExposures for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AlignExposures_t*)src)->v.dynamicCast<cv::AlignExposures>();
    return true;
}


struct pyopencv_AlignMTB_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AlignMTB_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AlignMTB",
    sizeof(pyopencv_AlignMTB_t),
};

static void pyopencv_AlignMTB_dealloc(PyObject* self)
{
    ((pyopencv_AlignMTB_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AlignMTB>& r)
{
    pyopencv_AlignMTB_t *m = PyObject_NEW(pyopencv_AlignMTB_t, &pyopencv_AlignMTB_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AlignMTB>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AlignMTB_Type))
    {
        failmsg("Expected cv::AlignMTB for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AlignMTB_t*)src)->v.dynamicCast<cv::AlignMTB>();
    return true;
}


struct pyopencv_BFMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BFMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BFMatcher",
    sizeof(pyopencv_BFMatcher_t),
};

static void pyopencv_BFMatcher_dealloc(PyObject* self)
{
    ((pyopencv_BFMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BFMatcher>& r)
{
    pyopencv_BFMatcher_t *m = PyObject_NEW(pyopencv_BFMatcher_t, &pyopencv_BFMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BFMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BFMatcher_Type))
    {
        failmsg("Expected cv::BFMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BFMatcher_t*)src)->v.dynamicCast<cv::BFMatcher>();
    return true;
}


struct pyopencv_BOWImgDescriptorExtractor_t
{
    PyObject_HEAD
    Ptr<cv::BOWImgDescriptorExtractor> v;
};

static PyTypeObject pyopencv_BOWImgDescriptorExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BOWImgDescriptorExtractor",
    sizeof(pyopencv_BOWImgDescriptorExtractor_t),
};

static void pyopencv_BOWImgDescriptorExtractor_dealloc(PyObject* self)
{
    ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BOWImgDescriptorExtractor>& r)
{
    pyopencv_BOWImgDescriptorExtractor_t *m = PyObject_NEW(pyopencv_BOWImgDescriptorExtractor_t, &pyopencv_BOWImgDescriptorExtractor_Type);
    new (&(m->v)) Ptr<cv::BOWImgDescriptorExtractor>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BOWImgDescriptorExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BOWImgDescriptorExtractor_Type))
    {
        failmsg("Expected cv::BOWImgDescriptorExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BOWImgDescriptorExtractor_t*)src)->v.dynamicCast<cv::BOWImgDescriptorExtractor>();
    return true;
}


struct pyopencv_BOWKMeansTrainer_t
{
    PyObject_HEAD
    Ptr<cv::BOWKMeansTrainer> v;
};

static PyTypeObject pyopencv_BOWKMeansTrainer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BOWKMeansTrainer",
    sizeof(pyopencv_BOWKMeansTrainer_t),
};

static void pyopencv_BOWKMeansTrainer_dealloc(PyObject* self)
{
    ((pyopencv_BOWKMeansTrainer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BOWKMeansTrainer>& r)
{
    pyopencv_BOWKMeansTrainer_t *m = PyObject_NEW(pyopencv_BOWKMeansTrainer_t, &pyopencv_BOWKMeansTrainer_Type);
    new (&(m->v)) Ptr<cv::BOWKMeansTrainer>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BOWKMeansTrainer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BOWKMeansTrainer_Type))
    {
        failmsg("Expected cv::BOWKMeansTrainer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BOWKMeansTrainer_t*)src)->v.dynamicCast<cv::BOWKMeansTrainer>();
    return true;
}


struct pyopencv_BOWTrainer_t
{
    PyObject_HEAD
    Ptr<cv::BOWTrainer> v;
};

static PyTypeObject pyopencv_BOWTrainer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BOWTrainer",
    sizeof(pyopencv_BOWTrainer_t),
};

static void pyopencv_BOWTrainer_dealloc(PyObject* self)
{
    ((pyopencv_BOWTrainer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BOWTrainer>& r)
{
    pyopencv_BOWTrainer_t *m = PyObject_NEW(pyopencv_BOWTrainer_t, &pyopencv_BOWTrainer_Type);
    new (&(m->v)) Ptr<cv::BOWTrainer>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BOWTrainer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BOWTrainer_Type))
    {
        failmsg("Expected cv::BOWTrainer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BOWTrainer_t*)src)->v.dynamicCast<cv::BOWTrainer>();
    return true;
}


struct pyopencv_BRISK_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BRISK_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BRISK",
    sizeof(pyopencv_BRISK_t),
};

static void pyopencv_BRISK_dealloc(PyObject* self)
{
    ((pyopencv_BRISK_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BRISK>& r)
{
    pyopencv_BRISK_t *m = PyObject_NEW(pyopencv_BRISK_t, &pyopencv_BRISK_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BRISK>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BRISK_Type))
    {
        failmsg("Expected cv::BRISK for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BRISK_t*)src)->v.dynamicCast<cv::BRISK>();
    return true;
}


struct pyopencv_BackgroundSubtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractor",
    sizeof(pyopencv_BackgroundSubtractor_t),
};

static void pyopencv_BackgroundSubtractor_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractor>& r)
{
    pyopencv_BackgroundSubtractor_t *m = PyObject_NEW(pyopencv_BackgroundSubtractor_t, &pyopencv_BackgroundSubtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractor_Type))
    {
        failmsg("Expected cv::BackgroundSubtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractor_t*)src)->v.dynamicCast<cv::BackgroundSubtractor>();
    return true;
}


struct pyopencv_BackgroundSubtractorKNN_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorKNN_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorKNN",
    sizeof(pyopencv_BackgroundSubtractorKNN_t),
};

static void pyopencv_BackgroundSubtractorKNN_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorKNN_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorKNN>& r)
{
    pyopencv_BackgroundSubtractorKNN_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorKNN_t, &pyopencv_BackgroundSubtractorKNN_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorKNN>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorKNN_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorKNN for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorKNN_t*)src)->v.dynamicCast<cv::BackgroundSubtractorKNN>();
    return true;
}


struct pyopencv_BackgroundSubtractorMOG2_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorMOG2_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorMOG2",
    sizeof(pyopencv_BackgroundSubtractorMOG2_t),
};

static void pyopencv_BackgroundSubtractorMOG2_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorMOG2>& r)
{
    pyopencv_BackgroundSubtractorMOG2_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorMOG2_t, &pyopencv_BackgroundSubtractorMOG2_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorMOG2>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorMOG2_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorMOG2 for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorMOG2_t*)src)->v.dynamicCast<cv::BackgroundSubtractorMOG2>();
    return true;
}


struct pyopencv_BaseCascadeClassifier_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BaseCascadeClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BaseCascadeClassifier",
    sizeof(pyopencv_BaseCascadeClassifier_t),
};

static void pyopencv_BaseCascadeClassifier_dealloc(PyObject* self)
{
    ((pyopencv_BaseCascadeClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BaseCascadeClassifier>& r)
{
    pyopencv_BaseCascadeClassifier_t *m = PyObject_NEW(pyopencv_BaseCascadeClassifier_t, &pyopencv_BaseCascadeClassifier_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BaseCascadeClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BaseCascadeClassifier_Type))
    {
        failmsg("Expected cv::BaseCascadeClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BaseCascadeClassifier_t*)src)->v.dynamicCast<cv::BaseCascadeClassifier>();
    return true;
}


struct pyopencv_CLAHE_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CLAHE_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CLAHE",
    sizeof(pyopencv_CLAHE_t),
};

static void pyopencv_CLAHE_dealloc(PyObject* self)
{
    ((pyopencv_CLAHE_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CLAHE>& r)
{
    pyopencv_CLAHE_t *m = PyObject_NEW(pyopencv_CLAHE_t, &pyopencv_CLAHE_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CLAHE>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CLAHE_Type))
    {
        failmsg("Expected cv::CLAHE for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CLAHE_t*)src)->v.dynamicCast<cv::CLAHE>();
    return true;
}


struct pyopencv_CalibrateCRF_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateCRF_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateCRF",
    sizeof(pyopencv_CalibrateCRF_t),
};

static void pyopencv_CalibrateCRF_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateCRF_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateCRF>& r)
{
    pyopencv_CalibrateCRF_t *m = PyObject_NEW(pyopencv_CalibrateCRF_t, &pyopencv_CalibrateCRF_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateCRF>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateCRF_Type))
    {
        failmsg("Expected cv::CalibrateCRF for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateCRF_t*)src)->v.dynamicCast<cv::CalibrateCRF>();
    return true;
}


struct pyopencv_CalibrateDebevec_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateDebevec_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateDebevec",
    sizeof(pyopencv_CalibrateDebevec_t),
};

static void pyopencv_CalibrateDebevec_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateDebevec_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateDebevec>& r)
{
    pyopencv_CalibrateDebevec_t *m = PyObject_NEW(pyopencv_CalibrateDebevec_t, &pyopencv_CalibrateDebevec_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateDebevec>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateDebevec_Type))
    {
        failmsg("Expected cv::CalibrateDebevec for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateDebevec_t*)src)->v.dynamicCast<cv::CalibrateDebevec>();
    return true;
}


struct pyopencv_CalibrateRobertson_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateRobertson_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateRobertson",
    sizeof(pyopencv_CalibrateRobertson_t),
};

static void pyopencv_CalibrateRobertson_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateRobertson_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateRobertson>& r)
{
    pyopencv_CalibrateRobertson_t *m = PyObject_NEW(pyopencv_CalibrateRobertson_t, &pyopencv_CalibrateRobertson_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateRobertson>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateRobertson_Type))
    {
        failmsg("Expected cv::CalibrateRobertson for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateRobertson_t*)src)->v.dynamicCast<cv::CalibrateRobertson>();
    return true;
}


struct pyopencv_CascadeClassifier_t
{
    PyObject_HEAD
    Ptr<cv::CascadeClassifier> v;
};

static PyTypeObject pyopencv_CascadeClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CascadeClassifier",
    sizeof(pyopencv_CascadeClassifier_t),
};

static void pyopencv_CascadeClassifier_dealloc(PyObject* self)
{
    ((pyopencv_CascadeClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CascadeClassifier>& r)
{
    pyopencv_CascadeClassifier_t *m = PyObject_NEW(pyopencv_CascadeClassifier_t, &pyopencv_CascadeClassifier_Type);
    new (&(m->v)) Ptr<cv::CascadeClassifier>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CascadeClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CascadeClassifier_Type))
    {
        failmsg("Expected cv::CascadeClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CascadeClassifier_t*)src)->v.dynamicCast<cv::CascadeClassifier>();
    return true;
}


struct pyopencv_ChiHistogramCostExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ChiHistogramCostExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ChiHistogramCostExtractor",
    sizeof(pyopencv_ChiHistogramCostExtractor_t),
};

static void pyopencv_ChiHistogramCostExtractor_dealloc(PyObject* self)
{
    ((pyopencv_ChiHistogramCostExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ChiHistogramCostExtractor>& r)
{
    pyopencv_ChiHistogramCostExtractor_t *m = PyObject_NEW(pyopencv_ChiHistogramCostExtractor_t, &pyopencv_ChiHistogramCostExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ChiHistogramCostExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ChiHistogramCostExtractor_Type))
    {
        failmsg("Expected cv::ChiHistogramCostExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ChiHistogramCostExtractor_t*)src)->v.dynamicCast<cv::ChiHistogramCostExtractor>();
    return true;
}


struct pyopencv_CirclesGridFinderParameters_t
{
    PyObject_HEAD
    cv::CirclesGridFinderParameters v;
};

static PyTypeObject pyopencv_CirclesGridFinderParameters_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CirclesGridFinderParameters",
    sizeof(pyopencv_CirclesGridFinderParameters_t),
};

static void pyopencv_CirclesGridFinderParameters_dealloc(PyObject* self)
{
    ((pyopencv_CirclesGridFinderParameters_t*)self)->v.cv::CirclesGridFinderParameters::~CirclesGridFinderParameters();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::CirclesGridFinderParameters& r)
{
    pyopencv_CirclesGridFinderParameters_t *m = PyObject_NEW(pyopencv_CirclesGridFinderParameters_t, &pyopencv_CirclesGridFinderParameters_Type);
    new (&m->v) cv::CirclesGridFinderParameters(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::CirclesGridFinderParameters& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CirclesGridFinderParameters_Type))
    {
        failmsg("Expected cv::CirclesGridFinderParameters for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CirclesGridFinderParameters_t*)src)->v;
    return true;
}

struct pyopencv_DMatch_t
{
    PyObject_HEAD
    cv::DMatch v;
};

static PyTypeObject pyopencv_DMatch_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DMatch",
    sizeof(pyopencv_DMatch_t),
};

static void pyopencv_DMatch_dealloc(PyObject* self)
{
    ((pyopencv_DMatch_t*)self)->v.cv::DMatch::~DMatch();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::DMatch& r)
{
    pyopencv_DMatch_t *m = PyObject_NEW(pyopencv_DMatch_t, &pyopencv_DMatch_Type);
    new (&m->v) cv::DMatch(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::DMatch& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DMatch_Type))
    {
        failmsg("Expected cv::DMatch for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DMatch_t*)src)->v;
    return true;
}

struct pyopencv_DenseOpticalFlow_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DenseOpticalFlow_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DenseOpticalFlow",
    sizeof(pyopencv_DenseOpticalFlow_t),
};

static void pyopencv_DenseOpticalFlow_dealloc(PyObject* self)
{
    ((pyopencv_DenseOpticalFlow_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DenseOpticalFlow>& r)
{
    pyopencv_DenseOpticalFlow_t *m = PyObject_NEW(pyopencv_DenseOpticalFlow_t, &pyopencv_DenseOpticalFlow_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DenseOpticalFlow>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DenseOpticalFlow_Type))
    {
        failmsg("Expected cv::DenseOpticalFlow for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DenseOpticalFlow_t*)src)->v.dynamicCast<cv::DenseOpticalFlow>();
    return true;
}


struct pyopencv_DescriptorMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DescriptorMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DescriptorMatcher",
    sizeof(pyopencv_DescriptorMatcher_t),
};

static void pyopencv_DescriptorMatcher_dealloc(PyObject* self)
{
    ((pyopencv_DescriptorMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DescriptorMatcher>& r)
{
    pyopencv_DescriptorMatcher_t *m = PyObject_NEW(pyopencv_DescriptorMatcher_t, &pyopencv_DescriptorMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DescriptorMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DescriptorMatcher_Type))
    {
        failmsg("Expected cv::DescriptorMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DescriptorMatcher_t*)src)->v.dynamicCast<cv::DescriptorMatcher>();
    return true;
}


struct pyopencv_DualTVL1OpticalFlow_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DualTVL1OpticalFlow_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DualTVL1OpticalFlow",
    sizeof(pyopencv_DualTVL1OpticalFlow_t),
};

static void pyopencv_DualTVL1OpticalFlow_dealloc(PyObject* self)
{
    ((pyopencv_DualTVL1OpticalFlow_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DualTVL1OpticalFlow>& r)
{
    pyopencv_DualTVL1OpticalFlow_t *m = PyObject_NEW(pyopencv_DualTVL1OpticalFlow_t, &pyopencv_DualTVL1OpticalFlow_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DualTVL1OpticalFlow>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DualTVL1OpticalFlow_Type))
    {
        failmsg("Expected cv::DualTVL1OpticalFlow for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DualTVL1OpticalFlow_t*)src)->v.dynamicCast<cv::DualTVL1OpticalFlow>();
    return true;
}


struct pyopencv_EMDHistogramCostExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_EMDHistogramCostExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".EMDHistogramCostExtractor",
    sizeof(pyopencv_EMDHistogramCostExtractor_t),
};

static void pyopencv_EMDHistogramCostExtractor_dealloc(PyObject* self)
{
    ((pyopencv_EMDHistogramCostExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::EMDHistogramCostExtractor>& r)
{
    pyopencv_EMDHistogramCostExtractor_t *m = PyObject_NEW(pyopencv_EMDHistogramCostExtractor_t, &pyopencv_EMDHistogramCostExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::EMDHistogramCostExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_EMDHistogramCostExtractor_Type))
    {
        failmsg("Expected cv::EMDHistogramCostExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_EMDHistogramCostExtractor_t*)src)->v.dynamicCast<cv::EMDHistogramCostExtractor>();
    return true;
}


struct pyopencv_EMDL1HistogramCostExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_EMDL1HistogramCostExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".EMDL1HistogramCostExtractor",
    sizeof(pyopencv_EMDL1HistogramCostExtractor_t),
};

static void pyopencv_EMDL1HistogramCostExtractor_dealloc(PyObject* self)
{
    ((pyopencv_EMDL1HistogramCostExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::EMDL1HistogramCostExtractor>& r)
{
    pyopencv_EMDL1HistogramCostExtractor_t *m = PyObject_NEW(pyopencv_EMDL1HistogramCostExtractor_t, &pyopencv_EMDL1HistogramCostExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::EMDL1HistogramCostExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_EMDL1HistogramCostExtractor_Type))
    {
        failmsg("Expected cv::EMDL1HistogramCostExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_EMDL1HistogramCostExtractor_t*)src)->v.dynamicCast<cv::EMDL1HistogramCostExtractor>();
    return true;
}


struct pyopencv_FarnebackOpticalFlow_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FarnebackOpticalFlow_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FarnebackOpticalFlow",
    sizeof(pyopencv_FarnebackOpticalFlow_t),
};

static void pyopencv_FarnebackOpticalFlow_dealloc(PyObject* self)
{
    ((pyopencv_FarnebackOpticalFlow_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FarnebackOpticalFlow>& r)
{
    pyopencv_FarnebackOpticalFlow_t *m = PyObject_NEW(pyopencv_FarnebackOpticalFlow_t, &pyopencv_FarnebackOpticalFlow_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FarnebackOpticalFlow>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FarnebackOpticalFlow_Type))
    {
        failmsg("Expected cv::FarnebackOpticalFlow for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FarnebackOpticalFlow_t*)src)->v.dynamicCast<cv::FarnebackOpticalFlow>();
    return true;
}


struct pyopencv_FastFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FastFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FastFeatureDetector",
    sizeof(pyopencv_FastFeatureDetector_t),
};

static void pyopencv_FastFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_FastFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FastFeatureDetector>& r)
{
    pyopencv_FastFeatureDetector_t *m = PyObject_NEW(pyopencv_FastFeatureDetector_t, &pyopencv_FastFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FastFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FastFeatureDetector_Type))
    {
        failmsg("Expected cv::FastFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FastFeatureDetector_t*)src)->v.dynamicCast<cv::FastFeatureDetector>();
    return true;
}


struct pyopencv_Feature2D_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Feature2D_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Feature2D",
    sizeof(pyopencv_Feature2D_t),
};

static void pyopencv_Feature2D_dealloc(PyObject* self)
{
    ((pyopencv_Feature2D_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Feature2D>& r)
{
    pyopencv_Feature2D_t *m = PyObject_NEW(pyopencv_Feature2D_t, &pyopencv_Feature2D_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Feature2D>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Feature2D_Type))
    {
        failmsg("Expected cv::Feature2D for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Feature2D_t*)src)->v.dynamicCast<cv::Feature2D>();
    return true;
}


struct pyopencv_FileNode_t
{
    PyObject_HEAD
    cv::FileNode v;
};

static PyTypeObject pyopencv_FileNode_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FileNode",
    sizeof(pyopencv_FileNode_t),
};

static void pyopencv_FileNode_dealloc(PyObject* self)
{
    ((pyopencv_FileNode_t*)self)->v.cv::FileNode::~FileNode();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::FileNode& r)
{
    pyopencv_FileNode_t *m = PyObject_NEW(pyopencv_FileNode_t, &pyopencv_FileNode_Type);
    new (&m->v) cv::FileNode(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::FileNode& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FileNode_Type))
    {
        failmsg("Expected cv::FileNode for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FileNode_t*)src)->v;
    return true;
}

struct pyopencv_FileStorage_t
{
    PyObject_HEAD
    Ptr<cv::FileStorage> v;
};

static PyTypeObject pyopencv_FileStorage_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FileStorage",
    sizeof(pyopencv_FileStorage_t),
};

static void pyopencv_FileStorage_dealloc(PyObject* self)
{
    ((pyopencv_FileStorage_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FileStorage>& r)
{
    pyopencv_FileStorage_t *m = PyObject_NEW(pyopencv_FileStorage_t, &pyopencv_FileStorage_Type);
    new (&(m->v)) Ptr<cv::FileStorage>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FileStorage>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FileStorage_Type))
    {
        failmsg("Expected cv::FileStorage for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FileStorage_t*)src)->v.dynamicCast<cv::FileStorage>();
    return true;
}


struct pyopencv_FlannBasedMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FlannBasedMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FlannBasedMatcher",
    sizeof(pyopencv_FlannBasedMatcher_t),
};

static void pyopencv_FlannBasedMatcher_dealloc(PyObject* self)
{
    ((pyopencv_FlannBasedMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FlannBasedMatcher>& r)
{
    pyopencv_FlannBasedMatcher_t *m = PyObject_NEW(pyopencv_FlannBasedMatcher_t, &pyopencv_FlannBasedMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FlannBasedMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FlannBasedMatcher_Type))
    {
        failmsg("Expected cv::FlannBasedMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FlannBasedMatcher_t*)src)->v.dynamicCast<cv::FlannBasedMatcher>();
    return true;
}


struct pyopencv_GFTTDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_GFTTDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".GFTTDetector",
    sizeof(pyopencv_GFTTDetector_t),
};

static void pyopencv_GFTTDetector_dealloc(PyObject* self)
{
    ((pyopencv_GFTTDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::GFTTDetector>& r)
{
    pyopencv_GFTTDetector_t *m = PyObject_NEW(pyopencv_GFTTDetector_t, &pyopencv_GFTTDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::GFTTDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_GFTTDetector_Type))
    {
        failmsg("Expected cv::GFTTDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_GFTTDetector_t*)src)->v.dynamicCast<cv::GFTTDetector>();
    return true;
}


struct pyopencv_HOGDescriptor_t
{
    PyObject_HEAD
    Ptr<cv::HOGDescriptor> v;
};

static PyTypeObject pyopencv_HOGDescriptor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".HOGDescriptor",
    sizeof(pyopencv_HOGDescriptor_t),
};

static void pyopencv_HOGDescriptor_dealloc(PyObject* self)
{
    ((pyopencv_HOGDescriptor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::HOGDescriptor>& r)
{
    pyopencv_HOGDescriptor_t *m = PyObject_NEW(pyopencv_HOGDescriptor_t, &pyopencv_HOGDescriptor_Type);
    new (&(m->v)) Ptr<cv::HOGDescriptor>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::HOGDescriptor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_HOGDescriptor_Type))
    {
        failmsg("Expected cv::HOGDescriptor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_HOGDescriptor_t*)src)->v.dynamicCast<cv::HOGDescriptor>();
    return true;
}


struct pyopencv_HausdorffDistanceExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_HausdorffDistanceExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".HausdorffDistanceExtractor",
    sizeof(pyopencv_HausdorffDistanceExtractor_t),
};

static void pyopencv_HausdorffDistanceExtractor_dealloc(PyObject* self)
{
    ((pyopencv_HausdorffDistanceExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::HausdorffDistanceExtractor>& r)
{
    pyopencv_HausdorffDistanceExtractor_t *m = PyObject_NEW(pyopencv_HausdorffDistanceExtractor_t, &pyopencv_HausdorffDistanceExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::HausdorffDistanceExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_HausdorffDistanceExtractor_Type))
    {
        failmsg("Expected cv::HausdorffDistanceExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_HausdorffDistanceExtractor_t*)src)->v.dynamicCast<cv::HausdorffDistanceExtractor>();
    return true;
}


struct pyopencv_HistogramCostExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_HistogramCostExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".HistogramCostExtractor",
    sizeof(pyopencv_HistogramCostExtractor_t),
};

static void pyopencv_HistogramCostExtractor_dealloc(PyObject* self)
{
    ((pyopencv_HistogramCostExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::HistogramCostExtractor>& r)
{
    pyopencv_HistogramCostExtractor_t *m = PyObject_NEW(pyopencv_HistogramCostExtractor_t, &pyopencv_HistogramCostExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::HistogramCostExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_HistogramCostExtractor_Type))
    {
        failmsg("Expected cv::HistogramCostExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_HistogramCostExtractor_t*)src)->v.dynamicCast<cv::HistogramCostExtractor>();
    return true;
}


struct pyopencv_KAZE_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_KAZE_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KAZE",
    sizeof(pyopencv_KAZE_t),
};

static void pyopencv_KAZE_dealloc(PyObject* self)
{
    ((pyopencv_KAZE_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::KAZE>& r)
{
    pyopencv_KAZE_t *m = PyObject_NEW(pyopencv_KAZE_t, &pyopencv_KAZE_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::KAZE>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KAZE_Type))
    {
        failmsg("Expected cv::KAZE for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KAZE_t*)src)->v.dynamicCast<cv::KAZE>();
    return true;
}


struct pyopencv_KalmanFilter_t
{
    PyObject_HEAD
    Ptr<cv::KalmanFilter> v;
};

static PyTypeObject pyopencv_KalmanFilter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KalmanFilter",
    sizeof(pyopencv_KalmanFilter_t),
};

static void pyopencv_KalmanFilter_dealloc(PyObject* self)
{
    ((pyopencv_KalmanFilter_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::KalmanFilter>& r)
{
    pyopencv_KalmanFilter_t *m = PyObject_NEW(pyopencv_KalmanFilter_t, &pyopencv_KalmanFilter_Type);
    new (&(m->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::KalmanFilter>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KalmanFilter_Type))
    {
        failmsg("Expected cv::KalmanFilter for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KalmanFilter_t*)src)->v.dynamicCast<cv::KalmanFilter>();
    return true;
}


struct pyopencv_KeyPoint_t
{
    PyObject_HEAD
    cv::KeyPoint v;
};

static PyTypeObject pyopencv_KeyPoint_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KeyPoint",
    sizeof(pyopencv_KeyPoint_t),
};

static void pyopencv_KeyPoint_dealloc(PyObject* self)
{
    ((pyopencv_KeyPoint_t*)self)->v.cv::KeyPoint::~KeyPoint();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::KeyPoint& r)
{
    pyopencv_KeyPoint_t *m = PyObject_NEW(pyopencv_KeyPoint_t, &pyopencv_KeyPoint_Type);
    new (&m->v) cv::KeyPoint(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::KeyPoint& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KeyPoint_Type))
    {
        failmsg("Expected cv::KeyPoint for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KeyPoint_t*)src)->v;
    return true;
}

struct pyopencv_LineSegmentDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_LineSegmentDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".LineSegmentDetector",
    sizeof(pyopencv_LineSegmentDetector_t),
};

static void pyopencv_LineSegmentDetector_dealloc(PyObject* self)
{
    ((pyopencv_LineSegmentDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::LineSegmentDetector>& r)
{
    pyopencv_LineSegmentDetector_t *m = PyObject_NEW(pyopencv_LineSegmentDetector_t, &pyopencv_LineSegmentDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::LineSegmentDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_LineSegmentDetector_Type))
    {
        failmsg("Expected cv::LineSegmentDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_LineSegmentDetector_t*)src)->v.dynamicCast<cv::LineSegmentDetector>();
    return true;
}


struct pyopencv_MSER_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MSER_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MSER",
    sizeof(pyopencv_MSER_t),
};

static void pyopencv_MSER_dealloc(PyObject* self)
{
    ((pyopencv_MSER_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MSER>& r)
{
    pyopencv_MSER_t *m = PyObject_NEW(pyopencv_MSER_t, &pyopencv_MSER_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MSER>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MSER_Type))
    {
        failmsg("Expected cv::MSER for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MSER_t*)src)->v.dynamicCast<cv::MSER>();
    return true;
}


struct pyopencv_MergeDebevec_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeDebevec_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeDebevec",
    sizeof(pyopencv_MergeDebevec_t),
};

static void pyopencv_MergeDebevec_dealloc(PyObject* self)
{
    ((pyopencv_MergeDebevec_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeDebevec>& r)
{
    pyopencv_MergeDebevec_t *m = PyObject_NEW(pyopencv_MergeDebevec_t, &pyopencv_MergeDebevec_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeDebevec>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeDebevec_Type))
    {
        failmsg("Expected cv::MergeDebevec for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeDebevec_t*)src)->v.dynamicCast<cv::MergeDebevec>();
    return true;
}


struct pyopencv_MergeExposures_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeExposures_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeExposures",
    sizeof(pyopencv_MergeExposures_t),
};

static void pyopencv_MergeExposures_dealloc(PyObject* self)
{
    ((pyopencv_MergeExposures_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeExposures>& r)
{
    pyopencv_MergeExposures_t *m = PyObject_NEW(pyopencv_MergeExposures_t, &pyopencv_MergeExposures_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeExposures>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeExposures_Type))
    {
        failmsg("Expected cv::MergeExposures for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeExposures_t*)src)->v.dynamicCast<cv::MergeExposures>();
    return true;
}


struct pyopencv_MergeMertens_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeMertens_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeMertens",
    sizeof(pyopencv_MergeMertens_t),
};

static void pyopencv_MergeMertens_dealloc(PyObject* self)
{
    ((pyopencv_MergeMertens_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeMertens>& r)
{
    pyopencv_MergeMertens_t *m = PyObject_NEW(pyopencv_MergeMertens_t, &pyopencv_MergeMertens_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeMertens>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeMertens_Type))
    {
        failmsg("Expected cv::MergeMertens for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeMertens_t*)src)->v.dynamicCast<cv::MergeMertens>();
    return true;
}


struct pyopencv_MergeRobertson_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeRobertson_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeRobertson",
    sizeof(pyopencv_MergeRobertson_t),
};

static void pyopencv_MergeRobertson_dealloc(PyObject* self)
{
    ((pyopencv_MergeRobertson_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeRobertson>& r)
{
    pyopencv_MergeRobertson_t *m = PyObject_NEW(pyopencv_MergeRobertson_t, &pyopencv_MergeRobertson_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeRobertson>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeRobertson_Type))
    {
        failmsg("Expected cv::MergeRobertson for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeRobertson_t*)src)->v.dynamicCast<cv::MergeRobertson>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name);

struct pyopencv_NormHistogramCostExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_NormHistogramCostExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".NormHistogramCostExtractor",
    sizeof(pyopencv_NormHistogramCostExtractor_t),
};

static void pyopencv_NormHistogramCostExtractor_dealloc(PyObject* self)
{
    ((pyopencv_NormHistogramCostExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::NormHistogramCostExtractor>& r)
{
    pyopencv_NormHistogramCostExtractor_t *m = PyObject_NEW(pyopencv_NormHistogramCostExtractor_t, &pyopencv_NormHistogramCostExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::NormHistogramCostExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_NormHistogramCostExtractor_Type))
    {
        failmsg("Expected cv::NormHistogramCostExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_NormHistogramCostExtractor_t*)src)->v.dynamicCast<cv::NormHistogramCostExtractor>();
    return true;
}


struct pyopencv_ORB_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ORB_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ORB",
    sizeof(pyopencv_ORB_t),
};

static void pyopencv_ORB_dealloc(PyObject* self)
{
    ((pyopencv_ORB_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ORB>& r)
{
    pyopencv_ORB_t *m = PyObject_NEW(pyopencv_ORB_t, &pyopencv_ORB_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ORB>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ORB_Type))
    {
        failmsg("Expected cv::ORB for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ORB_t*)src)->v.dynamicCast<cv::ORB>();
    return true;
}


struct pyopencv_ShapeContextDistanceExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ShapeContextDistanceExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ShapeContextDistanceExtractor",
    sizeof(pyopencv_ShapeContextDistanceExtractor_t),
};

static void pyopencv_ShapeContextDistanceExtractor_dealloc(PyObject* self)
{
    ((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ShapeContextDistanceExtractor>& r)
{
    pyopencv_ShapeContextDistanceExtractor_t *m = PyObject_NEW(pyopencv_ShapeContextDistanceExtractor_t, &pyopencv_ShapeContextDistanceExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ShapeContextDistanceExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ShapeContextDistanceExtractor_Type))
    {
        failmsg("Expected cv::ShapeContextDistanceExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ShapeContextDistanceExtractor_t*)src)->v.dynamicCast<cv::ShapeContextDistanceExtractor>();
    return true;
}


struct pyopencv_ShapeDistanceExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ShapeDistanceExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ShapeDistanceExtractor",
    sizeof(pyopencv_ShapeDistanceExtractor_t),
};

static void pyopencv_ShapeDistanceExtractor_dealloc(PyObject* self)
{
    ((pyopencv_ShapeDistanceExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ShapeDistanceExtractor>& r)
{
    pyopencv_ShapeDistanceExtractor_t *m = PyObject_NEW(pyopencv_ShapeDistanceExtractor_t, &pyopencv_ShapeDistanceExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ShapeDistanceExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ShapeDistanceExtractor_Type))
    {
        failmsg("Expected cv::ShapeDistanceExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ShapeDistanceExtractor_t*)src)->v.dynamicCast<cv::ShapeDistanceExtractor>();
    return true;
}


struct pyopencv_ShapeTransformer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ShapeTransformer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ShapeTransformer",
    sizeof(pyopencv_ShapeTransformer_t),
};

static void pyopencv_ShapeTransformer_dealloc(PyObject* self)
{
    ((pyopencv_ShapeTransformer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ShapeTransformer>& r)
{
    pyopencv_ShapeTransformer_t *m = PyObject_NEW(pyopencv_ShapeTransformer_t, &pyopencv_ShapeTransformer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ShapeTransformer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ShapeTransformer_Type))
    {
        failmsg("Expected cv::ShapeTransformer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ShapeTransformer_t*)src)->v.dynamicCast<cv::ShapeTransformer>();
    return true;
}


struct pyopencv_SimpleBlobDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SimpleBlobDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SimpleBlobDetector",
    sizeof(pyopencv_SimpleBlobDetector_t),
};

static void pyopencv_SimpleBlobDetector_dealloc(PyObject* self)
{
    ((pyopencv_SimpleBlobDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SimpleBlobDetector>& r)
{
    pyopencv_SimpleBlobDetector_t *m = PyObject_NEW(pyopencv_SimpleBlobDetector_t, &pyopencv_SimpleBlobDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SimpleBlobDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SimpleBlobDetector_Type))
    {
        failmsg("Expected cv::SimpleBlobDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SimpleBlobDetector_t*)src)->v.dynamicCast<cv::SimpleBlobDetector>();
    return true;
}


struct pyopencv_SimpleBlobDetector_Params_t
{
    PyObject_HEAD
    cv::SimpleBlobDetector::Params v;
};

static PyTypeObject pyopencv_SimpleBlobDetector_Params_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SimpleBlobDetector_Params",
    sizeof(pyopencv_SimpleBlobDetector_Params_t),
};

static void pyopencv_SimpleBlobDetector_Params_dealloc(PyObject* self)
{
    ((pyopencv_SimpleBlobDetector_Params_t*)self)->v.cv::SimpleBlobDetector::Params::~Params();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::SimpleBlobDetector::Params& r)
{
    pyopencv_SimpleBlobDetector_Params_t *m = PyObject_NEW(pyopencv_SimpleBlobDetector_Params_t, &pyopencv_SimpleBlobDetector_Params_Type);
    new (&m->v) cv::SimpleBlobDetector::Params(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::SimpleBlobDetector::Params& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SimpleBlobDetector_Params_Type))
    {
        failmsg("Expected cv::SimpleBlobDetector::Params for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SimpleBlobDetector_Params_t*)src)->v;
    return true;
}

struct pyopencv_SparseOpticalFlow_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SparseOpticalFlow_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SparseOpticalFlow",
    sizeof(pyopencv_SparseOpticalFlow_t),
};

static void pyopencv_SparseOpticalFlow_dealloc(PyObject* self)
{
    ((pyopencv_SparseOpticalFlow_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SparseOpticalFlow>& r)
{
    pyopencv_SparseOpticalFlow_t *m = PyObject_NEW(pyopencv_SparseOpticalFlow_t, &pyopencv_SparseOpticalFlow_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SparseOpticalFlow>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SparseOpticalFlow_Type))
    {
        failmsg("Expected cv::SparseOpticalFlow for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SparseOpticalFlow_t*)src)->v.dynamicCast<cv::SparseOpticalFlow>();
    return true;
}


struct pyopencv_SparsePyrLKOpticalFlow_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SparsePyrLKOpticalFlow_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SparsePyrLKOpticalFlow",
    sizeof(pyopencv_SparsePyrLKOpticalFlow_t),
};

static void pyopencv_SparsePyrLKOpticalFlow_dealloc(PyObject* self)
{
    ((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SparsePyrLKOpticalFlow>& r)
{
    pyopencv_SparsePyrLKOpticalFlow_t *m = PyObject_NEW(pyopencv_SparsePyrLKOpticalFlow_t, &pyopencv_SparsePyrLKOpticalFlow_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SparsePyrLKOpticalFlow>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SparsePyrLKOpticalFlow_Type))
    {
        failmsg("Expected cv::SparsePyrLKOpticalFlow for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SparsePyrLKOpticalFlow_t*)src)->v.dynamicCast<cv::SparsePyrLKOpticalFlow>();
    return true;
}


struct pyopencv_StereoBM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoBM",
    sizeof(pyopencv_StereoBM_t),
};

static void pyopencv_StereoBM_dealloc(PyObject* self)
{
    ((pyopencv_StereoBM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoBM>& r)
{
    pyopencv_StereoBM_t *m = PyObject_NEW(pyopencv_StereoBM_t, &pyopencv_StereoBM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoBM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoBM_Type))
    {
        failmsg("Expected cv::StereoBM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoBM_t*)src)->v.dynamicCast<cv::StereoBM>();
    return true;
}


struct pyopencv_StereoMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoMatcher",
    sizeof(pyopencv_StereoMatcher_t),
};

static void pyopencv_StereoMatcher_dealloc(PyObject* self)
{
    ((pyopencv_StereoMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoMatcher>& r)
{
    pyopencv_StereoMatcher_t *m = PyObject_NEW(pyopencv_StereoMatcher_t, &pyopencv_StereoMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoMatcher_Type))
    {
        failmsg("Expected cv::StereoMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoMatcher_t*)src)->v.dynamicCast<cv::StereoMatcher>();
    return true;
}


struct pyopencv_StereoSGBM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoSGBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoSGBM",
    sizeof(pyopencv_StereoSGBM_t),
};

static void pyopencv_StereoSGBM_dealloc(PyObject* self)
{
    ((pyopencv_StereoSGBM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoSGBM>& r)
{
    pyopencv_StereoSGBM_t *m = PyObject_NEW(pyopencv_StereoSGBM_t, &pyopencv_StereoSGBM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoSGBM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoSGBM_Type))
    {
        failmsg("Expected cv::StereoSGBM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoSGBM_t*)src)->v.dynamicCast<cv::StereoSGBM>();
    return true;
}


struct pyopencv_Stitcher_t
{
    PyObject_HEAD
    Ptr<cv::Stitcher> v;
};

static PyTypeObject pyopencv_Stitcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Stitcher",
    sizeof(pyopencv_Stitcher_t),
};

static void pyopencv_Stitcher_dealloc(PyObject* self)
{
    ((pyopencv_Stitcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Stitcher>& r)
{
    pyopencv_Stitcher_t *m = PyObject_NEW(pyopencv_Stitcher_t, &pyopencv_Stitcher_Type);
    new (&(m->v)) Ptr<cv::Stitcher>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Stitcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Stitcher_Type))
    {
        failmsg("Expected cv::Stitcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Stitcher_t*)src)->v.dynamicCast<cv::Stitcher>();
    return true;
}


struct pyopencv_Subdiv2D_t
{
    PyObject_HEAD
    Ptr<cv::Subdiv2D> v;
};

static PyTypeObject pyopencv_Subdiv2D_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Subdiv2D",
    sizeof(pyopencv_Subdiv2D_t),
};

static void pyopencv_Subdiv2D_dealloc(PyObject* self)
{
    ((pyopencv_Subdiv2D_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Subdiv2D>& r)
{
    pyopencv_Subdiv2D_t *m = PyObject_NEW(pyopencv_Subdiv2D_t, &pyopencv_Subdiv2D_Type);
    new (&(m->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Subdiv2D>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Subdiv2D_Type))
    {
        failmsg("Expected cv::Subdiv2D for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Subdiv2D_t*)src)->v.dynamicCast<cv::Subdiv2D>();
    return true;
}


struct pyopencv_ThinPlateSplineShapeTransformer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ThinPlateSplineShapeTransformer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ThinPlateSplineShapeTransformer",
    sizeof(pyopencv_ThinPlateSplineShapeTransformer_t),
};

static void pyopencv_ThinPlateSplineShapeTransformer_dealloc(PyObject* self)
{
    ((pyopencv_ThinPlateSplineShapeTransformer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ThinPlateSplineShapeTransformer>& r)
{
    pyopencv_ThinPlateSplineShapeTransformer_t *m = PyObject_NEW(pyopencv_ThinPlateSplineShapeTransformer_t, &pyopencv_ThinPlateSplineShapeTransformer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ThinPlateSplineShapeTransformer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ThinPlateSplineShapeTransformer_Type))
    {
        failmsg("Expected cv::ThinPlateSplineShapeTransformer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ThinPlateSplineShapeTransformer_t*)src)->v.dynamicCast<cv::ThinPlateSplineShapeTransformer>();
    return true;
}


struct pyopencv_TickMeter_t
{
    PyObject_HEAD
    Ptr<cv::TickMeter> v;
};

static PyTypeObject pyopencv_TickMeter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TickMeter",
    sizeof(pyopencv_TickMeter_t),
};

static void pyopencv_TickMeter_dealloc(PyObject* self)
{
    ((pyopencv_TickMeter_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TickMeter>& r)
{
    pyopencv_TickMeter_t *m = PyObject_NEW(pyopencv_TickMeter_t, &pyopencv_TickMeter_Type);
    new (&(m->v)) Ptr<cv::TickMeter>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TickMeter>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TickMeter_Type))
    {
        failmsg("Expected cv::TickMeter for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TickMeter_t*)src)->v.dynamicCast<cv::TickMeter>();
    return true;
}


struct pyopencv_Tonemap_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Tonemap_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Tonemap",
    sizeof(pyopencv_Tonemap_t),
};

static void pyopencv_Tonemap_dealloc(PyObject* self)
{
    ((pyopencv_Tonemap_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Tonemap>& r)
{
    pyopencv_Tonemap_t *m = PyObject_NEW(pyopencv_Tonemap_t, &pyopencv_Tonemap_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Tonemap>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Tonemap_Type))
    {
        failmsg("Expected cv::Tonemap for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Tonemap_t*)src)->v.dynamicCast<cv::Tonemap>();
    return true;
}


struct pyopencv_TonemapDrago_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapDrago_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapDrago",
    sizeof(pyopencv_TonemapDrago_t),
};

static void pyopencv_TonemapDrago_dealloc(PyObject* self)
{
    ((pyopencv_TonemapDrago_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapDrago>& r)
{
    pyopencv_TonemapDrago_t *m = PyObject_NEW(pyopencv_TonemapDrago_t, &pyopencv_TonemapDrago_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapDrago>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapDrago_Type))
    {
        failmsg("Expected cv::TonemapDrago for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapDrago_t*)src)->v.dynamicCast<cv::TonemapDrago>();
    return true;
}


struct pyopencv_TonemapDurand_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapDurand_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapDurand",
    sizeof(pyopencv_TonemapDurand_t),
};

static void pyopencv_TonemapDurand_dealloc(PyObject* self)
{
    ((pyopencv_TonemapDurand_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapDurand>& r)
{
    pyopencv_TonemapDurand_t *m = PyObject_NEW(pyopencv_TonemapDurand_t, &pyopencv_TonemapDurand_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapDurand>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapDurand_Type))
    {
        failmsg("Expected cv::TonemapDurand for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapDurand_t*)src)->v.dynamicCast<cv::TonemapDurand>();
    return true;
}


struct pyopencv_TonemapMantiuk_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapMantiuk_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapMantiuk",
    sizeof(pyopencv_TonemapMantiuk_t),
};

static void pyopencv_TonemapMantiuk_dealloc(PyObject* self)
{
    ((pyopencv_TonemapMantiuk_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapMantiuk>& r)
{
    pyopencv_TonemapMantiuk_t *m = PyObject_NEW(pyopencv_TonemapMantiuk_t, &pyopencv_TonemapMantiuk_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapMantiuk>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapMantiuk_Type))
    {
        failmsg("Expected cv::TonemapMantiuk for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapMantiuk_t*)src)->v.dynamicCast<cv::TonemapMantiuk>();
    return true;
}


struct pyopencv_TonemapReinhard_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapReinhard_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapReinhard",
    sizeof(pyopencv_TonemapReinhard_t),
};

static void pyopencv_TonemapReinhard_dealloc(PyObject* self)
{
    ((pyopencv_TonemapReinhard_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapReinhard>& r)
{
    pyopencv_TonemapReinhard_t *m = PyObject_NEW(pyopencv_TonemapReinhard_t, &pyopencv_TonemapReinhard_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapReinhard>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapReinhard_Type))
    {
        failmsg("Expected cv::TonemapReinhard for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapReinhard_t*)src)->v.dynamicCast<cv::TonemapReinhard>();
    return true;
}


struct pyopencv_VideoCapture_t
{
    PyObject_HEAD
    Ptr<cv::VideoCapture> v;
};

static PyTypeObject pyopencv_VideoCapture_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".VideoCapture",
    sizeof(pyopencv_VideoCapture_t),
};

static void pyopencv_VideoCapture_dealloc(PyObject* self)
{
    ((pyopencv_VideoCapture_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::VideoCapture>& r)
{
    pyopencv_VideoCapture_t *m = PyObject_NEW(pyopencv_VideoCapture_t, &pyopencv_VideoCapture_Type);
    new (&(m->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::VideoCapture>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_VideoCapture_Type))
    {
        failmsg("Expected cv::VideoCapture for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_VideoCapture_t*)src)->v.dynamicCast<cv::VideoCapture>();
    return true;
}


struct pyopencv_VideoWriter_t
{
    PyObject_HEAD
    Ptr<cv::VideoWriter> v;
};

static PyTypeObject pyopencv_VideoWriter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".VideoWriter",
    sizeof(pyopencv_VideoWriter_t),
};

static void pyopencv_VideoWriter_dealloc(PyObject* self)
{
    ((pyopencv_VideoWriter_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::VideoWriter>& r)
{
    pyopencv_VideoWriter_t *m = PyObject_NEW(pyopencv_VideoWriter_t, &pyopencv_VideoWriter_Type);
    new (&(m->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::VideoWriter>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_VideoWriter_Type))
    {
        failmsg("Expected cv::VideoWriter for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_VideoWriter_t*)src)->v.dynamicCast<cv::VideoWriter>();
    return true;
}


struct pyopencv_dnn_DictValue_t
{
    PyObject_HEAD
    Ptr<cv::dnn::DictValue> v;
};

static PyTypeObject pyopencv_dnn_DictValue_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".dnn_DictValue",
    sizeof(pyopencv_dnn_DictValue_t),
};

static void pyopencv_dnn_DictValue_dealloc(PyObject* self)
{
    ((pyopencv_dnn_DictValue_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::dnn::DictValue>& r)
{
    pyopencv_dnn_DictValue_t *m = PyObject_NEW(pyopencv_dnn_DictValue_t, &pyopencv_dnn_DictValue_Type);
    new (&(m->v)) Ptr<cv::dnn::DictValue>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::dnn::DictValue>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_dnn_DictValue_Type))
    {
        failmsg("Expected cv::dnn::DictValue for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_dnn_DictValue_t*)src)->v.dynamicCast<cv::dnn::DictValue>();
    return true;
}


struct pyopencv_dnn_Importer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_dnn_Importer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".dnn_Importer",
    sizeof(pyopencv_dnn_Importer_t),
};

static void pyopencv_dnn_Importer_dealloc(PyObject* self)
{
    ((pyopencv_dnn_Importer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::dnn::Importer>& r)
{
    pyopencv_dnn_Importer_t *m = PyObject_NEW(pyopencv_dnn_Importer_t, &pyopencv_dnn_Importer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::dnn::Importer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_dnn_Importer_Type))
    {
        failmsg("Expected cv::dnn::Importer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_dnn_Importer_t*)src)->v.dynamicCast<cv::dnn::Importer>();
    return true;
}


struct pyopencv_dnn_Layer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_dnn_Layer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".dnn_Layer",
    sizeof(pyopencv_dnn_Layer_t),
};

static void pyopencv_dnn_Layer_dealloc(PyObject* self)
{
    ((pyopencv_dnn_Layer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::dnn::Layer>& r)
{
    pyopencv_dnn_Layer_t *m = PyObject_NEW(pyopencv_dnn_Layer_t, &pyopencv_dnn_Layer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::dnn::Layer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_dnn_Layer_Type))
    {
        failmsg("Expected cv::dnn::Layer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_dnn_Layer_t*)src)->v.dynamicCast<cv::dnn::Layer>();
    return true;
}


struct pyopencv_dnn_Net_t
{
    PyObject_HEAD
    cv::dnn::Net v;
};

static PyTypeObject pyopencv_dnn_Net_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".dnn_Net",
    sizeof(pyopencv_dnn_Net_t),
};

static void pyopencv_dnn_Net_dealloc(PyObject* self)
{
    ((pyopencv_dnn_Net_t*)self)->v.cv::dnn::Net::~Net();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::dnn::Net& r)
{
    pyopencv_dnn_Net_t *m = PyObject_NEW(pyopencv_dnn_Net_t, &pyopencv_dnn_Net_Type);
    new (&m->v) cv::dnn::Net(r); //Copy constructor
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::dnn::Net& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_dnn_Net_Type))
    {
        failmsg("Expected cv::dnn::Net for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_dnn_Net_t*)src)->v;
    return true;
}

struct pyopencv_flann_Index_t
{
    PyObject_HEAD
    Ptr<cv::flann::Index> v;
};

static PyTypeObject pyopencv_flann_Index_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".flann_Index",
    sizeof(pyopencv_flann_Index_t),
};

static void pyopencv_flann_Index_dealloc(PyObject* self)
{
    ((pyopencv_flann_Index_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::flann::Index>& r)
{
    pyopencv_flann_Index_t *m = PyObject_NEW(pyopencv_flann_Index_t, &pyopencv_flann_Index_Type);
    new (&(m->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::flann::Index>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_flann_Index_Type))
    {
        failmsg("Expected cv::flann::Index for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_flann_Index_t*)src)->v.dynamicCast<cv::flann::Index>();
    return true;
}


struct pyopencv_ml_ANN_MLP_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_ANN_MLP_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_ANN_MLP",
    sizeof(pyopencv_ml_ANN_MLP_t),
};

static void pyopencv_ml_ANN_MLP_dealloc(PyObject* self)
{
    ((pyopencv_ml_ANN_MLP_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::ANN_MLP>& r)
{
    pyopencv_ml_ANN_MLP_t *m = PyObject_NEW(pyopencv_ml_ANN_MLP_t, &pyopencv_ml_ANN_MLP_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::ANN_MLP>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_ANN_MLP_Type))
    {
        failmsg("Expected cv::ml::ANN_MLP for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_ANN_MLP_t*)src)->v.dynamicCast<cv::ml::ANN_MLP>();
    return true;
}


struct pyopencv_ml_Boost_t
{
    PyObject_HEAD
    Ptr<cv::ml::Boost> v;
};

static PyTypeObject pyopencv_ml_Boost_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_Boost",
    sizeof(pyopencv_ml_Boost_t),
};

static void pyopencv_ml_Boost_dealloc(PyObject* self)
{
    ((pyopencv_ml_Boost_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::Boost>& r)
{
    pyopencv_ml_Boost_t *m = PyObject_NEW(pyopencv_ml_Boost_t, &pyopencv_ml_Boost_Type);
    new (&(m->v)) Ptr<cv::ml::Boost>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::Boost>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_Boost_Type))
    {
        failmsg("Expected cv::ml::Boost for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_Boost_t*)src)->v.dynamicCast<cv::ml::Boost>();
    return true;
}


struct pyopencv_ml_DTrees_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_DTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_DTrees",
    sizeof(pyopencv_ml_DTrees_t),
};

static void pyopencv_ml_DTrees_dealloc(PyObject* self)
{
    ((pyopencv_ml_DTrees_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::DTrees>& r)
{
    pyopencv_ml_DTrees_t *m = PyObject_NEW(pyopencv_ml_DTrees_t, &pyopencv_ml_DTrees_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::DTrees>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_DTrees_Type))
    {
        failmsg("Expected cv::ml::DTrees for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_DTrees_t*)src)->v.dynamicCast<cv::ml::DTrees>();
    return true;
}


struct pyopencv_ml_EM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_EM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_EM",
    sizeof(pyopencv_ml_EM_t),
};

static void pyopencv_ml_EM_dealloc(PyObject* self)
{
    ((pyopencv_ml_EM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::EM>& r)
{
    pyopencv_ml_EM_t *m = PyObject_NEW(pyopencv_ml_EM_t, &pyopencv_ml_EM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::EM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_EM_Type))
    {
        failmsg("Expected cv::ml::EM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_EM_t*)src)->v.dynamicCast<cv::ml::EM>();
    return true;
}


struct pyopencv_ml_KNearest_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_KNearest_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_KNearest",
    sizeof(pyopencv_ml_KNearest_t),
};

static void pyopencv_ml_KNearest_dealloc(PyObject* self)
{
    ((pyopencv_ml_KNearest_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::KNearest>& r)
{
    pyopencv_ml_KNearest_t *m = PyObject_NEW(pyopencv_ml_KNearest_t, &pyopencv_ml_KNearest_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::KNearest>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_KNearest_Type))
    {
        failmsg("Expected cv::ml::KNearest for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_KNearest_t*)src)->v.dynamicCast<cv::ml::KNearest>();
    return true;
}


struct pyopencv_ml_LogisticRegression_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_LogisticRegression_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_LogisticRegression",
    sizeof(pyopencv_ml_LogisticRegression_t),
};

static void pyopencv_ml_LogisticRegression_dealloc(PyObject* self)
{
    ((pyopencv_ml_LogisticRegression_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::LogisticRegression>& r)
{
    pyopencv_ml_LogisticRegression_t *m = PyObject_NEW(pyopencv_ml_LogisticRegression_t, &pyopencv_ml_LogisticRegression_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::LogisticRegression>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_LogisticRegression_Type))
    {
        failmsg("Expected cv::ml::LogisticRegression for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_LogisticRegression_t*)src)->v.dynamicCast<cv::ml::LogisticRegression>();
    return true;
}


struct pyopencv_ml_NormalBayesClassifier_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_NormalBayesClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_NormalBayesClassifier",
    sizeof(pyopencv_ml_NormalBayesClassifier_t),
};

static void pyopencv_ml_NormalBayesClassifier_dealloc(PyObject* self)
{
    ((pyopencv_ml_NormalBayesClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::NormalBayesClassifier>& r)
{
    pyopencv_ml_NormalBayesClassifier_t *m = PyObject_NEW(pyopencv_ml_NormalBayesClassifier_t, &pyopencv_ml_NormalBayesClassifier_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::NormalBayesClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_NormalBayesClassifier_Type))
    {
        failmsg("Expected cv::ml::NormalBayesClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_NormalBayesClassifier_t*)src)->v.dynamicCast<cv::ml::NormalBayesClassifier>();
    return true;
}


struct pyopencv_ml_ParamGrid_t
{
    PyObject_HEAD
    Ptr<cv::ml::ParamGrid> v;
};

static PyTypeObject pyopencv_ml_ParamGrid_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_ParamGrid",
    sizeof(pyopencv_ml_ParamGrid_t),
};

static void pyopencv_ml_ParamGrid_dealloc(PyObject* self)
{
    ((pyopencv_ml_ParamGrid_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::ParamGrid>& r)
{
    pyopencv_ml_ParamGrid_t *m = PyObject_NEW(pyopencv_ml_ParamGrid_t, &pyopencv_ml_ParamGrid_Type);
    new (&(m->v)) Ptr<cv::ml::ParamGrid>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::ParamGrid>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_ParamGrid_Type))
    {
        failmsg("Expected cv::ml::ParamGrid for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_ParamGrid_t*)src)->v.dynamicCast<cv::ml::ParamGrid>();
    return true;
}


struct pyopencv_ml_RTrees_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_RTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_RTrees",
    sizeof(pyopencv_ml_RTrees_t),
};

static void pyopencv_ml_RTrees_dealloc(PyObject* self)
{
    ((pyopencv_ml_RTrees_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::RTrees>& r)
{
    pyopencv_ml_RTrees_t *m = PyObject_NEW(pyopencv_ml_RTrees_t, &pyopencv_ml_RTrees_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::RTrees>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_RTrees_Type))
    {
        failmsg("Expected cv::ml::RTrees for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_RTrees_t*)src)->v.dynamicCast<cv::ml::RTrees>();
    return true;
}


struct pyopencv_ml_SVM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_SVM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_SVM",
    sizeof(pyopencv_ml_SVM_t),
};

static void pyopencv_ml_SVM_dealloc(PyObject* self)
{
    ((pyopencv_ml_SVM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::SVM>& r)
{
    pyopencv_ml_SVM_t *m = PyObject_NEW(pyopencv_ml_SVM_t, &pyopencv_ml_SVM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::SVM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_SVM_Type))
    {
        failmsg("Expected cv::ml::SVM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_SVM_t*)src)->v.dynamicCast<cv::ml::SVM>();
    return true;
}


struct pyopencv_ml_SVMSGD_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_SVMSGD_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_SVMSGD",
    sizeof(pyopencv_ml_SVMSGD_t),
};

static void pyopencv_ml_SVMSGD_dealloc(PyObject* self)
{
    ((pyopencv_ml_SVMSGD_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::SVMSGD>& r)
{
    pyopencv_ml_SVMSGD_t *m = PyObject_NEW(pyopencv_ml_SVMSGD_t, &pyopencv_ml_SVMSGD_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::SVMSGD>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_SVMSGD_Type))
    {
        failmsg("Expected cv::ml::SVMSGD for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_SVMSGD_t*)src)->v.dynamicCast<cv::ml::SVMSGD>();
    return true;
}


struct pyopencv_ml_StatModel_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ml_StatModel_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_StatModel",
    sizeof(pyopencv_ml_StatModel_t),
};

static void pyopencv_ml_StatModel_dealloc(PyObject* self)
{
    ((pyopencv_ml_StatModel_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::StatModel>& r)
{
    pyopencv_ml_StatModel_t *m = PyObject_NEW(pyopencv_ml_StatModel_t, &pyopencv_ml_StatModel_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::StatModel>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_StatModel_Type))
    {
        failmsg("Expected cv::ml::StatModel for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_StatModel_t*)src)->v.dynamicCast<cv::ml::StatModel>();
    return true;
}


struct pyopencv_ml_TrainData_t
{
    PyObject_HEAD
    Ptr<cv::ml::TrainData> v;
};

static PyTypeObject pyopencv_ml_TrainData_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ml_TrainData",
    sizeof(pyopencv_ml_TrainData_t),
};

static void pyopencv_ml_TrainData_dealloc(PyObject* self)
{
    ((pyopencv_ml_TrainData_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ml::TrainData>& r)
{
    pyopencv_ml_TrainData_t *m = PyObject_NEW(pyopencv_ml_TrainData_t, &pyopencv_ml_TrainData_Type);
    new (&(m->v)) Ptr<cv::ml::TrainData>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ml::TrainData>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ml_TrainData_Type))
    {
        failmsg("Expected cv::ml::TrainData for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ml_TrainData_t*)src)->v.dynamicCast<cv::ml::TrainData>();
    return true;
}


static PyObject* pyopencv_Algorithm_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Algorithm %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Algorithm_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_Algorithm_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Algorithm* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Algorithm* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Algorithm* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_Algorithm_methods[] =
{
    {"clear", (PyCFunction)pyopencv_cv_Algorithm_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None\n.   @brief Clears the algorithm state"},
    {"getDefaultName", (PyCFunction)pyopencv_cv_Algorithm_getDefaultName, METH_VARARGS | METH_KEYWORDS, "getDefaultName() -> retval\n.   Returns the algorithm string identifier.\n.   This string is used as top level xml/yml node tag when the object is saved to a file or string."},
    {"save", (PyCFunction)pyopencv_cv_Algorithm_save, METH_VARARGS | METH_KEYWORDS, "save(filename) -> None\n.   Saves the algorithm to a file.\n.   In order to make this method work, the derived class must implement Algorithm::write(FileStorage& fs)."},

    {NULL,          NULL}
};

static void pyopencv_Algorithm_specials(void)
{
    pyopencv_Algorithm_Type.tp_base = NULL;
    pyopencv_Algorithm_Type.tp_dealloc = pyopencv_Algorithm_dealloc;
    pyopencv_Algorithm_Type.tp_repr = pyopencv_Algorithm_repr;
    pyopencv_Algorithm_Type.tp_getset = pyopencv_Algorithm_getseters;
    pyopencv_Algorithm_Type.tp_methods = pyopencv_Algorithm_methods;
}

static PyObject* pyopencv_KeyPoint_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KeyPoint %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KeyPoint_get_angle(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.angle);
}

static int pyopencv_KeyPoint_set_angle(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the angle attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.angle) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_class_id(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.class_id);
}

static int pyopencv_KeyPoint_set_class_id(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the class_id attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.class_id) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_octave(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.octave);
}

static int pyopencv_KeyPoint_set_octave(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the octave attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.octave) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_pt(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.pt);
}

static int pyopencv_KeyPoint_set_pt(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the pt attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.pt) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_response(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.response);
}

static int pyopencv_KeyPoint_set_response(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the response attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.response) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_size(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.size);
}

static int pyopencv_KeyPoint_set_size(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the size attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.size) ? 0 : -1;
}


static PyGetSetDef pyopencv_KeyPoint_getseters[] =
{
    {(char*)"angle", (getter)pyopencv_KeyPoint_get_angle, (setter)pyopencv_KeyPoint_set_angle, (char*)"angle", NULL},
    {(char*)"class_id", (getter)pyopencv_KeyPoint_get_class_id, (setter)pyopencv_KeyPoint_set_class_id, (char*)"class_id", NULL},
    {(char*)"octave", (getter)pyopencv_KeyPoint_get_octave, (setter)pyopencv_KeyPoint_set_octave, (char*)"octave", NULL},
    {(char*)"pt", (getter)pyopencv_KeyPoint_get_pt, (setter)pyopencv_KeyPoint_set_pt, (char*)"pt", NULL},
    {(char*)"response", (getter)pyopencv_KeyPoint_get_response, (setter)pyopencv_KeyPoint_set_response, (char*)"response", NULL},
    {(char*)"size", (getter)pyopencv_KeyPoint_get_size, (setter)pyopencv_KeyPoint_set_size, (char*)"size", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_KeyPoint_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_KeyPoint_specials(void)
{
    pyopencv_KeyPoint_Type.tp_base = NULL;
    pyopencv_KeyPoint_Type.tp_dealloc = pyopencv_KeyPoint_dealloc;
    pyopencv_KeyPoint_Type.tp_repr = pyopencv_KeyPoint_repr;
    pyopencv_KeyPoint_Type.tp_getset = pyopencv_KeyPoint_getseters;
    pyopencv_KeyPoint_Type.tp_methods = pyopencv_KeyPoint_methods;
}

static PyObject* pyopencv_DMatch_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DMatch %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_DMatch_get_distance(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.distance);
}

static int pyopencv_DMatch_set_distance(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the distance attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.distance) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_imgIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.imgIdx);
}

static int pyopencv_DMatch_set_imgIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the imgIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.imgIdx) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_queryIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.queryIdx);
}

static int pyopencv_DMatch_set_queryIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the queryIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.queryIdx) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_trainIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.trainIdx);
}

static int pyopencv_DMatch_set_trainIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the trainIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.trainIdx) ? 0 : -1;
}


static PyGetSetDef pyopencv_DMatch_getseters[] =
{
    {(char*)"distance", (getter)pyopencv_DMatch_get_distance, (setter)pyopencv_DMatch_set_distance, (char*)"distance", NULL},
    {(char*)"imgIdx", (getter)pyopencv_DMatch_get_imgIdx, (setter)pyopencv_DMatch_set_imgIdx, (char*)"imgIdx", NULL},
    {(char*)"queryIdx", (getter)pyopencv_DMatch_get_queryIdx, (setter)pyopencv_DMatch_set_queryIdx, (char*)"queryIdx", NULL},
    {(char*)"trainIdx", (getter)pyopencv_DMatch_get_trainIdx, (setter)pyopencv_DMatch_set_trainIdx, (char*)"trainIdx", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_DMatch_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_DMatch_specials(void)
{
    pyopencv_DMatch_Type.tp_base = NULL;
    pyopencv_DMatch_Type.tp_dealloc = pyopencv_DMatch_dealloc;
    pyopencv_DMatch_Type.tp_repr = pyopencv_DMatch_repr;
    pyopencv_DMatch_Type.tp_getset = pyopencv_DMatch_getseters;
    pyopencv_DMatch_Type.tp_methods = pyopencv_DMatch_methods;
}
static bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"m00") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m00");
        ok = tmp && pyopencv_to(tmp, dst.m00);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m10") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m10");
        ok = tmp && pyopencv_to(tmp, dst.m10);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m01") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m01");
        ok = tmp && pyopencv_to(tmp, dst.m01);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m20");
        ok = tmp && pyopencv_to(tmp, dst.m20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m11");
        ok = tmp && pyopencv_to(tmp, dst.m11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m02");
        ok = tmp && pyopencv_to(tmp, dst.m02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m30");
        ok = tmp && pyopencv_to(tmp, dst.m30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m21");
        ok = tmp && pyopencv_to(tmp, dst.m21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m12");
        ok = tmp && pyopencv_to(tmp, dst.m12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m03");
        ok = tmp && pyopencv_to(tmp, dst.m03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu20");
        ok = tmp && pyopencv_to(tmp, dst.mu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu11");
        ok = tmp && pyopencv_to(tmp, dst.mu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu02");
        ok = tmp && pyopencv_to(tmp, dst.mu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu30");
        ok = tmp && pyopencv_to(tmp, dst.mu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu21");
        ok = tmp && pyopencv_to(tmp, dst.mu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu12");
        ok = tmp && pyopencv_to(tmp, dst.mu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu03");
        ok = tmp && pyopencv_to(tmp, dst.mu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu20");
        ok = tmp && pyopencv_to(tmp, dst.nu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu11");
        ok = tmp && pyopencv_to(tmp, dst.nu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu02");
        ok = tmp && pyopencv_to(tmp, dst.nu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu30");
        ok = tmp && pyopencv_to(tmp, dst.nu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu21");
        ok = tmp && pyopencv_to(tmp, dst.nu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu12");
        ok = tmp && pyopencv_to(tmp, dst.nu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu03");
        ok = tmp && pyopencv_to(tmp, dst.nu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_TickMeter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TickMeter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TickMeter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_TickMeter_getCounter(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    int64 retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCounter());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeMicro(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeMicro());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeMilli(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeMilli());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeSec(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeSec());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeTicks(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    int64 retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeTicks());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_reset(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->reset());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_start(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->start());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_stop(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TickMeter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TickMeter_Type))
        _self_ = ((pyopencv_TickMeter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->stop());
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TickMeter_methods[] =
{
    {"getCounter", (PyCFunction)pyopencv_cv_TickMeter_getCounter, METH_VARARGS | METH_KEYWORDS, "getCounter() -> retval\n.   returns internal counter value."},
    {"getTimeMicro", (PyCFunction)pyopencv_cv_TickMeter_getTimeMicro, METH_VARARGS | METH_KEYWORDS, "getTimeMicro() -> retval\n.   returns passed time in microseconds."},
    {"getTimeMilli", (PyCFunction)pyopencv_cv_TickMeter_getTimeMilli, METH_VARARGS | METH_KEYWORDS, "getTimeMilli() -> retval\n.   returns passed time in milliseconds."},
    {"getTimeSec", (PyCFunction)pyopencv_cv_TickMeter_getTimeSec, METH_VARARGS | METH_KEYWORDS, "getTimeSec() -> retval\n.   returns passed time in seconds."},
    {"getTimeTicks", (PyCFunction)pyopencv_cv_TickMeter_getTimeTicks, METH_VARARGS | METH_KEYWORDS, "getTimeTicks() -> retval\n.   returns counted ticks."},
    {"reset", (PyCFunction)pyopencv_cv_TickMeter_reset, METH_VARARGS | METH_KEYWORDS, "reset() -> None\n.   resets internal values."},
    {"start", (PyCFunction)pyopencv_cv_TickMeter_start, METH_VARARGS | METH_KEYWORDS, "start() -> None\n.   starts counting ticks."},
    {"stop", (PyCFunction)pyopencv_cv_TickMeter_stop, METH_VARARGS | METH_KEYWORDS, "stop() -> None\n.   stops counting ticks."},

    {NULL,          NULL}
};

static void pyopencv_TickMeter_specials(void)
{
    pyopencv_TickMeter_Type.tp_base = NULL;
    pyopencv_TickMeter_Type.tp_dealloc = pyopencv_TickMeter_dealloc;
    pyopencv_TickMeter_Type.tp_repr = pyopencv_TickMeter_repr;
    pyopencv_TickMeter_Type.tp_getset = pyopencv_TickMeter_getseters;
    pyopencv_TickMeter_Type.tp_methods = pyopencv_TickMeter_methods;
}

static PyObject* pyopencv_FileStorage_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileStorage %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileStorage_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_FileStorage_getFirstTopLevelNode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    FileNode retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstTopLevelNode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_getFormat(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFormat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_getNode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileStorage.getNode", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_open(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;
    int flags=0;
    PyObject* pyobj_encoding = NULL;
    String encoding;
    bool retval;

    const char* keywords[] = { "filename", "flags", "encoding", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:FileStorage.open", (char**)keywords, &pyobj_filename, &flags, &pyobj_encoding) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_encoding, encoding, ArgInfo("encoding", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, flags, encoding));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_releaseAndGetString(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->releaseAndGetString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_root(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    int streamidx=0;
    FileNode retval;

    const char* keywords[] = { "streamidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:FileStorage.root", (char**)keywords, &streamidx) )
    {
        ERRWRAP2(retval = _self_->root(streamidx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    {
    PyObject* pyobj_name = NULL;
    String name;
    double val=0;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Od:FileStorage.write", (char**)keywords, &pyobj_name, &val) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    String val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    UMat val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_writeComment(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileStorage* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    PyObject* pyobj_comment = NULL;
    String comment;
    bool append=false;

    const char* keywords[] = { "comment", "append", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|b:FileStorage.writeComment", (char**)keywords, &pyobj_comment, &append) &&
        pyopencv_to(pyobj_comment, comment, ArgInfo("comment", 0)) )
    {
        ERRWRAP2(_self_->writeComment(comment, append));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_FileStorage_methods[] =
{
    {"getFirstTopLevelNode", (PyCFunction)pyopencv_cv_FileStorage_getFirstTopLevelNode, METH_VARARGS | METH_KEYWORDS, "getFirstTopLevelNode() -> retval\n.   @brief Returns the first element of the top-level mapping.\n.   @returns The first element of the top-level mapping."},
    {"getFormat", (PyCFunction)pyopencv_cv_FileStorage_getFormat, METH_VARARGS | METH_KEYWORDS, "getFormat() -> retval\n.   @brief Returns the current format.\n.   * @returns The current format, see FileStorage::Mode"},
    {"getNode", (PyCFunction)pyopencv_cv_FileStorage_getNode, METH_VARARGS | METH_KEYWORDS, "getNode(nodename) -> retval\n.   @overload"},
    {"isOpened", (PyCFunction)pyopencv_cv_FileStorage_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval\n.   @brief Checks whether the file is opened.\n.   \n.   @returns true if the object is associated with the current file and false otherwise. It is a\n.   good practice to call this method after you tried to open a file."},
    {"open", (PyCFunction)pyopencv_cv_FileStorage_open, METH_VARARGS | METH_KEYWORDS, "open(filename, flags[, encoding]) -> retval\n.   @brief Opens a file.\n.   \n.   See description of parameters in FileStorage::FileStorage. The method calls FileStorage::release\n.   before opening the file.\n.   @param filename Name of the file to open or the text string to read the data from.\n.   Extension of the file (.xml, .yml/.yaml or .json) determines its format (XML, YAML or JSON\n.   respectively). Also you can append .gz to work with compressed files, for example myHugeMatrix.xml.gz. If both\n.   FileStorage::WRITE and FileStorage::MEMORY flags are specified, source is used just to specify\n.   the output file format (e.g. mydata.xml, .yml etc.). A file name can also contain parameters.\n.   You can use this format, \"*?base64\" (e.g. \"file.json?base64\" (case sensitive)), as an alternative to\n.   FileStorage::BASE64 flag.\n.   @param flags Mode of operation. One of FileStorage::Mode\n.   @param encoding Encoding of the file. Note that UTF-16 XML encoding is not supported currently and\n.   you should use 8-bit encoding instead of it."},
    {"release", (PyCFunction)pyopencv_cv_FileStorage_release, METH_VARARGS | METH_KEYWORDS, "release() -> None\n.   @brief Closes the file and releases all the memory buffers.\n.   \n.   Call this method after all I/O operations with the storage are finished."},
    {"releaseAndGetString", (PyCFunction)pyopencv_cv_FileStorage_releaseAndGetString, METH_VARARGS | METH_KEYWORDS, "releaseAndGetString() -> retval\n.   @brief Closes the file and releases all the memory buffers.\n.   \n.   Call this method after all I/O operations with the storage are finished. If the storage was\n.   opened for writing data and FileStorage::WRITE was specified"},
    {"root", (PyCFunction)pyopencv_cv_FileStorage_root, METH_VARARGS | METH_KEYWORDS, "root([, streamidx]) -> retval\n.   @brief Returns the top-level mapping\n.   @param streamidx Zero-based index of the stream. In most cases there is only one stream in the file.\n.   However, YAML supports multiple streams and so there can be several.\n.   @returns The top-level mapping."},
    {"write", (PyCFunction)pyopencv_cv_FileStorage_write, METH_VARARGS | METH_KEYWORDS, "write(name, val) -> None\n.   * @brief Simplified writing API to use with bindings.\n.   * @param name Name of the written object\n.   * @param val Value of the written object"},
    {"writeComment", (PyCFunction)pyopencv_cv_FileStorage_writeComment, METH_VARARGS | METH_KEYWORDS, "writeComment(comment[, append]) -> None\n.   @brief Writes a comment.\n.   \n.   The function writes a comment into file storage. The comments are skipped when the storage is read.\n.   @param comment The written comment, single-line or multi-line\n.   @param append If true, the function tries to put the comment at the end of current line.\n.   Else if the comment is multi-line, or if it does not fit at the end of the current\n.   line, the comment starts a new line."},

    {NULL,          NULL}
};

static void pyopencv_FileStorage_specials(void)
{
    pyopencv_FileStorage_Type.tp_base = NULL;
    pyopencv_FileStorage_Type.tp_dealloc = pyopencv_FileStorage_dealloc;
    pyopencv_FileStorage_Type.tp_repr = pyopencv_FileStorage_repr;
    pyopencv_FileStorage_Type.tp_getset = pyopencv_FileStorage_getseters;
    pyopencv_FileStorage_Type.tp_methods = pyopencv_FileStorage_methods;
}

static PyObject* pyopencv_FileNode_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileNode %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileNode_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_FileNode_at(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    int i=0;
    FileNode retval;

    const char* keywords[] = { "i", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FileNode.at", (char**)keywords, &i) )
    {
        ERRWRAP2(retval = _self_->operator[](i));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_getNode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileNode.getNode", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isInt(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isMap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isNamed(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNamed());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isNone(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isReal(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isReal());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isSeq(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isSeq());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isString(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_mat(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->mat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_name(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_real(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->real());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_size(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_string(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->string());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_type(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FileNode* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        _self_ = &((pyopencv_FileNode_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FileNode_methods[] =
{
    {"at", (PyCFunction)pyopencv_cv_FileNode_at, METH_VARARGS | METH_KEYWORDS, "at(i) -> retval\n.   @overload\n.   @param i Index of an element in the sequence node."},
    {"empty", (PyCFunction)pyopencv_cv_FileNode_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n."},
    {"getNode", (PyCFunction)pyopencv_cv_FileNode_getNode, METH_VARARGS | METH_KEYWORDS, "getNode(nodename) -> retval\n.   @overload\n.   @param nodename Name of an element in the mapping node."},
    {"isInt", (PyCFunction)pyopencv_cv_FileNode_isInt, METH_VARARGS | METH_KEYWORDS, "isInt() -> retval\n."},
    {"isMap", (PyCFunction)pyopencv_cv_FileNode_isMap, METH_VARARGS | METH_KEYWORDS, "isMap() -> retval\n."},
    {"isNamed", (PyCFunction)pyopencv_cv_FileNode_isNamed, METH_VARARGS | METH_KEYWORDS, "isNamed() -> retval\n."},
    {"isNone", (PyCFunction)pyopencv_cv_FileNode_isNone, METH_VARARGS | METH_KEYWORDS, "isNone() -> retval\n."},
    {"isReal", (PyCFunction)pyopencv_cv_FileNode_isReal, METH_VARARGS | METH_KEYWORDS, "isReal() -> retval\n."},
    {"isSeq", (PyCFunction)pyopencv_cv_FileNode_isSeq, METH_VARARGS | METH_KEYWORDS, "isSeq() -> retval\n."},
    {"isString", (PyCFunction)pyopencv_cv_FileNode_isString, METH_VARARGS | METH_KEYWORDS, "isString() -> retval\n."},
    {"mat", (PyCFunction)pyopencv_cv_FileNode_mat, METH_VARARGS | METH_KEYWORDS, "mat() -> retval\n."},
    {"name", (PyCFunction)pyopencv_cv_FileNode_name, METH_VARARGS | METH_KEYWORDS, "name() -> retval\n."},
    {"real", (PyCFunction)pyopencv_cv_FileNode_real, METH_VARARGS | METH_KEYWORDS, "real() -> retval\n.   @brief Reads node elements to the buffer with the specified format.\n.   \n.   Usually it is more convenient to use operator `>>` instead of this method.\n.   @param fmt Specification of each array element. See @ref format_spec \"format specification\"\n.   @param vec Pointer to the destination array.\n.   @param len Number of elements to read. If it is greater than number of remaining elements then all\n.   of them will be read."},
    {"size", (PyCFunction)pyopencv_cv_FileNode_size, METH_VARARGS | METH_KEYWORDS, "size() -> retval\n."},
    {"string", (PyCFunction)pyopencv_cv_FileNode_string, METH_VARARGS | METH_KEYWORDS, "string() -> retval\n."},
    {"type", (PyCFunction)pyopencv_cv_FileNode_type, METH_VARARGS | METH_KEYWORDS, "type() -> retval\n.   @brief Returns type of the node.\n.   @returns Type of the node. See FileNode::Type"},

    {NULL,          NULL}
};

static void pyopencv_FileNode_specials(void)
{
    pyopencv_FileNode_Type.tp_base = NULL;
    pyopencv_FileNode_Type.tp_dealloc = pyopencv_FileNode_dealloc;
    pyopencv_FileNode_Type.tp_repr = pyopencv_FileNode_repr;
    pyopencv_FileNode_Type.tp_getset = pyopencv_FileNode_getseters;
    pyopencv_FileNode_Type.tp_methods = pyopencv_FileNode_methods;
}

static PyObject* pyopencv_flann_Index_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<flann_Index %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_flann_Index_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_flann_flann_Index_build(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cvflann::flann_algorithm_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cvflann::flann_distance_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_knnSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_radiusSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    cv::flann::Index* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:flann_Index.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_flann_Index_methods[] =
{
    {"build", (PyCFunction)pyopencv_cv_flann_flann_Index_build, METH_VARARGS | METH_KEYWORDS, "build(features, params[, distType]) -> None\n."},
    {"getAlgorithm", (PyCFunction)pyopencv_cv_flann_flann_Index_getAlgorithm, METH_VARARGS | METH_KEYWORDS, "getAlgorithm() -> retval\n."},
    {"getDistance", (PyCFunction)pyopencv_cv_flann_flann_Index_getDistance, METH_VARARGS | METH_KEYWORDS, "getDistance() -> retval\n."},
    {"knnSearch", (PyCFunction)pyopencv_cv_flann_flann_Index_knnSearch, METH_VARARGS | METH_KEYWORDS, "knnSearch(query, knn[, indices[, dists[, params]]]) -> indices, dists\n."},
    {"load", (PyCFunction)pyopencv_cv_flann_flann_Index_load, METH_VARARGS | METH_KEYWORDS, "load(features, filename) -> retval\n."},
    {"radiusSearch", (PyCFunction)pyopencv_cv_flann_flann_Index_radiusSearch, METH_VARARGS | METH_KEYWORDS, "radiusSearch(query, radius, maxResults[, indices[, dists[, params]]]) -> retval, indices, dists\n."},
    {"release", (PyCFunction)pyopencv_cv_flann_flann_Index_release, METH_VARARGS | METH_KEYWORDS, "release() -> None\n."},
    {"save", (PyCFunction)pyopencv_cv_flann_flann_Index_save, METH_VARARGS | METH_KEYWORDS, "save(filename) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_flann_Index_specials(void)
{
    pyopencv_flann_Index_Type.tp_base = NULL;
    pyopencv_flann_Index_Type.tp_dealloc = pyopencv_flann_Index_dealloc;
    pyopencv_flann_Index_Type.tp_repr = pyopencv_flann_Index_repr;
    pyopencv_flann_Index_Type.tp_getset = pyopencv_flann_Index_getseters;
    pyopencv_flann_Index_Type.tp_methods = pyopencv_flann_Index_methods;
}

static PyObject* pyopencv_CLAHE_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CLAHE %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CLAHE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_CLAHE_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_collectGarbage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getClipLimit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClipLimit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getTilesGridSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Size retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTilesGridSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setClipLimit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    double clipLimit=0;

    const char* keywords[] = { "clipLimit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:CLAHE.setClipLimit", (char**)keywords, &clipLimit) )
    {
        ERRWRAP2(_self_->setClipLimit(clipLimit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setTilesGridSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CLAHE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    PyObject* pyobj_tileGridSize = NULL;
    Size tileGridSize;

    const char* keywords[] = { "tileGridSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CLAHE.setTilesGridSize", (char**)keywords, &pyobj_tileGridSize) &&
        pyopencv_to(pyobj_tileGridSize, tileGridSize, ArgInfo("tileGridSize", 0)) )
    {
        ERRWRAP2(_self_->setTilesGridSize(tileGridSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CLAHE_methods[] =
{
    {"apply", (PyCFunction)pyopencv_cv_CLAHE_apply, METH_VARARGS | METH_KEYWORDS, "apply(src[, dst]) -> dst\n."},
    {"collectGarbage", (PyCFunction)pyopencv_cv_CLAHE_collectGarbage, METH_VARARGS | METH_KEYWORDS, "collectGarbage() -> None\n."},
    {"getClipLimit", (PyCFunction)pyopencv_cv_CLAHE_getClipLimit, METH_VARARGS | METH_KEYWORDS, "getClipLimit() -> retval\n."},
    {"getTilesGridSize", (PyCFunction)pyopencv_cv_CLAHE_getTilesGridSize, METH_VARARGS | METH_KEYWORDS, "getTilesGridSize() -> retval\n."},
    {"setClipLimit", (PyCFunction)pyopencv_cv_CLAHE_setClipLimit, METH_VARARGS | METH_KEYWORDS, "setClipLimit(clipLimit) -> None\n."},
    {"setTilesGridSize", (PyCFunction)pyopencv_cv_CLAHE_setTilesGridSize, METH_VARARGS | METH_KEYWORDS, "setTilesGridSize(tileGridSize) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_CLAHE_specials(void)
{
    pyopencv_CLAHE_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_CLAHE_Type.tp_dealloc = pyopencv_CLAHE_dealloc;
    pyopencv_CLAHE_Type.tp_repr = pyopencv_CLAHE_repr;
    pyopencv_CLAHE_Type.tp_getset = pyopencv_CLAHE_getseters;
    pyopencv_CLAHE_Type.tp_methods = pyopencv_CLAHE_methods;
}

static PyObject* pyopencv_Subdiv2D_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Subdiv2D %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Subdiv2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_Subdiv2D_edgeDst(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    Point2f dstpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeDst", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeDst(edge, &dstpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dstpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_edgeOrg(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    Point2f orgpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeOrg", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeOrg(edge, &orgpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(orgpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    Point2f nearestPt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.findNearest", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->findNearest(pt, &nearestPt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(nearestPt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    int nextEdgeType=0;
    int retval;

    const char* keywords[] = { "edge", "nextEdgeType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.getEdge", (char**)keywords, &edge, &nextEdgeType) )
    {
        ERRWRAP2(retval = _self_->getEdge(edge, nextEdgeType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    vector_Vec4f edgeList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getEdgeList(edgeList));
        return pyopencv_from(edgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getLeadingEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    vector_int leadingEdgeList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getLeadingEdgeList(leadingEdgeList));
        return pyopencv_from(leadingEdgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getTriangleList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    vector_Vec6f triangleList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getTriangleList(triangleList));
        return pyopencv_from(triangleList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVertex(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int vertex=0;
    int firstEdge;
    Point2f retval;

    const char* keywords[] = { "vertex", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.getVertex", (char**)keywords, &vertex) )
    {
        ERRWRAP2(retval = _self_->getVertex(vertex, &firstEdge));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(firstEdge));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVoronoiFacetList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    PyObject* pyobj_idx = NULL;
    vector_int idx;
    vector_vector_Point2f facetList;
    vector_Point2f facetCenters;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.getVoronoiFacetList", (char**)keywords, &pyobj_idx) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(_self_->getVoronoiFacetList(idx, facetList, facetCenters));
        return Py_BuildValue("(NN)", pyopencv_from(facetList), pyopencv_from(facetCenters));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_initDelaunay(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.initDelaunay", (char**)keywords, &pyobj_rect) &&
        pyopencv_to(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        ERRWRAP2(_self_->initDelaunay(rect));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_insert(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    {
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->insert(pt));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_ptvec = NULL;
    vector_Point2f ptvec;

    const char* keywords[] = { "ptvec", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_ptvec) &&
        pyopencv_to(pyobj_ptvec, ptvec, ArgInfo("ptvec", 0)) )
    {
        ERRWRAP2(_self_->insert(ptvec));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_locate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int edge;
    int vertex;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.locate", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->locate(pt, edge, vertex));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(edge), pyopencv_from(vertex));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_nextEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.nextEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->nextEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_rotateEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    int rotate=0;
    int retval;

    const char* keywords[] = { "edge", "rotate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.rotateEdge", (char**)keywords, &edge, &rotate) )
    {
        ERRWRAP2(retval = _self_->rotateEdge(edge, rotate));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_symEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Subdiv2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.symEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->symEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_Subdiv2D_methods[] =
{
    {"edgeDst", (PyCFunction)pyopencv_cv_Subdiv2D_edgeDst, METH_VARARGS | METH_KEYWORDS, "edgeDst(edge) -> retval, dstpt\n.   @brief Returns the edge destination.\n.   \n.   @param edge Subdivision edge ID.\n.   @param dstpt Output vertex location.\n.   \n.   @returns vertex ID."},
    {"edgeOrg", (PyCFunction)pyopencv_cv_Subdiv2D_edgeOrg, METH_VARARGS | METH_KEYWORDS, "edgeOrg(edge) -> retval, orgpt\n.   @brief Returns the edge origin.\n.   \n.   @param edge Subdivision edge ID.\n.   @param orgpt Output vertex location.\n.   \n.   @returns vertex ID."},
    {"findNearest", (PyCFunction)pyopencv_cv_Subdiv2D_findNearest, METH_VARARGS | METH_KEYWORDS, "findNearest(pt) -> retval, nearestPt\n.   @brief Finds the subdivision vertex closest to the given point.\n.   \n.   @param pt Input point.\n.   @param nearestPt Output subdivision vertex point.\n.   \n.   The function is another function that locates the input point within the subdivision. It finds the\n.   subdivision vertex that is the closest to the input point. It is not necessarily one of vertices\n.   of the facet containing the input point, though the facet (located using locate() ) is used as a\n.   starting point.\n.   \n.   @returns vertex ID."},
    {"getEdge", (PyCFunction)pyopencv_cv_Subdiv2D_getEdge, METH_VARARGS | METH_KEYWORDS, "getEdge(edge, nextEdgeType) -> retval\n.   @brief Returns one of the edges related to the given edge.\n.   \n.   @param edge Subdivision edge ID.\n.   @param nextEdgeType Parameter specifying which of the related edges to return.\n.   The following values are possible:\n.   -   NEXT_AROUND_ORG next around the edge origin ( eOnext on the picture below if e is the input edge)\n.   -   NEXT_AROUND_DST next around the edge vertex ( eDnext )\n.   -   PREV_AROUND_ORG previous around the edge origin (reversed eRnext )\n.   -   PREV_AROUND_DST previous around the edge destination (reversed eLnext )\n.   -   NEXT_AROUND_LEFT next around the left facet ( eLnext )\n.   -   NEXT_AROUND_RIGHT next around the right facet ( eRnext )\n.   -   PREV_AROUND_LEFT previous around the left facet (reversed eOnext )\n.   -   PREV_AROUND_RIGHT previous around the right facet (reversed eDnext )\n.   \n.   ![sample output](pics/quadedge.png)\n.   \n.   @returns edge ID related to the input edge."},
    {"getEdgeList", (PyCFunction)pyopencv_cv_Subdiv2D_getEdgeList, METH_VARARGS | METH_KEYWORDS, "getEdgeList() -> edgeList\n.   @brief Returns a list of all edges.\n.   \n.   @param edgeList Output vector.\n.   \n.   The function gives each edge as a 4 numbers vector, where each two are one of the edge\n.   vertices. i.e. org_x = v[0], org_y = v[1], dst_x = v[2], dst_y = v[3]."},
    {"getLeadingEdgeList", (PyCFunction)pyopencv_cv_Subdiv2D_getLeadingEdgeList, METH_VARARGS | METH_KEYWORDS, "getLeadingEdgeList() -> leadingEdgeList\n.   @brief Returns a list of the leading edge ID connected to each triangle.\n.   \n.   @param leadingEdgeList Output vector.\n.   \n.   The function gives one edge ID for each triangle."},
    {"getTriangleList", (PyCFunction)pyopencv_cv_Subdiv2D_getTriangleList, METH_VARARGS | METH_KEYWORDS, "getTriangleList() -> triangleList\n.   @brief Returns a list of all triangles.\n.   \n.   @param triangleList Output vector.\n.   \n.   The function gives each triangle as a 6 numbers vector, where each two are one of the triangle\n.   vertices. i.e. p1_x = v[0], p1_y = v[1], p2_x = v[2], p2_y = v[3], p3_x = v[4], p3_y = v[5]."},
    {"getVertex", (PyCFunction)pyopencv_cv_Subdiv2D_getVertex, METH_VARARGS | METH_KEYWORDS, "getVertex(vertex) -> retval, firstEdge\n.   @brief Returns vertex location from vertex ID.\n.   \n.   @param vertex vertex ID.\n.   @param firstEdge Optional. The first edge ID which is connected to the vertex.\n.   @returns vertex (x,y)"},
    {"getVoronoiFacetList", (PyCFunction)pyopencv_cv_Subdiv2D_getVoronoiFacetList, METH_VARARGS | METH_KEYWORDS, "getVoronoiFacetList(idx) -> facetList, facetCenters\n.   @brief Returns a list of all Voroni facets.\n.   \n.   @param idx Vector of vertices IDs to consider. For all vertices you can pass empty vector.\n.   @param facetList Output vector of the Voroni facets.\n.   @param facetCenters Output vector of the Voroni facets center points."},
    {"initDelaunay", (PyCFunction)pyopencv_cv_Subdiv2D_initDelaunay, METH_VARARGS | METH_KEYWORDS, "initDelaunay(rect) -> None\n.   @brief Creates a new empty Delaunay subdivision\n.   \n.   @param rect Rectangle that includes all of the 2D points that are to be added to the subdivision."},
    {"insert", (PyCFunction)pyopencv_cv_Subdiv2D_insert, METH_VARARGS | METH_KEYWORDS, "insert(pt) -> retval\n.   @brief Insert a single point into a Delaunay triangulation.\n.   \n.   @param pt Point to insert.\n.   \n.   The function inserts a single point into a subdivision and modifies the subdivision topology\n.   appropriately. If a point with the same coordinates exists already, no new point is added.\n.   @returns the ID of the point.\n.   \n.   @note If the point is outside of the triangulation specified rect a runtime error is raised.\n\n\n\ninsert(ptvec) -> None\n.   @brief Insert multiple points into a Delaunay triangulation.\n.   \n.   @param ptvec Points to insert.\n.   \n.   The function inserts a vector of points into a subdivision and modifies the subdivision topology\n.   appropriately."},
    {"locate", (PyCFunction)pyopencv_cv_Subdiv2D_locate, METH_VARARGS | METH_KEYWORDS, "locate(pt) -> retval, edge, vertex\n.   @brief Returns the location of a point within a Delaunay triangulation.\n.   \n.   @param pt Point to locate.\n.   @param edge Output edge that the point belongs to or is located to the right of it.\n.   @param vertex Optional output vertex the input point coincides with.\n.   \n.   The function locates the input point within the subdivision and gives one of the triangle edges\n.   or vertices.\n.   \n.   @returns an integer which specify one of the following five cases for point location:\n.   -  The point falls into some facet. The function returns PTLOC_INSIDE and edge will contain one of\n.   edges of the facet.\n.   -  The point falls onto the edge. The function returns PTLOC_ON_EDGE and edge will contain this edge.\n.   -  The point coincides with one of the subdivision vertices. The function returns PTLOC_VERTEX and\n.   vertex will contain a pointer to the vertex.\n.   -  The point is outside the subdivision reference rectangle. The function returns PTLOC_OUTSIDE_RECT\n.   and no pointers are filled.\n.   -  One of input arguments is invalid. A runtime error is raised or, if silent or \"parent\" error\n.   processing mode is selected, CV_PTLOC_ERROR is returned."},
    {"nextEdge", (PyCFunction)pyopencv_cv_Subdiv2D_nextEdge, METH_VARARGS | METH_KEYWORDS, "nextEdge(edge) -> retval\n.   @brief Returns next edge around the edge origin.\n.   \n.   @param edge Subdivision edge ID.\n.   \n.   @returns an integer which is next edge ID around the edge origin: eOnext on the\n.   picture above if e is the input edge)."},
    {"rotateEdge", (PyCFunction)pyopencv_cv_Subdiv2D_rotateEdge, METH_VARARGS | METH_KEYWORDS, "rotateEdge(edge, rotate) -> retval\n.   @brief Returns another edge of the same quad-edge.\n.   \n.   @param edge Subdivision edge ID.\n.   @param rotate Parameter specifying which of the edges of the same quad-edge as the input\n.   one to return. The following values are possible:\n.   -   0 - the input edge ( e on the picture below if e is the input edge)\n.   -   1 - the rotated edge ( eRot )\n.   -   2 - the reversed edge (reversed e (in green))\n.   -   3 - the reversed rotated edge (reversed eRot (in green))\n.   \n.   @returns one of the edges ID of the same quad-edge as the input edge."},
    {"symEdge", (PyCFunction)pyopencv_cv_Subdiv2D_symEdge, METH_VARARGS | METH_KEYWORDS, "symEdge(edge) -> retval\n."},

    {NULL,          NULL}
};

static void pyopencv_Subdiv2D_specials(void)
{
    pyopencv_Subdiv2D_Type.tp_base = NULL;
    pyopencv_Subdiv2D_Type.tp_dealloc = pyopencv_Subdiv2D_dealloc;
    pyopencv_Subdiv2D_Type.tp_repr = pyopencv_Subdiv2D_repr;
    pyopencv_Subdiv2D_Type.tp_getset = pyopencv_Subdiv2D_getseters;
    pyopencv_Subdiv2D_Type.tp_methods = pyopencv_Subdiv2D_methods;
}

static PyObject* pyopencv_LineSegmentDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<LineSegmentDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_LineSegmentDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_LineSegmentDetector_compareSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::LineSegmentDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    Mat lines1;
    PyObject* pyobj_lines2 = NULL;
    Mat lines2;
    PyObject* pyobj__image = NULL;
    Mat _image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "_image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj__image) &&
        pyopencv_to(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, _image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(_image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    UMat lines1;
    PyObject* pyobj_lines2 = NULL;
    UMat lines2;
    PyObject* pyobj__image = NULL;
    UMat _image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "_image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj__image) &&
        pyopencv_to(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, _image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(_image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::LineSegmentDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    {
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj__lines = NULL;
    Mat _lines;
    PyObject* pyobj_width = NULL;
    Mat width;
    PyObject* pyobj_prec = NULL;
    Mat prec;
    PyObject* pyobj_nfa = NULL;
    Mat nfa;

    const char* keywords[] = { "_image", "_lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj__image, &pyobj__lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 0)) &&
        pyopencv_to(pyobj__lines, _lines, ArgInfo("_lines", 1)) &&
        pyopencv_to(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(_image, _lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(_lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__image = NULL;
    UMat _image;
    PyObject* pyobj__lines = NULL;
    UMat _lines;
    PyObject* pyobj_width = NULL;
    UMat width;
    PyObject* pyobj_prec = NULL;
    UMat prec;
    PyObject* pyobj_nfa = NULL;
    UMat nfa;

    const char* keywords[] = { "_image", "_lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj__image, &pyobj__lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 0)) &&
        pyopencv_to(pyobj__lines, _lines, ArgInfo("_lines", 1)) &&
        pyopencv_to(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(_image, _lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(_lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_drawSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::LineSegmentDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    {
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj_lines = NULL;
    Mat lines;

    const char* keywords[] = { "_image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj__image, &pyobj_lines) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) &&
        pyopencv_to(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(_image, lines));
        return pyopencv_from(_image);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__image = NULL;
    UMat _image;
    PyObject* pyobj_lines = NULL;
    UMat lines;

    const char* keywords[] = { "_image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj__image, &pyobj_lines) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) &&
        pyopencv_to(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(_image, lines));
        return pyopencv_from(_image);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_LineSegmentDetector_methods[] =
{
    {"compareSegments", (PyCFunction)pyopencv_cv_LineSegmentDetector_compareSegments, METH_VARARGS | METH_KEYWORDS, "compareSegments(size, lines1, lines2[, _image]) -> retval, _image\n.   @brief Draws two groups of lines in blue and red, counting the non overlapping (mismatching) pixels.\n.   \n.   @param size The size of the image, where lines1 and lines2 were found.\n.   @param lines1 The first group of lines that needs to be drawn. It is visualized in blue color.\n.   @param lines2 The second group of lines. They visualized in red color.\n.   @param _image Optional image, where the lines will be drawn. The image should be color(3-channel)\n.   in order for lines1 and lines2 to be drawn in the above mentioned colors."},
    {"detect", (PyCFunction)pyopencv_cv_LineSegmentDetector_detect, METH_VARARGS | METH_KEYWORDS, "detect(_image[, _lines[, width[, prec[, nfa]]]]) -> _lines, width, prec, nfa\n.   @brief Finds lines in the input image.\n.   \n.   This is the output of the default parameters of the algorithm on the above shown image.\n.   \n.   ![image](pics/building_lsd.png)\n.   \n.   @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:\n.   `lsd_ptr-\\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`\n.   @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where\n.   Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly\n.   oriented depending on the gradient.\n.   @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.\n.   @param prec Vector of precisions with which the lines are found.\n.   @param nfa Vector containing number of false alarms in the line region, with precision of 10%. The\n.   bigger the value, logarithmically better the detection.\n.   - -1 corresponds to 10 mean false alarms\n.   - 0 corresponds to 1 mean false alarm\n.   - 1 corresponds to 0.1 mean false alarms\n.   This vector will be calculated only when the objects type is LSD_REFINE_ADV."},
    {"drawSegments", (PyCFunction)pyopencv_cv_LineSegmentDetector_drawSegments, METH_VARARGS | METH_KEYWORDS, "drawSegments(_image, lines) -> _image\n.   @brief Draws the line segments on a given image.\n.   @param _image The image, where the lines will be drawn. Should be bigger or equal to the image,\n.   where the lines were found.\n.   @param lines A vector of the lines that needed to be drawn."},

    {NULL,          NULL}
};

static void pyopencv_LineSegmentDetector_specials(void)
{
    pyopencv_LineSegmentDetector_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_LineSegmentDetector_Type.tp_dealloc = pyopencv_LineSegmentDetector_dealloc;
    pyopencv_LineSegmentDetector_Type.tp_repr = pyopencv_LineSegmentDetector_repr;
    pyopencv_LineSegmentDetector_Type.tp_getset = pyopencv_LineSegmentDetector_getseters;
    pyopencv_LineSegmentDetector_Type.tp_methods = pyopencv_LineSegmentDetector_methods;
}

static PyObject* pyopencv_ml_ParamGrid_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_ParamGrid %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_ml_ParamGrid_get_logStep(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->logStep);
}

static int pyopencv_ml_ParamGrid_set_logStep(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the logStep attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->logStep) ? 0 : -1;
}

static PyObject* pyopencv_ml_ParamGrid_get_maxVal(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->maxVal);
}

static int pyopencv_ml_ParamGrid_set_maxVal(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxVal attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->maxVal) ? 0 : -1;
}

static PyObject* pyopencv_ml_ParamGrid_get_minVal(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->minVal);
}

static int pyopencv_ml_ParamGrid_set_minVal(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minVal attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->minVal) ? 0 : -1;
}


static PyGetSetDef pyopencv_ml_ParamGrid_getseters[] =
{
    {(char*)"logStep", (getter)pyopencv_ml_ParamGrid_get_logStep, (setter)pyopencv_ml_ParamGrid_set_logStep, (char*)"logStep", NULL},
    {(char*)"maxVal", (getter)pyopencv_ml_ParamGrid_get_maxVal, (setter)pyopencv_ml_ParamGrid_set_maxVal, (char*)"maxVal", NULL},
    {(char*)"minVal", (getter)pyopencv_ml_ParamGrid_get_minVal, (setter)pyopencv_ml_ParamGrid_set_minVal, (char*)"minVal", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_ml_ParamGrid_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_ml_ParamGrid_specials(void)
{
    pyopencv_ml_ParamGrid_Type.tp_base = NULL;
    pyopencv_ml_ParamGrid_Type.tp_dealloc = pyopencv_ml_ParamGrid_dealloc;
    pyopencv_ml_ParamGrid_Type.tp_repr = pyopencv_ml_ParamGrid_repr;
    pyopencv_ml_ParamGrid_Type.tp_getset = pyopencv_ml_ParamGrid_getseters;
    pyopencv_ml_ParamGrid_Type.tp_methods = pyopencv_ml_ParamGrid_methods;
}

static PyObject* pyopencv_ml_TrainData_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_TrainData %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_TrainData_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int vi=0;
    int retval;

    const char* keywords[] = { "vi", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_TrainData.getCatCount", (char**)keywords, &vi) )
    {
        ERRWRAP2(retval = _self_->getCatCount(vi));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatMap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCatMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatOfs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCatOfs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getClassLabels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClassLabels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getDefaultSubstValues(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultSubstValues());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getLayout(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLayout());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getMissing(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMissing());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNAllVars(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNAllVars());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNTestSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNTestSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNTrainSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNTrainSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNVars(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNVars());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNames(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    PyObject* pyobj_names = NULL;
    vector_String names;

    const char* keywords[] = { "names", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_TrainData.getNames", (char**)keywords, &pyobj_names) &&
        pyopencv_to(pyobj_names, names, ArgInfo("names", 0)) )
    {
        ERRWRAP2(_self_->getNames(names));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getResponseType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getResponseType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSample(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    {
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx;
    int sidx=0;
    float buf=0.f;

    const char* keywords[] = { "varIdx", "sidx", "buf", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oif:ml_TrainData.getSample", (char**)keywords, &pyobj_varIdx, &sidx, &buf) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) )
    {
        ERRWRAP2(_self_->getSample(varIdx, sidx, &buf));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_varIdx = NULL;
    UMat varIdx;
    int sidx=0;
    float buf=0.f;

    const char* keywords[] = { "varIdx", "sidx", "buf", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oif:ml_TrainData.getSample", (char**)keywords, &pyobj_varIdx, &sidx, &buf) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) )
    {
        ERRWRAP2(_self_->getSample(varIdx, sidx, &buf));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSampleIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSampleIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSampleIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainSampleIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int layout=ROW_SAMPLE;
    bool compressSamples=true;
    bool compressVars=true;
    Mat retval;

    const char* keywords[] = { "layout", "compressSamples", "compressVars", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ibb:ml_TrainData.getTrainSamples", (char**)keywords, &layout, &compressSamples, &compressVars) )
    {
        ERRWRAP2(retval = _self_->getTrainSamples(layout, compressSamples, compressVars));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getValues(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    {
    int vi=0;
    PyObject* pyobj_sidx = NULL;
    Mat sidx;
    float values=0.f;

    const char* keywords[] = { "vi", "sidx", "values", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iOf:ml_TrainData.getValues", (char**)keywords, &vi, &pyobj_sidx, &values) &&
        pyopencv_to(pyobj_sidx, sidx, ArgInfo("sidx", 0)) )
    {
        ERRWRAP2(_self_->getValues(vi, sidx, &values));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    int vi=0;
    PyObject* pyobj_sidx = NULL;
    UMat sidx;
    float values=0.f;

    const char* keywords[] = { "vi", "sidx", "values", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iOf:ml_TrainData.getValues", (char**)keywords, &vi, &pyobj_sidx, &values) &&
        pyopencv_to(pyobj_sidx, sidx, ArgInfo("sidx", 0)) )
    {
        ERRWRAP2(_self_->getValues(vi, sidx, &values));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarSymbolFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarSymbolFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_setTrainTestSplit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    int count=0;
    bool shuffle=true;

    const char* keywords[] = { "count", "shuffle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|b:ml_TrainData.setTrainTestSplit", (char**)keywords, &count, &shuffle) )
    {
        ERRWRAP2(_self_->setTrainTestSplit(count, shuffle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_setTrainTestSplitRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    double ratio=0;
    bool shuffle=true;

    const char* keywords[] = { "ratio", "shuffle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d|b:ml_TrainData.setTrainTestSplitRatio", (char**)keywords, &ratio, &shuffle) )
    {
        ERRWRAP2(_self_->setTrainTestSplitRatio(ratio, shuffle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_shuffleTrainTest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::TrainData* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_TrainData_Type))
        _self_ = ((pyopencv_ml_TrainData_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->shuffleTrainTest());
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_TrainData_methods[] =
{
    {"getCatCount", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getCatCount, METH_VARARGS | METH_KEYWORDS, "getCatCount(vi) -> retval\n."},
    {"getCatMap", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getCatMap, METH_VARARGS | METH_KEYWORDS, "getCatMap() -> retval\n."},
    {"getCatOfs", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getCatOfs, METH_VARARGS | METH_KEYWORDS, "getCatOfs() -> retval\n."},
    {"getClassLabels", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getClassLabels, METH_VARARGS | METH_KEYWORDS, "getClassLabels() -> retval\n.   @brief Returns the vector of class labels\n.   \n.   The function returns vector of unique labels occurred in the responses."},
    {"getDefaultSubstValues", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getDefaultSubstValues, METH_VARARGS | METH_KEYWORDS, "getDefaultSubstValues() -> retval\n."},
    {"getLayout", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getLayout, METH_VARARGS | METH_KEYWORDS, "getLayout() -> retval\n."},
    {"getMissing", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getMissing, METH_VARARGS | METH_KEYWORDS, "getMissing() -> retval\n."},
    {"getNAllVars", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNAllVars, METH_VARARGS | METH_KEYWORDS, "getNAllVars() -> retval\n."},
    {"getNSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNSamples, METH_VARARGS | METH_KEYWORDS, "getNSamples() -> retval\n."},
    {"getNTestSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNTestSamples, METH_VARARGS | METH_KEYWORDS, "getNTestSamples() -> retval\n."},
    {"getNTrainSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNTrainSamples, METH_VARARGS | METH_KEYWORDS, "getNTrainSamples() -> retval\n."},
    {"getNVars", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNVars, METH_VARARGS | METH_KEYWORDS, "getNVars() -> retval\n."},
    {"getNames", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNames, METH_VARARGS | METH_KEYWORDS, "getNames(names) -> None\n.   @brief Returns vector of symbolic names captured in loadFromCSV()"},
    {"getNormCatResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getNormCatResponses, METH_VARARGS | METH_KEYWORDS, "getNormCatResponses() -> retval\n."},
    {"getResponseType", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getResponseType, METH_VARARGS | METH_KEYWORDS, "getResponseType() -> retval\n."},
    {"getResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getResponses, METH_VARARGS | METH_KEYWORDS, "getResponses() -> retval\n."},
    {"getSample", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getSample, METH_VARARGS | METH_KEYWORDS, "getSample(varIdx, sidx, buf) -> None\n."},
    {"getSampleWeights", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getSampleWeights, METH_VARARGS | METH_KEYWORDS, "getSampleWeights() -> retval\n."},
    {"getSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getSamples, METH_VARARGS | METH_KEYWORDS, "getSamples() -> retval\n."},
    {"getTestNormCatResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTestNormCatResponses, METH_VARARGS | METH_KEYWORDS, "getTestNormCatResponses() -> retval\n."},
    {"getTestResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTestResponses, METH_VARARGS | METH_KEYWORDS, "getTestResponses() -> retval\n."},
    {"getTestSampleIdx", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTestSampleIdx, METH_VARARGS | METH_KEYWORDS, "getTestSampleIdx() -> retval\n."},
    {"getTestSampleWeights", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTestSampleWeights, METH_VARARGS | METH_KEYWORDS, "getTestSampleWeights() -> retval\n."},
    {"getTestSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTestSamples, METH_VARARGS | METH_KEYWORDS, "getTestSamples() -> retval\n.   @brief Returns matrix of test samples"},
    {"getTrainNormCatResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTrainNormCatResponses, METH_VARARGS | METH_KEYWORDS, "getTrainNormCatResponses() -> retval\n.   @brief Returns the vector of normalized categorical responses\n.   \n.   The function returns vector of responses. Each response is integer from `0` to `<number of\n.   classes>-1`. The actual label value can be retrieved then from the class label vector, see\n.   TrainData::getClassLabels."},
    {"getTrainResponses", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTrainResponses, METH_VARARGS | METH_KEYWORDS, "getTrainResponses() -> retval\n.   @brief Returns the vector of responses\n.   \n.   The function returns ordered or the original categorical responses. Usually it's used in\n.   regression algorithms."},
    {"getTrainSampleIdx", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTrainSampleIdx, METH_VARARGS | METH_KEYWORDS, "getTrainSampleIdx() -> retval\n."},
    {"getTrainSampleWeights", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTrainSampleWeights, METH_VARARGS | METH_KEYWORDS, "getTrainSampleWeights() -> retval\n."},
    {"getTrainSamples", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getTrainSamples, METH_VARARGS | METH_KEYWORDS, "getTrainSamples([, layout[, compressSamples[, compressVars]]]) -> retval\n.   @brief Returns matrix of train samples\n.   \n.   @param layout The requested layout. If it's different from the initial one, the matrix is\n.   transposed. See ml::SampleTypes.\n.   @param compressSamples if true, the function returns only the training samples (specified by\n.   sampleIdx)\n.   @param compressVars if true, the function returns the shorter training samples, containing only\n.   the active variables.\n.   \n.   In current implementation the function tries to avoid physical data copying and returns the\n.   matrix stored inside TrainData (unless the transposition or compression is needed)."},
    {"getValues", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getValues, METH_VARARGS | METH_KEYWORDS, "getValues(vi, sidx, values) -> None\n."},
    {"getVarIdx", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getVarIdx, METH_VARARGS | METH_KEYWORDS, "getVarIdx() -> retval\n."},
    {"getVarSymbolFlags", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getVarSymbolFlags, METH_VARARGS | METH_KEYWORDS, "getVarSymbolFlags() -> retval\n."},
    {"getVarType", (PyCFunction)pyopencv_cv_ml_ml_TrainData_getVarType, METH_VARARGS | METH_KEYWORDS, "getVarType() -> retval\n."},
    {"setTrainTestSplit", (PyCFunction)pyopencv_cv_ml_ml_TrainData_setTrainTestSplit, METH_VARARGS | METH_KEYWORDS, "setTrainTestSplit(count[, shuffle]) -> None\n.   @brief Splits the training data into the training and test parts\n.   @sa TrainData::setTrainTestSplitRatio"},
    {"setTrainTestSplitRatio", (PyCFunction)pyopencv_cv_ml_ml_TrainData_setTrainTestSplitRatio, METH_VARARGS | METH_KEYWORDS, "setTrainTestSplitRatio(ratio[, shuffle]) -> None\n.   @brief Splits the training data into the training and test parts\n.   \n.   The function selects a subset of specified relative size and then returns it as the training\n.   set. If the function is not called, all the data is used for training. Please, note that for\n.   each of TrainData::getTrain\\* there is corresponding TrainData::getTest\\*, so that the test\n.   subset can be retrieved and processed as well.\n.   @sa TrainData::setTrainTestSplit"},
    {"shuffleTrainTest", (PyCFunction)pyopencv_cv_ml_ml_TrainData_shuffleTrainTest, METH_VARARGS | METH_KEYWORDS, "shuffleTrainTest() -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_ml_TrainData_specials(void)
{
    pyopencv_ml_TrainData_Type.tp_base = NULL;
    pyopencv_ml_TrainData_Type.tp_dealloc = pyopencv_ml_TrainData_dealloc;
    pyopencv_ml_TrainData_Type.tp_repr = pyopencv_ml_TrainData_repr;
    pyopencv_ml_TrainData_Type.tp_getset = pyopencv_ml_TrainData_getseters;
    pyopencv_ml_TrainData_Type.tp_methods = pyopencv_ml_TrainData_methods;
}

static PyObject* pyopencv_ml_StatModel_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_StatModel %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_StatModel_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_StatModel_calcError(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    {
    PyObject* pyobj_data = NULL;
    Ptr<TrainData> data;
    bool test=0;
    PyObject* pyobj_resp = NULL;
    Mat resp;
    float retval;

    const char* keywords[] = { "data", "test", "resp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Ob|O:ml_StatModel.calcError", (char**)keywords, &pyobj_data, &test, &pyobj_resp) &&
        pyopencv_to(pyobj_data, data, ArgInfo("data", 0)) &&
        pyopencv_to(pyobj_resp, resp, ArgInfo("resp", 1)) )
    {
        ERRWRAP2(retval = _self_->calcError(data, test, resp));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(resp));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_data = NULL;
    Ptr<TrainData> data;
    bool test=0;
    PyObject* pyobj_resp = NULL;
    UMat resp;
    float retval;

    const char* keywords[] = { "data", "test", "resp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Ob|O:ml_StatModel.calcError", (char**)keywords, &pyobj_data, &test, &pyobj_resp) &&
        pyopencv_to(pyobj_data, data, ArgInfo("data", 0)) &&
        pyopencv_to(pyobj_resp, resp, ArgInfo("resp", 1)) )
    {
        ERRWRAP2(retval = _self_->calcError(data, test, resp));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(resp));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_getVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_isClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isClassifier());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_isTrained(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isTrained());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_StatModel.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_StatModel.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_train(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::StatModel* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_StatModel_Type))
        _self_ = dynamic_cast<cv::ml::StatModel*>(((pyopencv_ml_StatModel_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    {
    PyObject* pyobj_trainData = NULL;
    Ptr<TrainData> trainData;
    int flags=0;
    bool retval;

    const char* keywords[] = { "trainData", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|i:ml_StatModel.train", (char**)keywords, &pyobj_trainData, &flags) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, flags));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:ml_StatModel.train", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) )
    {
        ERRWRAP2(retval = _self_->train(samples, layout, responses));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    UMat responses;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:ml_StatModel.train", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) )
    {
        ERRWRAP2(retval = _self_->train(samples, layout, responses));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_StatModel_methods[] =
{
    {"calcError", (PyCFunction)pyopencv_cv_ml_ml_StatModel_calcError, METH_VARARGS | METH_KEYWORDS, "calcError(data, test[, resp]) -> retval, resp\n.   @brief Computes error on the training or test dataset\n.   \n.   @param data the training data\n.   @param test if true, the error is computed over the test subset of the data, otherwise it's\n.   computed over the training subset of the data. Please note that if you loaded a completely\n.   different dataset to evaluate already trained classifier, you will probably want not to set\n.   the test subset at all with TrainData::setTrainTestSplitRatio and specify test=false, so\n.   that the error is computed for the whole new set. Yes, this sounds a bit confusing.\n.   @param resp the optional output responses.\n.   \n.   The method uses StatModel::predict to compute the error. For regression models the error is\n.   computed as RMS, for classifiers - as a percent of missclassified samples (0%-100%)."},
    {"empty", (PyCFunction)pyopencv_cv_ml_ml_StatModel_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n."},
    {"getVarCount", (PyCFunction)pyopencv_cv_ml_ml_StatModel_getVarCount, METH_VARARGS | METH_KEYWORDS, "getVarCount() -> retval\n.   @brief Returns the number of variables in training samples"},
    {"isClassifier", (PyCFunction)pyopencv_cv_ml_ml_StatModel_isClassifier, METH_VARARGS | METH_KEYWORDS, "isClassifier() -> retval\n.   @brief Returns true if the model is classifier"},
    {"isTrained", (PyCFunction)pyopencv_cv_ml_ml_StatModel_isTrained, METH_VARARGS | METH_KEYWORDS, "isTrained() -> retval\n.   @brief Returns true if the model is trained"},
    {"predict", (PyCFunction)pyopencv_cv_ml_ml_StatModel_predict, METH_VARARGS | METH_KEYWORDS, "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Predicts response(s) for the provided sample(s)\n.   \n.   @param samples The input samples, floating-point matrix\n.   @param results The optional output matrix of results.\n.   @param flags The optional flags, model-dependent. See cv::ml::StatModel::Flags."},
    {"train", (PyCFunction)pyopencv_cv_ml_ml_StatModel_train, METH_VARARGS | METH_KEYWORDS, "train(trainData[, flags]) -> retval\n.   @brief Trains the statistical model\n.   \n.   @param trainData training data that can be loaded from file using TrainData::loadFromCSV or\n.   created with TrainData::create.\n.   @param flags optional flags, depending on the model. Some of the models can be updated with the\n.   new training samples, not completely overwritten (such as NormalBayesClassifier or ANN_MLP).\n\n\n\ntrain(samples, layout, responses) -> retval\n.   @brief Trains the statistical model\n.   \n.   @param samples training samples\n.   @param layout See ml::SampleTypes.\n.   @param responses vector of responses associated with the training samples."},

    {NULL,          NULL}
};

static void pyopencv_ml_StatModel_specials(void)
{
    pyopencv_ml_StatModel_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_ml_StatModel_Type.tp_dealloc = pyopencv_ml_StatModel_dealloc;
    pyopencv_ml_StatModel_Type.tp_repr = pyopencv_ml_StatModel_repr;
    pyopencv_ml_StatModel_Type.tp_getset = pyopencv_ml_StatModel_getseters;
    pyopencv_ml_StatModel_Type.tp_methods = pyopencv_ml_StatModel_methods;
}

static PyObject* pyopencv_ml_NormalBayesClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_NormalBayesClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_NormalBayesClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_NormalBayesClassifier_predictProb(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::NormalBayesClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_NormalBayesClassifier_Type))
        _self_ = dynamic_cast<cv::ml::NormalBayesClassifier*>(((pyopencv_ml_NormalBayesClassifier_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_NormalBayesClassifier' or its derivative)");
    {
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;
    PyObject* pyobj_outputProbs = NULL;
    Mat outputProbs;
    int flags=0;
    float retval;

    const char* keywords[] = { "inputs", "outputs", "outputProbs", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:ml_NormalBayesClassifier.predictProb", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_outputProbs, &flags) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_outputProbs, outputProbs, ArgInfo("outputProbs", 1)) )
    {
        ERRWRAP2(retval = _self_->predictProb(inputs, outputs, outputProbs, flags));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(outputs), pyopencv_from(outputProbs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    UMat inputs;
    PyObject* pyobj_outputs = NULL;
    UMat outputs;
    PyObject* pyobj_outputProbs = NULL;
    UMat outputProbs;
    int flags=0;
    float retval;

    const char* keywords[] = { "inputs", "outputs", "outputProbs", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:ml_NormalBayesClassifier.predictProb", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_outputProbs, &flags) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_outputProbs, outputProbs, ArgInfo("outputProbs", 1)) )
    {
        ERRWRAP2(retval = _self_->predictProb(inputs, outputs, outputProbs, flags));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(outputs), pyopencv_from(outputProbs));
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_NormalBayesClassifier_methods[] =
{
    {"predictProb", (PyCFunction)pyopencv_cv_ml_ml_NormalBayesClassifier_predictProb, METH_VARARGS | METH_KEYWORDS, "predictProb(inputs[, outputs[, outputProbs[, flags]]]) -> retval, outputs, outputProbs\n.   @brief Predicts the response for sample(s).\n.   \n.   The method estimates the most probable classes for input vectors. Input vectors (one or more)\n.   are stored as rows of the matrix inputs. In case of multiple input vectors, there should be one\n.   output vector outputs. The predicted class for a single input vector is returned by the method.\n.   The vector outputProbs contains the output probabilities corresponding to each element of\n.   result."},

    {NULL,          NULL}
};

static void pyopencv_ml_NormalBayesClassifier_specials(void)
{
    pyopencv_ml_NormalBayesClassifier_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_NormalBayesClassifier_Type.tp_dealloc = pyopencv_ml_NormalBayesClassifier_dealloc;
    pyopencv_ml_NormalBayesClassifier_Type.tp_repr = pyopencv_ml_NormalBayesClassifier_repr;
    pyopencv_ml_NormalBayesClassifier_Type.tp_getset = pyopencv_ml_NormalBayesClassifier_getseters;
    pyopencv_ml_NormalBayesClassifier_Type.tp_methods = pyopencv_ml_NormalBayesClassifier_methods;
}

static PyObject* pyopencv_ml_KNearest_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_KNearest %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_KNearest_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_KNearest_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    Mat results;
    PyObject* pyobj_neighborResponses = NULL;
    Mat neighborResponses;
    PyObject* pyobj_dist = NULL;
    Mat dist;
    float retval;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dist", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:ml_KNearest.findNearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dist) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses, ArgInfo("neighborResponses", 1)) &&
        pyopencv_to(pyobj_dist, dist, ArgInfo("dist", 1)) )
    {
        ERRWRAP2(retval = _self_->findNearest(samples, k, results, neighborResponses, dist));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dist));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    UMat results;
    PyObject* pyobj_neighborResponses = NULL;
    UMat neighborResponses;
    PyObject* pyobj_dist = NULL;
    UMat dist;
    float retval;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dist", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:ml_KNearest.findNearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dist) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses, ArgInfo("neighborResponses", 1)) &&
        pyopencv_to(pyobj_dist, dist, ArgInfo("dist", 1)) )
    {
        ERRWRAP2(retval = _self_->findNearest(samples, k, results, neighborResponses, dist));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dist));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getAlgorithmType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithmType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getDefaultK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultK());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getEmax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEmax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getIsClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIsClassifier());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setAlgorithmType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setAlgorithmType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAlgorithmType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setDefaultK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setDefaultK", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setDefaultK(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setEmax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setEmax", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setEmax(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setIsClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::KNearest* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_KNearest_Type))
        _self_ = dynamic_cast<cv::ml::KNearest*>(((pyopencv_ml_KNearest_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_KNearest.setIsClassifier", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setIsClassifier(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_KNearest_methods[] =
{
    {"findNearest", (PyCFunction)pyopencv_cv_ml_ml_KNearest_findNearest, METH_VARARGS | METH_KEYWORDS, "findNearest(samples, k[, results[, neighborResponses[, dist]]]) -> retval, results, neighborResponses, dist\n.   @brief Finds the neighbors and predicts responses for input vectors.\n.   \n.   @param samples Input samples stored by rows. It is a single-precision floating-point matrix of\n.   `<number_of_samples> * k` size.\n.   @param k Number of used nearest neighbors. Should be greater than 1.\n.   @param results Vector with results of prediction (regression or classification) for each input\n.   sample. It is a single-precision floating-point vector with `<number_of_samples>` elements.\n.   @param neighborResponses Optional output values for corresponding neighbors. It is a single-\n.   precision floating-point matrix of `<number_of_samples> * k` size.\n.   @param dist Optional output distances from the input vectors to the corresponding neighbors. It\n.   is a single-precision floating-point matrix of `<number_of_samples> * k` size.\n.   \n.   For each input vector (a row of the matrix samples), the method finds the k nearest neighbors.\n.   In case of regression, the predicted result is a mean value of the particular vector's neighbor\n.   responses. In case of classification, the class is determined by voting.\n.   \n.   For each input vector, the neighbors are sorted by their distances to the vector.\n.   \n.   In case of C++ interface you can use output pointers to empty matrices and the function will\n.   allocate memory itself.\n.   \n.   If only a single input vector is passed, all output matrices are optional and the predicted\n.   value is returned by the method.\n.   \n.   The function is parallelized with the TBB library."},
    {"getAlgorithmType", (PyCFunction)pyopencv_cv_ml_ml_KNearest_getAlgorithmType, METH_VARARGS | METH_KEYWORDS, "getAlgorithmType() -> retval\n.   @see setAlgorithmType"},
    {"getDefaultK", (PyCFunction)pyopencv_cv_ml_ml_KNearest_getDefaultK, METH_VARARGS | METH_KEYWORDS, "getDefaultK() -> retval\n.   @see setDefaultK"},
    {"getEmax", (PyCFunction)pyopencv_cv_ml_ml_KNearest_getEmax, METH_VARARGS | METH_KEYWORDS, "getEmax() -> retval\n.   @see setEmax"},
    {"getIsClassifier", (PyCFunction)pyopencv_cv_ml_ml_KNearest_getIsClassifier, METH_VARARGS | METH_KEYWORDS, "getIsClassifier() -> retval\n.   @see setIsClassifier"},
    {"setAlgorithmType", (PyCFunction)pyopencv_cv_ml_ml_KNearest_setAlgorithmType, METH_VARARGS | METH_KEYWORDS, "setAlgorithmType(val) -> None\n.   @copybrief getAlgorithmType @see getAlgorithmType"},
    {"setDefaultK", (PyCFunction)pyopencv_cv_ml_ml_KNearest_setDefaultK, METH_VARARGS | METH_KEYWORDS, "setDefaultK(val) -> None\n.   @copybrief getDefaultK @see getDefaultK"},
    {"setEmax", (PyCFunction)pyopencv_cv_ml_ml_KNearest_setEmax, METH_VARARGS | METH_KEYWORDS, "setEmax(val) -> None\n.   @copybrief getEmax @see getEmax"},
    {"setIsClassifier", (PyCFunction)pyopencv_cv_ml_ml_KNearest_setIsClassifier, METH_VARARGS | METH_KEYWORDS, "setIsClassifier(val) -> None\n.   @copybrief getIsClassifier @see getIsClassifier"},

    {NULL,          NULL}
};

static void pyopencv_ml_KNearest_specials(void)
{
    pyopencv_ml_KNearest_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_KNearest_Type.tp_dealloc = pyopencv_ml_KNearest_dealloc;
    pyopencv_ml_KNearest_Type.tp_repr = pyopencv_ml_KNearest_repr;
    pyopencv_ml_KNearest_Type.tp_getset = pyopencv_ml_KNearest_getseters;
    pyopencv_ml_KNearest_Type.tp_methods = pyopencv_ml_KNearest_methods;
}

static PyObject* pyopencv_ml_SVM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_SVM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_SVM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_SVM_getC(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getC());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getClassWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClassWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getCoef0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCoef0());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getDecisionFunction(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    {
    int i=0;
    PyObject* pyobj_alpha = NULL;
    Mat alpha;
    PyObject* pyobj_svidx = NULL;
    Mat svidx;
    double retval;

    const char* keywords[] = { "i", "alpha", "svidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|OO:ml_SVM.getDecisionFunction", (char**)keywords, &i, &pyobj_alpha, &pyobj_svidx) &&
        pyopencv_to(pyobj_alpha, alpha, ArgInfo("alpha", 1)) &&
        pyopencv_to(pyobj_svidx, svidx, ArgInfo("svidx", 1)) )
    {
        ERRWRAP2(retval = _self_->getDecisionFunction(i, alpha, svidx));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(alpha), pyopencv_from(svidx));
    }
    }
    PyErr_Clear();

    {
    int i=0;
    PyObject* pyobj_alpha = NULL;
    UMat alpha;
    PyObject* pyobj_svidx = NULL;
    UMat svidx;
    double retval;

    const char* keywords[] = { "i", "alpha", "svidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|OO:ml_SVM.getDecisionFunction", (char**)keywords, &i, &pyobj_alpha, &pyobj_svidx) &&
        pyopencv_to(pyobj_alpha, alpha, ArgInfo("alpha", 1)) &&
        pyopencv_to(pyobj_svidx, svidx, ArgInfo("svidx", 1)) )
    {
        ERRWRAP2(retval = _self_->getDecisionFunction(i, alpha, svidx));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(alpha), pyopencv_from(svidx));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getDegree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDegree());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getKernelType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getKernelType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getNu(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNu());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getP(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getSupportVectors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSupportVectors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    cv::TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getUncompressedSupportVectors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUncompressedSupportVectors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setC(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setC", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setC(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setClassWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setClassWeights", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setClassWeights(val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setClassWeights", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setClassWeights(val));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setCoef0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setCoef0", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCoef0(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setDegree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setDegree", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setDegree(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setGamma", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setKernel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    int kernelType=0;

    const char* keywords[] = { "kernelType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVM.setKernel", (char**)keywords, &kernelType) )
    {
        ERRWRAP2(_self_->setKernel(kernelType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setNu(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setNu", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setNu(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setP(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setP", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setP(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVM.setType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_trainAuto(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVM_Type))
        _self_ = dynamic_cast<cv::ml::SVM*>(((pyopencv_ml_SVM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    int kFold=10;
    PyObject* pyobj_Cgrid = NULL;
    Ptr<ParamGrid> Cgrid=SVM::getDefaultGridPtr(SVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    Ptr<ParamGrid> gammaGrid=SVM::getDefaultGridPtr(SVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    Ptr<ParamGrid> pGrid=SVM::getDefaultGridPtr(SVM::P);
    PyObject* pyobj_nuGrid = NULL;
    Ptr<ParamGrid> nuGrid=SVM::getDefaultGridPtr(SVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    Ptr<ParamGrid> coeffGrid=SVM::getDefaultGridPtr(SVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    Ptr<ParamGrid> degreeGrid=SVM::getDefaultGridPtr(SVM::DEGREE);
    bool balanced=false;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", "kFold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|iOOOOOOb:ml_SVM.trainAuto", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &kFold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_Cgrid, Cgrid, ArgInfo("Cgrid", 0)) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid, ArgInfo("gammaGrid", 0)) &&
        pyopencv_to(pyobj_pGrid, pGrid, ArgInfo("pGrid", 0)) &&
        pyopencv_to(pyobj_nuGrid, nuGrid, ArgInfo("nuGrid", 0)) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid, ArgInfo("coeffGrid", 0)) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid, ArgInfo("degreeGrid", 0)) )
    {
        ERRWRAP2(retval = _self_->trainAuto(samples, layout, responses, kFold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    UMat responses;
    int kFold=10;
    PyObject* pyobj_Cgrid = NULL;
    Ptr<ParamGrid> Cgrid=SVM::getDefaultGridPtr(SVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    Ptr<ParamGrid> gammaGrid=SVM::getDefaultGridPtr(SVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    Ptr<ParamGrid> pGrid=SVM::getDefaultGridPtr(SVM::P);
    PyObject* pyobj_nuGrid = NULL;
    Ptr<ParamGrid> nuGrid=SVM::getDefaultGridPtr(SVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    Ptr<ParamGrid> coeffGrid=SVM::getDefaultGridPtr(SVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    Ptr<ParamGrid> degreeGrid=SVM::getDefaultGridPtr(SVM::DEGREE);
    bool balanced=false;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", "kFold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|iOOOOOOb:ml_SVM.trainAuto", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &kFold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_Cgrid, Cgrid, ArgInfo("Cgrid", 0)) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid, ArgInfo("gammaGrid", 0)) &&
        pyopencv_to(pyobj_pGrid, pGrid, ArgInfo("pGrid", 0)) &&
        pyopencv_to(pyobj_nuGrid, nuGrid, ArgInfo("nuGrid", 0)) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid, ArgInfo("coeffGrid", 0)) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid, ArgInfo("degreeGrid", 0)) )
    {
        ERRWRAP2(retval = _self_->trainAuto(samples, layout, responses, kFold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_SVM_methods[] =
{
    {"getC", (PyCFunction)pyopencv_cv_ml_ml_SVM_getC, METH_VARARGS | METH_KEYWORDS, "getC() -> retval\n.   @see setC"},
    {"getClassWeights", (PyCFunction)pyopencv_cv_ml_ml_SVM_getClassWeights, METH_VARARGS | METH_KEYWORDS, "getClassWeights() -> retval\n.   @see setClassWeights"},
    {"getCoef0", (PyCFunction)pyopencv_cv_ml_ml_SVM_getCoef0, METH_VARARGS | METH_KEYWORDS, "getCoef0() -> retval\n.   @see setCoef0"},
    {"getDecisionFunction", (PyCFunction)pyopencv_cv_ml_ml_SVM_getDecisionFunction, METH_VARARGS | METH_KEYWORDS, "getDecisionFunction(i[, alpha[, svidx]]) -> retval, alpha, svidx\n.   @brief Retrieves the decision function\n.   \n.   @param i the index of the decision function. If the problem solved is regression, 1-class or\n.   2-class classification, then there will be just one decision function and the index should\n.   always be 0. Otherwise, in the case of N-class classification, there will be \\f$N(N-1)/2\\f$\n.   decision functions.\n.   @param alpha the optional output vector for weights, corresponding to different support vectors.\n.   In the case of linear %SVM all the alpha's will be 1's.\n.   @param svidx the optional output vector of indices of support vectors within the matrix of\n.   support vectors (which can be retrieved by SVM::getSupportVectors). In the case of linear\n.   %SVM each decision function consists of a single \"compressed\" support vector.\n.   \n.   The method returns rho parameter of the decision function, a scalar subtracted from the weighted\n.   sum of kernel responses."},
    {"getDegree", (PyCFunction)pyopencv_cv_ml_ml_SVM_getDegree, METH_VARARGS | METH_KEYWORDS, "getDegree() -> retval\n.   @see setDegree"},
    {"getGamma", (PyCFunction)pyopencv_cv_ml_ml_SVM_getGamma, METH_VARARGS | METH_KEYWORDS, "getGamma() -> retval\n.   @see setGamma"},
    {"getKernelType", (PyCFunction)pyopencv_cv_ml_ml_SVM_getKernelType, METH_VARARGS | METH_KEYWORDS, "getKernelType() -> retval\n.   Type of a %SVM kernel.\n.   See SVM::KernelTypes. Default value is SVM::RBF."},
    {"getNu", (PyCFunction)pyopencv_cv_ml_ml_SVM_getNu, METH_VARARGS | METH_KEYWORDS, "getNu() -> retval\n.   @see setNu"},
    {"getP", (PyCFunction)pyopencv_cv_ml_ml_SVM_getP, METH_VARARGS | METH_KEYWORDS, "getP() -> retval\n.   @see setP"},
    {"getSupportVectors", (PyCFunction)pyopencv_cv_ml_ml_SVM_getSupportVectors, METH_VARARGS | METH_KEYWORDS, "getSupportVectors() -> retval\n.   @brief Retrieves all the support vectors\n.   \n.   The method returns all the support vectors as a floating-point matrix, where support vectors are\n.   stored as matrix rows."},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_SVM_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getType", (PyCFunction)pyopencv_cv_ml_ml_SVM_getType, METH_VARARGS | METH_KEYWORDS, "getType() -> retval\n.   @see setType"},
    {"getUncompressedSupportVectors", (PyCFunction)pyopencv_cv_ml_ml_SVM_getUncompressedSupportVectors, METH_VARARGS | METH_KEYWORDS, "getUncompressedSupportVectors() -> retval\n.   @brief Retrieves all the uncompressed support vectors of a linear %SVM\n.   \n.   The method returns all the uncompressed support vectors of a linear %SVM that the compressed\n.   support vector, used for prediction, was derived from. They are returned in a floating-point\n.   matrix, where the support vectors are stored as matrix rows."},
    {"setC", (PyCFunction)pyopencv_cv_ml_ml_SVM_setC, METH_VARARGS | METH_KEYWORDS, "setC(val) -> None\n.   @copybrief getC @see getC"},
    {"setClassWeights", (PyCFunction)pyopencv_cv_ml_ml_SVM_setClassWeights, METH_VARARGS | METH_KEYWORDS, "setClassWeights(val) -> None\n.   @copybrief getClassWeights @see getClassWeights"},
    {"setCoef0", (PyCFunction)pyopencv_cv_ml_ml_SVM_setCoef0, METH_VARARGS | METH_KEYWORDS, "setCoef0(val) -> None\n.   @copybrief getCoef0 @see getCoef0"},
    {"setDegree", (PyCFunction)pyopencv_cv_ml_ml_SVM_setDegree, METH_VARARGS | METH_KEYWORDS, "setDegree(val) -> None\n.   @copybrief getDegree @see getDegree"},
    {"setGamma", (PyCFunction)pyopencv_cv_ml_ml_SVM_setGamma, METH_VARARGS | METH_KEYWORDS, "setGamma(val) -> None\n.   @copybrief getGamma @see getGamma"},
    {"setKernel", (PyCFunction)pyopencv_cv_ml_ml_SVM_setKernel, METH_VARARGS | METH_KEYWORDS, "setKernel(kernelType) -> None\n.   Initialize with one of predefined kernels.\n.   See SVM::KernelTypes."},
    {"setNu", (PyCFunction)pyopencv_cv_ml_ml_SVM_setNu, METH_VARARGS | METH_KEYWORDS, "setNu(val) -> None\n.   @copybrief getNu @see getNu"},
    {"setP", (PyCFunction)pyopencv_cv_ml_ml_SVM_setP, METH_VARARGS | METH_KEYWORDS, "setP(val) -> None\n.   @copybrief getP @see getP"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_SVM_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setType", (PyCFunction)pyopencv_cv_ml_ml_SVM_setType, METH_VARARGS | METH_KEYWORDS, "setType(val) -> None\n.   @copybrief getType @see getType"},
    {"trainAuto", (PyCFunction)pyopencv_cv_ml_ml_SVM_trainAuto, METH_VARARGS | METH_KEYWORDS, "trainAuto(samples, layout, responses[, kFold[, Cgrid[, gammaGrid[, pGrid[, nuGrid[, coeffGrid[, degreeGrid[, balanced]]]]]]]]) -> retval\n.   @brief Trains an %SVM with optimal parameters\n.   \n.   @param samples training samples\n.   @param layout See ml::SampleTypes.\n.   @param responses vector of responses associated with the training samples.\n.   @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One\n.   subset is used to test the model, the others form the train set. So, the %SVM algorithm is\n.   @param Cgrid grid for C\n.   @param gammaGrid grid for gamma\n.   @param pGrid grid for p\n.   @param nuGrid grid for nu\n.   @param coeffGrid grid for coeff\n.   @param degreeGrid grid for degree\n.   @param balanced If true and the problem is 2-class classification then the method creates more\n.   balanced cross-validation subsets that is proportions between classes in subsets are close\n.   to such proportion in the whole train dataset.\n.   \n.   The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,\n.   nu, coef0, degree. Parameters are considered optimal when the cross-validation\n.   estimate of the test set error is minimal.\n.   \n.   This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only\n.   offers rudimentary parameter options.\n.   \n.   This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the\n.   regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and\n.   the usual %SVM with parameters specified in params is executed."},

    {NULL,          NULL}
};

static void pyopencv_ml_SVM_specials(void)
{
    pyopencv_ml_SVM_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_SVM_Type.tp_dealloc = pyopencv_ml_SVM_dealloc;
    pyopencv_ml_SVM_Type.tp_repr = pyopencv_ml_SVM_repr;
    pyopencv_ml_SVM_Type.tp_getset = pyopencv_ml_SVM_getseters;
    pyopencv_ml_SVM_Type.tp_methods = pyopencv_ml_SVM_methods;
}

static PyObject* pyopencv_ml_EM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_EM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_EM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_EM_getClustersNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClustersNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getCovarianceMatrixType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCovarianceMatrixType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getCovs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_covs = NULL;
    vector_Mat covs;

    const char* keywords[] = { "covs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:ml_EM.getCovs", (char**)keywords, &pyobj_covs) &&
        pyopencv_to(pyobj_covs, covs, ArgInfo("covs", 1)) )
    {
        ERRWRAP2(_self_->getCovs(covs));
        return pyopencv_from(covs);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_covs = NULL;
    vector_Mat covs;

    const char* keywords[] = { "covs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:ml_EM.getCovs", (char**)keywords, &pyobj_covs) &&
        pyopencv_to(pyobj_covs, covs, ArgInfo("covs", 1)) )
    {
        ERRWRAP2(_self_->getCovs(covs));
        return pyopencv_from(covs);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getMeans(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMeans());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_EM.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_EM.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_predict2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    Vec2d retval;

    const char* keywords[] = { "sample", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_EM.predict2", (char**)keywords, &pyobj_sample, &pyobj_probs) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict2(sample, probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_sample = NULL;
    UMat sample;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    Vec2d retval;

    const char* keywords[] = { "sample", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_EM.predict2", (char**)keywords, &pyobj_sample, &pyobj_probs) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict2(sample, probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setClustersNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_EM.setClustersNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setClustersNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setCovarianceMatrixType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_EM.setCovarianceMatrixType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCovarianceMatrixType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_EM.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainE(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_means0 = NULL;
    Mat means0;
    PyObject* pyobj_covs0 = NULL;
    Mat covs0;
    PyObject* pyobj_weights0 = NULL;
    Mat weights0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "means0", "covs0", "weights0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOO:ml_EM.trainE", (char**)keywords, &pyobj_samples, &pyobj_means0, &pyobj_covs0, &pyobj_weights0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_means0, means0, ArgInfo("means0", 0)) &&
        pyopencv_to(pyobj_covs0, covs0, ArgInfo("covs0", 0)) &&
        pyopencv_to(pyobj_weights0, weights0, ArgInfo("weights0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_means0 = NULL;
    UMat means0;
    PyObject* pyobj_covs0 = NULL;
    UMat covs0;
    PyObject* pyobj_weights0 = NULL;
    UMat weights0;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "means0", "covs0", "weights0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOO:ml_EM.trainE", (char**)keywords, &pyobj_samples, &pyobj_means0, &pyobj_covs0, &pyobj_weights0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_means0, means0, ArgInfo("means0", 0)) &&
        pyopencv_to(pyobj_covs0, covs0, ArgInfo("covs0", 0)) &&
        pyopencv_to(pyobj_weights0, weights0, ArgInfo("weights0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainEM(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:ml_EM.trainEM", (char**)keywords, &pyobj_samples, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainEM(samples, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:ml_EM.trainEM", (char**)keywords, &pyobj_samples, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainEM(samples, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainM(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::EM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_EM_Type))
        _self_ = dynamic_cast<cv::ml::EM*>(((pyopencv_ml_EM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_probs0 = NULL;
    Mat probs0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "probs0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:ml_EM.trainM", (char**)keywords, &pyobj_samples, &pyobj_probs0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_probs0, probs0, ArgInfo("probs0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainM(samples, probs0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_probs0 = NULL;
    UMat probs0;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "probs0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:ml_EM.trainM", (char**)keywords, &pyobj_samples, &pyobj_probs0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_probs0, probs0, ArgInfo("probs0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainM(samples, probs0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_EM_methods[] =
{
    {"getClustersNumber", (PyCFunction)pyopencv_cv_ml_ml_EM_getClustersNumber, METH_VARARGS | METH_KEYWORDS, "getClustersNumber() -> retval\n.   @see setClustersNumber"},
    {"getCovarianceMatrixType", (PyCFunction)pyopencv_cv_ml_ml_EM_getCovarianceMatrixType, METH_VARARGS | METH_KEYWORDS, "getCovarianceMatrixType() -> retval\n.   @see setCovarianceMatrixType"},
    {"getCovs", (PyCFunction)pyopencv_cv_ml_ml_EM_getCovs, METH_VARARGS | METH_KEYWORDS, "getCovs([, covs]) -> covs\n.   @brief Returns covariation matrices\n.   \n.   Returns vector of covariation matrices. Number of matrices is the number of gaussian mixtures,\n.   each matrix is a square floating-point matrix NxN, where N is the space dimensionality."},
    {"getMeans", (PyCFunction)pyopencv_cv_ml_ml_EM_getMeans, METH_VARARGS | METH_KEYWORDS, "getMeans() -> retval\n.   @brief Returns the cluster centers (means of the Gaussian mixture)\n.   \n.   Returns matrix with the number of rows equal to the number of mixtures and number of columns\n.   equal to the space dimensionality."},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_EM_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getWeights", (PyCFunction)pyopencv_cv_ml_ml_EM_getWeights, METH_VARARGS | METH_KEYWORDS, "getWeights() -> retval\n.   @brief Returns weights of the mixtures\n.   \n.   Returns vector with the number of elements equal to the number of mixtures."},
    {"predict", (PyCFunction)pyopencv_cv_ml_ml_EM_predict, METH_VARARGS | METH_KEYWORDS, "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Returns posterior probabilities for the provided samples\n.   \n.   @param samples The input samples, floating-point matrix\n.   @param results The optional output \\f$ nSamples \\times nClusters\\f$ matrix of results. It contains\n.   posterior probabilities for each sample from the input\n.   @param flags This parameter will be ignored"},
    {"predict2", (PyCFunction)pyopencv_cv_ml_ml_EM_predict2, METH_VARARGS | METH_KEYWORDS, "predict2(sample[, probs]) -> retval, probs\n.   @brief Returns a likelihood logarithm value and an index of the most probable mixture component\n.   for the given sample.\n.   \n.   @param sample A sample for classification. It should be a one-channel matrix of\n.   \\f$1 \\times dims\\f$ or \\f$dims \\times 1\\f$ size.\n.   @param probs Optional output matrix that contains posterior probabilities of each component\n.   given the sample. It has \\f$1 \\times nclusters\\f$ size and CV_64FC1 type.\n.   \n.   The method returns a two-element double vector. Zero element is a likelihood logarithm value for\n.   the sample. First element is an index of the most probable mixture component for the given\n.   sample."},
    {"setClustersNumber", (PyCFunction)pyopencv_cv_ml_ml_EM_setClustersNumber, METH_VARARGS | METH_KEYWORDS, "setClustersNumber(val) -> None\n.   @copybrief getClustersNumber @see getClustersNumber"},
    {"setCovarianceMatrixType", (PyCFunction)pyopencv_cv_ml_ml_EM_setCovarianceMatrixType, METH_VARARGS | METH_KEYWORDS, "setCovarianceMatrixType(val) -> None\n.   @copybrief getCovarianceMatrixType @see getCovarianceMatrixType"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_EM_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"trainE", (PyCFunction)pyopencv_cv_ml_ml_EM_trainE, METH_VARARGS | METH_KEYWORDS, "trainE(samples, means0[, covs0[, weights0[, logLikelihoods[, labels[, probs]]]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.   This variation starts with Expectation step. You need to provide initial means \\f$a_k\\f$ of\n.   mixture components. Optionally you can pass initial weights \\f$\\pi_k\\f$ and covariance matrices\n.   \\f$S_k\\f$ of mixture components.\n.   \n.   @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.   one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.   it will be converted to the inner matrix of such type for the further computing.\n.   @param means0 Initial means \\f$a_k\\f$ of mixture components. It is a one-channel matrix of\n.   \\f$nclusters \\times dims\\f$ size. If the matrix does not have CV_64F type it will be\n.   converted to the inner matrix of such type for the further computing.\n.   @param covs0 The vector of initial covariance matrices \\f$S_k\\f$ of mixture components. Each of\n.   covariance matrices is a one-channel matrix of \\f$dims \\times dims\\f$ size. If the matrices\n.   do not have CV_64F type they will be converted to the inner matrices of such type for the\n.   further computing.\n.   @param weights0 Initial weights \\f$\\pi_k\\f$ of mixture components. It should be a one-channel\n.   floating-point matrix with \\f$1 \\times nclusters\\f$ or \\f$nclusters \\times 1\\f$ size.\n.   @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.   each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.   @param labels The optional output \"class label\" for each sample:\n.   \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.   mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.   @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.   mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.   CV_64FC1 type."},
    {"trainEM", (PyCFunction)pyopencv_cv_ml_ml_EM_trainEM, METH_VARARGS | METH_KEYWORDS, "trainEM(samples[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.   This variation starts with Expectation step. Initial values of the model parameters will be\n.   estimated by the k-means algorithm.\n.   \n.   Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take\n.   responses (class labels or function values) as input. Instead, it computes the *Maximum\n.   Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the\n.   parameters inside the structure: \\f$p_{i,k}\\f$ in probs, \\f$a_k\\f$ in means , \\f$S_k\\f$ in\n.   covs[k], \\f$\\pi_k\\f$ in weights , and optionally computes the output \"class label\" for each\n.   sample: \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most\n.   probable mixture component for each sample).\n.   \n.   The trained model can be used further for prediction, just like any other classifier. The\n.   trained model is similar to the NormalBayesClassifier.\n.   \n.   @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.   one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.   it will be converted to the inner matrix of such type for the further computing.\n.   @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.   each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.   @param labels The optional output \"class label\" for each sample:\n.   \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.   mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.   @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.   mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.   CV_64FC1 type."},
    {"trainM", (PyCFunction)pyopencv_cv_ml_ml_EM_trainM, METH_VARARGS | METH_KEYWORDS, "trainM(samples, probs0[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.   This variation starts with Maximization step. You need to provide initial probabilities\n.   \\f$p_{i,k}\\f$ to use this option.\n.   \n.   @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.   one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.   it will be converted to the inner matrix of such type for the further computing.\n.   @param probs0\n.   @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.   each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.   @param labels The optional output \"class label\" for each sample:\n.   \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.   mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.   @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.   mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.   CV_64FC1 type."},

    {NULL,          NULL}
};

static void pyopencv_ml_EM_specials(void)
{
    pyopencv_ml_EM_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_EM_Type.tp_dealloc = pyopencv_ml_EM_dealloc;
    pyopencv_ml_EM_Type.tp_repr = pyopencv_ml_EM_repr;
    pyopencv_ml_EM_Type.tp_getset = pyopencv_ml_EM_getseters;
    pyopencv_ml_EM_Type.tp_methods = pyopencv_ml_EM_methods;
}

static PyObject* pyopencv_ml_DTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_DTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_DTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_DTrees_getCVFolds(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCVFolds());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMaxCategories(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxCategories());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMaxDepth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxDepth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMinSampleCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinSampleCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getPriors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPriors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getRegressionAccuracy(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRegressionAccuracy());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getTruncatePrunedTree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTruncatePrunedTree());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getUse1SERule(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUse1SERule());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getUseSurrogates(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseSurrogates());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setCVFolds(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setCVFolds", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCVFolds(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMaxCategories(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMaxCategories", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMaxCategories(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMaxDepth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMaxDepth", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMaxDepth(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMinSampleCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMinSampleCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMinSampleCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setPriors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_DTrees.setPriors", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPriors(val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_DTrees.setPriors", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPriors(val));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setRegressionAccuracy(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_DTrees.setRegressionAccuracy", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRegressionAccuracy(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setTruncatePrunedTree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setTruncatePrunedTree", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTruncatePrunedTree(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setUse1SERule(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setUse1SERule", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUse1SERule(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setUseSurrogates(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::DTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_DTrees_Type))
        _self_ = dynamic_cast<cv::ml::DTrees*>(((pyopencv_ml_DTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setUseSurrogates", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUseSurrogates(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_DTrees_methods[] =
{
    {"getCVFolds", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getCVFolds, METH_VARARGS | METH_KEYWORDS, "getCVFolds() -> retval\n.   @see setCVFolds"},
    {"getMaxCategories", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getMaxCategories, METH_VARARGS | METH_KEYWORDS, "getMaxCategories() -> retval\n.   @see setMaxCategories"},
    {"getMaxDepth", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getMaxDepth, METH_VARARGS | METH_KEYWORDS, "getMaxDepth() -> retval\n.   @see setMaxDepth"},
    {"getMinSampleCount", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getMinSampleCount, METH_VARARGS | METH_KEYWORDS, "getMinSampleCount() -> retval\n.   @see setMinSampleCount"},
    {"getPriors", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getPriors, METH_VARARGS | METH_KEYWORDS, "getPriors() -> retval\n.   @see setPriors"},
    {"getRegressionAccuracy", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getRegressionAccuracy, METH_VARARGS | METH_KEYWORDS, "getRegressionAccuracy() -> retval\n.   @see setRegressionAccuracy"},
    {"getTruncatePrunedTree", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getTruncatePrunedTree, METH_VARARGS | METH_KEYWORDS, "getTruncatePrunedTree() -> retval\n.   @see setTruncatePrunedTree"},
    {"getUse1SERule", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getUse1SERule, METH_VARARGS | METH_KEYWORDS, "getUse1SERule() -> retval\n.   @see setUse1SERule"},
    {"getUseSurrogates", (PyCFunction)pyopencv_cv_ml_ml_DTrees_getUseSurrogates, METH_VARARGS | METH_KEYWORDS, "getUseSurrogates() -> retval\n.   @see setUseSurrogates"},
    {"setCVFolds", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setCVFolds, METH_VARARGS | METH_KEYWORDS, "setCVFolds(val) -> None\n.   @copybrief getCVFolds @see getCVFolds"},
    {"setMaxCategories", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setMaxCategories, METH_VARARGS | METH_KEYWORDS, "setMaxCategories(val) -> None\n.   @copybrief getMaxCategories @see getMaxCategories"},
    {"setMaxDepth", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setMaxDepth, METH_VARARGS | METH_KEYWORDS, "setMaxDepth(val) -> None\n.   @copybrief getMaxDepth @see getMaxDepth"},
    {"setMinSampleCount", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setMinSampleCount, METH_VARARGS | METH_KEYWORDS, "setMinSampleCount(val) -> None\n.   @copybrief getMinSampleCount @see getMinSampleCount"},
    {"setPriors", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setPriors, METH_VARARGS | METH_KEYWORDS, "setPriors(val) -> None\n.   @copybrief getPriors @see getPriors"},
    {"setRegressionAccuracy", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setRegressionAccuracy, METH_VARARGS | METH_KEYWORDS, "setRegressionAccuracy(val) -> None\n.   @copybrief getRegressionAccuracy @see getRegressionAccuracy"},
    {"setTruncatePrunedTree", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setTruncatePrunedTree, METH_VARARGS | METH_KEYWORDS, "setTruncatePrunedTree(val) -> None\n.   @copybrief getTruncatePrunedTree @see getTruncatePrunedTree"},
    {"setUse1SERule", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setUse1SERule, METH_VARARGS | METH_KEYWORDS, "setUse1SERule(val) -> None\n.   @copybrief getUse1SERule @see getUse1SERule"},
    {"setUseSurrogates", (PyCFunction)pyopencv_cv_ml_ml_DTrees_setUseSurrogates, METH_VARARGS | METH_KEYWORDS, "setUseSurrogates(val) -> None\n.   @copybrief getUseSurrogates @see getUseSurrogates"},

    {NULL,          NULL}
};

static void pyopencv_ml_DTrees_specials(void)
{
    pyopencv_ml_DTrees_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_DTrees_Type.tp_dealloc = pyopencv_ml_DTrees_dealloc;
    pyopencv_ml_DTrees_Type.tp_repr = pyopencv_ml_DTrees_repr;
    pyopencv_ml_DTrees_Type.tp_getset = pyopencv_ml_DTrees_getseters;
    pyopencv_ml_DTrees_Type.tp_methods = pyopencv_ml_DTrees_methods;
}

static PyObject* pyopencv_ml_RTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_RTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_RTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_RTrees_getActiveVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getActiveVarCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getCalculateVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCalculateVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getVotes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;

    const char* keywords[] = { "samples", "flags", "results", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:ml_RTrees.getVotes", (char**)keywords, &pyobj_samples, &flags, &pyobj_results) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(_self_->getVotes(samples, results, flags));
        return pyopencv_from(results);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;

    const char* keywords[] = { "samples", "flags", "results", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:ml_RTrees.getVotes", (char**)keywords, &pyobj_samples, &flags, &pyobj_results) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(_self_->getVotes(samples, results, flags));
        return pyopencv_from(results);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setActiveVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_RTrees.setActiveVarCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setActiveVarCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setCalculateVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_RTrees.setCalculateVarImportance", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCalculateVarImportance(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::RTrees* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_RTrees_Type))
        _self_ = dynamic_cast<cv::ml::RTrees*>(((pyopencv_ml_RTrees_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_RTrees.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_RTrees_methods[] =
{
    {"getActiveVarCount", (PyCFunction)pyopencv_cv_ml_ml_RTrees_getActiveVarCount, METH_VARARGS | METH_KEYWORDS, "getActiveVarCount() -> retval\n.   @see setActiveVarCount"},
    {"getCalculateVarImportance", (PyCFunction)pyopencv_cv_ml_ml_RTrees_getCalculateVarImportance, METH_VARARGS | METH_KEYWORDS, "getCalculateVarImportance() -> retval\n.   @see setCalculateVarImportance"},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_RTrees_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getVarImportance", (PyCFunction)pyopencv_cv_ml_ml_RTrees_getVarImportance, METH_VARARGS | METH_KEYWORDS, "getVarImportance() -> retval\n.   Returns the variable importance array.\n.   The method returns the variable importance vector, computed at the training stage when\n.   CalculateVarImportance is set to true. If this flag was set to false, the empty matrix is\n.   returned."},
    {"getVotes", (PyCFunction)pyopencv_cv_ml_ml_RTrees_getVotes, METH_VARARGS | METH_KEYWORDS, "getVotes(samples, flags[, results]) -> results\n.   Returns the result of each individual tree in the forest.\n.   In case the model is a regression problem, the method will return each of the trees'\n.   results for each of the sample cases. If the model is a classifier, it will return\n.   a Mat with samples + 1 rows, where the first row gives the class number and the\n.   following rows return the votes each class had for each sample.\n.   @param samples Array containg the samples for which votes will be calculated.\n.   @param results Array where the result of the calculation will be written.\n.   @param flags Flags for defining the type of RTrees."},
    {"setActiveVarCount", (PyCFunction)pyopencv_cv_ml_ml_RTrees_setActiveVarCount, METH_VARARGS | METH_KEYWORDS, "setActiveVarCount(val) -> None\n.   @copybrief getActiveVarCount @see getActiveVarCount"},
    {"setCalculateVarImportance", (PyCFunction)pyopencv_cv_ml_ml_RTrees_setCalculateVarImportance, METH_VARARGS | METH_KEYWORDS, "setCalculateVarImportance(val) -> None\n.   @copybrief getCalculateVarImportance @see getCalculateVarImportance"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_RTrees_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},

    {NULL,          NULL}
};

static void pyopencv_ml_RTrees_specials(void)
{
    pyopencv_ml_RTrees_Type.tp_base = &pyopencv_ml_DTrees_Type;
    pyopencv_ml_RTrees_Type.tp_dealloc = pyopencv_ml_RTrees_dealloc;
    pyopencv_ml_RTrees_Type.tp_repr = pyopencv_ml_RTrees_repr;
    pyopencv_ml_RTrees_Type.tp_getset = pyopencv_ml_RTrees_getseters;
    pyopencv_ml_RTrees_Type.tp_methods = pyopencv_ml_RTrees_methods;
}

static PyObject* pyopencv_ml_Boost_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_Boost %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_Boost_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_Boost_getBoostType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBoostType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_getWeakCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeakCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_getWeightTrimRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeightTrimRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setBoostType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_Boost.setBoostType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBoostType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setWeakCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_Boost.setWeakCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWeakCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setWeightTrimRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::Boost* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_Boost_Type))
        _self_ = ((pyopencv_ml_Boost_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_Boost.setWeightTrimRate", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWeightTrimRate(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_Boost_methods[] =
{
    {"getBoostType", (PyCFunction)pyopencv_cv_ml_ml_Boost_getBoostType, METH_VARARGS | METH_KEYWORDS, "getBoostType() -> retval\n.   @see setBoostType"},
    {"getWeakCount", (PyCFunction)pyopencv_cv_ml_ml_Boost_getWeakCount, METH_VARARGS | METH_KEYWORDS, "getWeakCount() -> retval\n.   @see setWeakCount"},
    {"getWeightTrimRate", (PyCFunction)pyopencv_cv_ml_ml_Boost_getWeightTrimRate, METH_VARARGS | METH_KEYWORDS, "getWeightTrimRate() -> retval\n.   @see setWeightTrimRate"},
    {"setBoostType", (PyCFunction)pyopencv_cv_ml_ml_Boost_setBoostType, METH_VARARGS | METH_KEYWORDS, "setBoostType(val) -> None\n.   @copybrief getBoostType @see getBoostType"},
    {"setWeakCount", (PyCFunction)pyopencv_cv_ml_ml_Boost_setWeakCount, METH_VARARGS | METH_KEYWORDS, "setWeakCount(val) -> None\n.   @copybrief getWeakCount @see getWeakCount"},
    {"setWeightTrimRate", (PyCFunction)pyopencv_cv_ml_ml_Boost_setWeightTrimRate, METH_VARARGS | METH_KEYWORDS, "setWeightTrimRate(val) -> None\n.   @copybrief getWeightTrimRate @see getWeightTrimRate"},

    {NULL,          NULL}
};

static void pyopencv_ml_Boost_specials(void)
{
    pyopencv_ml_Boost_Type.tp_base = &pyopencv_ml_DTrees_Type;
    pyopencv_ml_Boost_Type.tp_dealloc = pyopencv_ml_Boost_dealloc;
    pyopencv_ml_Boost_Type.tp_repr = pyopencv_ml_Boost_repr;
    pyopencv_ml_Boost_Type.tp_getset = pyopencv_ml_Boost_getseters;
    pyopencv_ml_Boost_Type.tp_methods = pyopencv_ml_Boost_methods;
}

static PyObject* pyopencv_ml_ANN_MLP_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_ANN_MLP %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_ANN_MLP_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getBackpropMomentumScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackpropMomentumScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getBackpropWeightScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackpropWeightScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getLayerSizes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLayerSizes());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDW0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDW0());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMinus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMinus());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWPlus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWPlus());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainMethod());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    int layerIdx=0;
    Mat retval;

    const char* keywords[] = { "layerIdx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_ANN_MLP.getWeights", (char**)keywords, &layerIdx) )
    {
        ERRWRAP2(retval = _self_->getWeights(layerIdx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setActivationFunction(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    int type=0;
    double param1=0;
    double param2=0;

    const char* keywords[] = { "type", "param1", "param2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|dd:ml_ANN_MLP.setActivationFunction", (char**)keywords, &type, &param1, &param2) )
    {
        ERRWRAP2(_self_->setActivationFunction(type, param1, param2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setBackpropMomentumScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setBackpropMomentumScale", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBackpropMomentumScale(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setBackpropWeightScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setBackpropWeightScale", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBackpropWeightScale(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setLayerSizes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    {
    PyObject* pyobj__layer_sizes = NULL;
    Mat _layer_sizes;

    const char* keywords[] = { "_layer_sizes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setLayerSizes", (char**)keywords, &pyobj__layer_sizes) &&
        pyopencv_to(pyobj__layer_sizes, _layer_sizes, ArgInfo("_layer_sizes", 0)) )
    {
        ERRWRAP2(_self_->setLayerSizes(_layer_sizes));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__layer_sizes = NULL;
    UMat _layer_sizes;

    const char* keywords[] = { "_layer_sizes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setLayerSizes", (char**)keywords, &pyobj__layer_sizes) &&
        pyopencv_to(pyobj__layer_sizes, _layer_sizes, ArgInfo("_layer_sizes", 0)) )
    {
        ERRWRAP2(_self_->setLayerSizes(_layer_sizes));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDW0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDW0", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDW0(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMax", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMax(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMin", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMin(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMinus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMinus", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMinus(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWPlus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWPlus", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWPlus(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::ANN_MLP* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_ANN_MLP_Type))
        _self_ = dynamic_cast<cv::ml::ANN_MLP*>(((pyopencv_ml_ANN_MLP_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    int method=0;
    double param1=0;
    double param2=0;

    const char* keywords[] = { "method", "param1", "param2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|dd:ml_ANN_MLP.setTrainMethod", (char**)keywords, &method, &param1, &param2) )
    {
        ERRWRAP2(_self_->setTrainMethod(method, param1, param2));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_ANN_MLP_methods[] =
{
    {"getBackpropMomentumScale", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getBackpropMomentumScale, METH_VARARGS | METH_KEYWORDS, "getBackpropMomentumScale() -> retval\n.   @see setBackpropMomentumScale"},
    {"getBackpropWeightScale", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getBackpropWeightScale, METH_VARARGS | METH_KEYWORDS, "getBackpropWeightScale() -> retval\n.   @see setBackpropWeightScale"},
    {"getLayerSizes", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getLayerSizes, METH_VARARGS | METH_KEYWORDS, "getLayerSizes() -> retval\n.   Integer vector specifying the number of neurons in each layer including the input and output layers.\n.   The very first element specifies the number of elements in the input layer.\n.   The last element - number of elements in the output layer.\n.   @sa setLayerSizes"},
    {"getRpropDW0", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getRpropDW0, METH_VARARGS | METH_KEYWORDS, "getRpropDW0() -> retval\n.   @see setRpropDW0"},
    {"getRpropDWMax", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMax, METH_VARARGS | METH_KEYWORDS, "getRpropDWMax() -> retval\n.   @see setRpropDWMax"},
    {"getRpropDWMin", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMin, METH_VARARGS | METH_KEYWORDS, "getRpropDWMin() -> retval\n.   @see setRpropDWMin"},
    {"getRpropDWMinus", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMinus, METH_VARARGS | METH_KEYWORDS, "getRpropDWMinus() -> retval\n.   @see setRpropDWMinus"},
    {"getRpropDWPlus", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getRpropDWPlus, METH_VARARGS | METH_KEYWORDS, "getRpropDWPlus() -> retval\n.   @see setRpropDWPlus"},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getTrainMethod", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getTrainMethod, METH_VARARGS | METH_KEYWORDS, "getTrainMethod() -> retval\n.   Returns current training method"},
    {"getWeights", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_getWeights, METH_VARARGS | METH_KEYWORDS, "getWeights(layerIdx) -> retval\n."},
    {"setActivationFunction", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setActivationFunction, METH_VARARGS | METH_KEYWORDS, "setActivationFunction(type[, param1[, param2]]) -> None\n.   Initialize the activation function for each neuron.\n.   Currently the default and the only fully supported activation function is ANN_MLP::SIGMOID_SYM.\n.   @param type The type of activation function. See ANN_MLP::ActivationFunctions.\n.   @param param1 The first parameter of the activation function, \\f$\\alpha\\f$. Default value is 0.\n.   @param param2 The second parameter of the activation function, \\f$\\beta\\f$. Default value is 0."},
    {"setBackpropMomentumScale", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setBackpropMomentumScale, METH_VARARGS | METH_KEYWORDS, "setBackpropMomentumScale(val) -> None\n.   @copybrief getBackpropMomentumScale @see getBackpropMomentumScale"},
    {"setBackpropWeightScale", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setBackpropWeightScale, METH_VARARGS | METH_KEYWORDS, "setBackpropWeightScale(val) -> None\n.   @copybrief getBackpropWeightScale @see getBackpropWeightScale"},
    {"setLayerSizes", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setLayerSizes, METH_VARARGS | METH_KEYWORDS, "setLayerSizes(_layer_sizes) -> None\n.   Integer vector specifying the number of neurons in each layer including the input and output layers.\n.   The very first element specifies the number of elements in the input layer.\n.   The last element - number of elements in the output layer. Default value is empty Mat.\n.   @sa getLayerSizes"},
    {"setRpropDW0", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setRpropDW0, METH_VARARGS | METH_KEYWORDS, "setRpropDW0(val) -> None\n.   @copybrief getRpropDW0 @see getRpropDW0"},
    {"setRpropDWMax", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMax, METH_VARARGS | METH_KEYWORDS, "setRpropDWMax(val) -> None\n.   @copybrief getRpropDWMax @see getRpropDWMax"},
    {"setRpropDWMin", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMin, METH_VARARGS | METH_KEYWORDS, "setRpropDWMin(val) -> None\n.   @copybrief getRpropDWMin @see getRpropDWMin"},
    {"setRpropDWMinus", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMinus, METH_VARARGS | METH_KEYWORDS, "setRpropDWMinus(val) -> None\n.   @copybrief getRpropDWMinus @see getRpropDWMinus"},
    {"setRpropDWPlus", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setRpropDWPlus, METH_VARARGS | METH_KEYWORDS, "setRpropDWPlus(val) -> None\n.   @copybrief getRpropDWPlus @see getRpropDWPlus"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setTrainMethod", (PyCFunction)pyopencv_cv_ml_ml_ANN_MLP_setTrainMethod, METH_VARARGS | METH_KEYWORDS, "setTrainMethod(method[, param1[, param2]]) -> None\n.   Sets training method and common parameters.\n.   @param method Default value is ANN_MLP::RPROP. See ANN_MLP::TrainingMethods.\n.   @param param1 passed to setRpropDW0 for ANN_MLP::RPROP and to setBackpropWeightScale for ANN_MLP::BACKPROP\n.   @param param2 passed to setRpropDWMin for ANN_MLP::RPROP and to setBackpropMomentumScale for ANN_MLP::BACKPROP."},

    {NULL,          NULL}
};

static void pyopencv_ml_ANN_MLP_specials(void)
{
    pyopencv_ml_ANN_MLP_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_ANN_MLP_Type.tp_dealloc = pyopencv_ml_ANN_MLP_dealloc;
    pyopencv_ml_ANN_MLP_Type.tp_repr = pyopencv_ml_ANN_MLP_repr;
    pyopencv_ml_ANN_MLP_Type.tp_getset = pyopencv_ml_ANN_MLP_getseters;
    pyopencv_ml_ANN_MLP_Type.tp_methods = pyopencv_ml_ANN_MLP_methods;
}

static PyObject* pyopencv_ml_LogisticRegression_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_LogisticRegression %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_LogisticRegression_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getLearningRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLearningRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getMiniBatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMiniBatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRegularization());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainMethod());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_get_learnt_thetas(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->get_learnt_thetas());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_LogisticRegression.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_LogisticRegression.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setLearningRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_LogisticRegression.setLearningRate", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setLearningRate(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setMiniBatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setMiniBatchSize", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMiniBatchSize(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setRegularization", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRegularization(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_LogisticRegression.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::LogisticRegression* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_LogisticRegression_Type))
        _self_ = dynamic_cast<cv::ml::LogisticRegression*>(((pyopencv_ml_LogisticRegression_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setTrainMethod", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTrainMethod(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_LogisticRegression_methods[] =
{
    {"getIterations", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getIterations, METH_VARARGS | METH_KEYWORDS, "getIterations() -> retval\n.   @see setIterations"},
    {"getLearningRate", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getLearningRate, METH_VARARGS | METH_KEYWORDS, "getLearningRate() -> retval\n.   @see setLearningRate"},
    {"getMiniBatchSize", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getMiniBatchSize, METH_VARARGS | METH_KEYWORDS, "getMiniBatchSize() -> retval\n.   @see setMiniBatchSize"},
    {"getRegularization", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getRegularization, METH_VARARGS | METH_KEYWORDS, "getRegularization() -> retval\n.   @see setRegularization"},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getTrainMethod", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_getTrainMethod, METH_VARARGS | METH_KEYWORDS, "getTrainMethod() -> retval\n.   @see setTrainMethod"},
    {"get_learnt_thetas", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_get_learnt_thetas, METH_VARARGS | METH_KEYWORDS, "get_learnt_thetas() -> retval\n.   @brief This function returns the trained paramters arranged across rows.\n.   \n.   For a two class classifcation problem, it returns a row matrix. It returns learnt paramters of\n.   the Logistic Regression as a matrix of type CV_32F."},
    {"predict", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_predict, METH_VARARGS | METH_KEYWORDS, "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Predicts responses for input samples and returns a float type.\n.   \n.   @param samples The input data for the prediction algorithm. Matrix [m x n], where each row\n.   contains variables (features) of one object being classified. Should have data type CV_32F.\n.   @param results Predicted labels as a column matrix of type CV_32S.\n.   @param flags Not used."},
    {"setIterations", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setIterations, METH_VARARGS | METH_KEYWORDS, "setIterations(val) -> None\n.   @copybrief getIterations @see getIterations"},
    {"setLearningRate", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setLearningRate, METH_VARARGS | METH_KEYWORDS, "setLearningRate(val) -> None\n.   @copybrief getLearningRate @see getLearningRate"},
    {"setMiniBatchSize", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setMiniBatchSize, METH_VARARGS | METH_KEYWORDS, "setMiniBatchSize(val) -> None\n.   @copybrief getMiniBatchSize @see getMiniBatchSize"},
    {"setRegularization", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setRegularization, METH_VARARGS | METH_KEYWORDS, "setRegularization(val) -> None\n.   @copybrief getRegularization @see getRegularization"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setTrainMethod", (PyCFunction)pyopencv_cv_ml_ml_LogisticRegression_setTrainMethod, METH_VARARGS | METH_KEYWORDS, "setTrainMethod(val) -> None\n.   @copybrief getTrainMethod @see getTrainMethod"},

    {NULL,          NULL}
};

static void pyopencv_ml_LogisticRegression_specials(void)
{
    pyopencv_ml_LogisticRegression_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_LogisticRegression_Type.tp_dealloc = pyopencv_ml_LogisticRegression_dealloc;
    pyopencv_ml_LogisticRegression_Type.tp_repr = pyopencv_ml_LogisticRegression_repr;
    pyopencv_ml_LogisticRegression_Type.tp_getset = pyopencv_ml_LogisticRegression_getseters;
    pyopencv_ml_LogisticRegression_Type.tp_methods = pyopencv_ml_LogisticRegression_methods;
}

static PyObject* pyopencv_ml_SVMSGD_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ml_SVMSGD %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ml_SVMSGD_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getInitialStepSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getInitialStepSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getMarginRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMarginRegularization());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getMarginType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMarginType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getShift(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShift());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getStepDecreasingPower(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getStepDecreasingPower());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getSvmsgdType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSvmsgdType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setInitialStepSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float InitialStepSize=0.f;

    const char* keywords[] = { "InitialStepSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setInitialStepSize", (char**)keywords, &InitialStepSize) )
    {
        ERRWRAP2(_self_->setInitialStepSize(InitialStepSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setMarginRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float marginRegularization=0.f;

    const char* keywords[] = { "marginRegularization", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setMarginRegularization", (char**)keywords, &marginRegularization) )
    {
        ERRWRAP2(_self_->setMarginRegularization(marginRegularization));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setMarginType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    int marginType=0;

    const char* keywords[] = { "marginType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVMSGD.setMarginType", (char**)keywords, &marginType) )
    {
        ERRWRAP2(_self_->setMarginType(marginType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setOptimalParameters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    int svmsgdType=SVMSGD::ASGD;
    int marginType=SVMSGD::SOFT_MARGIN;

    const char* keywords[] = { "svmsgdType", "marginType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ii:ml_SVMSGD.setOptimalParameters", (char**)keywords, &svmsgdType, &marginType) )
    {
        ERRWRAP2(_self_->setOptimalParameters(svmsgdType, marginType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setStepDecreasingPower(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    float stepDecreasingPower=0.f;

    const char* keywords[] = { "stepDecreasingPower", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setStepDecreasingPower", (char**)keywords, &stepDecreasingPower) )
    {
        ERRWRAP2(_self_->setStepDecreasingPower(stepDecreasingPower));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setSvmsgdType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    int svmsgdType=0;

    const char* keywords[] = { "svmsgdType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVMSGD.setSvmsgdType", (char**)keywords, &svmsgdType) )
    {
        ERRWRAP2(_self_->setSvmsgdType(svmsgdType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    cv::ml::SVMSGD* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ml_SVMSGD_Type))
        _self_ = dynamic_cast<cv::ml::SVMSGD*>(((pyopencv_ml_SVMSGD_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVMSGD.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ml_SVMSGD_methods[] =
{
    {"getInitialStepSize", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getInitialStepSize, METH_VARARGS | METH_KEYWORDS, "getInitialStepSize() -> retval\n.   @see setInitialStepSize"},
    {"getMarginRegularization", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getMarginRegularization, METH_VARARGS | METH_KEYWORDS, "getMarginRegularization() -> retval\n.   @see setMarginRegularization"},
    {"getMarginType", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getMarginType, METH_VARARGS | METH_KEYWORDS, "getMarginType() -> retval\n.   @see setMarginType"},
    {"getShift", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getShift, METH_VARARGS | METH_KEYWORDS, "getShift() -> retval\n.   * @return the shift of the trained model (decision function f(x) = weights * x + shift)."},
    {"getStepDecreasingPower", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getStepDecreasingPower, METH_VARARGS | METH_KEYWORDS, "getStepDecreasingPower() -> retval\n.   @see setStepDecreasingPower"},
    {"getSvmsgdType", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getSvmsgdType, METH_VARARGS | METH_KEYWORDS, "getSvmsgdType() -> retval\n.   @see setSvmsgdType"},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getWeights", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_getWeights, METH_VARARGS | METH_KEYWORDS, "getWeights() -> retval\n.   * @return the weights of the trained model (decision function f(x) = weights * x + shift)."},
    {"setInitialStepSize", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setInitialStepSize, METH_VARARGS | METH_KEYWORDS, "setInitialStepSize(InitialStepSize) -> None\n.   @copybrief getInitialStepSize @see getInitialStepSize"},
    {"setMarginRegularization", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setMarginRegularization, METH_VARARGS | METH_KEYWORDS, "setMarginRegularization(marginRegularization) -> None\n.   @copybrief getMarginRegularization @see getMarginRegularization"},
    {"setMarginType", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setMarginType, METH_VARARGS | METH_KEYWORDS, "setMarginType(marginType) -> None\n.   @copybrief getMarginType @see getMarginType"},
    {"setOptimalParameters", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setOptimalParameters, METH_VARARGS | METH_KEYWORDS, "setOptimalParameters([, svmsgdType[, marginType]]) -> None\n.   @brief Function sets optimal parameters values for chosen SVM SGD model.\n.   * @param svmsgdType is the type of SVMSGD classifier.\n.   * @param marginType is the type of margin constraint."},
    {"setStepDecreasingPower", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setStepDecreasingPower, METH_VARARGS | METH_KEYWORDS, "setStepDecreasingPower(stepDecreasingPower) -> None\n.   @copybrief getStepDecreasingPower @see getStepDecreasingPower"},
    {"setSvmsgdType", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setSvmsgdType, METH_VARARGS | METH_KEYWORDS, "setSvmsgdType(svmsgdType) -> None\n.   @copybrief getSvmsgdType @see getSvmsgdType"},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_ml_ml_SVMSGD_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},

    {NULL,          NULL}
};

static void pyopencv_ml_SVMSGD_specials(void)
{
    pyopencv_ml_SVMSGD_Type.tp_base = &pyopencv_ml_StatModel_Type;
    pyopencv_ml_SVMSGD_Type.tp_dealloc = pyopencv_ml_SVMSGD_dealloc;
    pyopencv_ml_SVMSGD_Type.tp_repr = pyopencv_ml_SVMSGD_repr;
    pyopencv_ml_SVMSGD_Type.tp_getset = pyopencv_ml_SVMSGD_getseters;
    pyopencv_ml_SVMSGD_Type.tp_methods = pyopencv_ml_SVMSGD_methods;
}

static PyObject* pyopencv_BaseCascadeClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BaseCascadeClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BaseCascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BaseCascadeClassifier_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BaseCascadeClassifier_specials(void)
{
    pyopencv_BaseCascadeClassifier_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_BaseCascadeClassifier_Type.tp_dealloc = pyopencv_BaseCascadeClassifier_dealloc;
    pyopencv_BaseCascadeClassifier_Type.tp_repr = pyopencv_BaseCascadeClassifier_repr;
    pyopencv_BaseCascadeClassifier_Type.tp_getset = pyopencv_BaseCascadeClassifier_getseters;
    pyopencv_BaseCascadeClassifier_Type.tp_methods = pyopencv_BaseCascadeClassifier_methods;
}

static PyObject* pyopencv_CascadeClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CascadeClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int numDetections;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale2", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, numDetections, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return Py_BuildValue("(NN)", pyopencv_from(objects), pyopencv_from(numDetections));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    vector_int numDetections;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale2", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, numDetections, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return Py_BuildValue("(NN)", pyopencv_from(objects), pyopencv_from(numDetections));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale3(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int rejectLevels;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOOb:CascadeClassifier.detectMultiScale3", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return Py_BuildValue("(NNN)", pyopencv_from(objects), pyopencv_from(rejectLevels), pyopencv_from(levelWeights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    vector_int rejectLevels;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOOb:CascadeClassifier.detectMultiScale3", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return Py_BuildValue("(NNN)", pyopencv_from(objects), pyopencv_from(rejectLevels), pyopencv_from(levelWeights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_getFeatureType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFeatureType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_getOriginalWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Size retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOriginalWindowSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_isOldFormatCascade(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOldFormatCascade());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.load", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CascadeClassifier* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    PyObject* pyobj_node = NULL;
    FileNode node;
    bool retval;

    const char* keywords[] = { "node", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.read", (char**)keywords, &pyobj_node) &&
        pyopencv_to(pyobj_node, node, ArgInfo("node", 0)) )
    {
        ERRWRAP2(retval = _self_->read(node));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CascadeClassifier_methods[] =
{
    {"detectMultiScale", (PyCFunction)pyopencv_cv_CascadeClassifier_detectMultiScale, METH_VARARGS | METH_KEYWORDS, "detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects\n.   @brief Detects objects of different sizes in the input image. The detected objects are returned as a list\n.   of rectangles.\n.   \n.   @param image Matrix of the type CV_8U containing an image where objects are detected.\n.   @param objects Vector of rectangles where each rectangle contains the detected object, the\n.   rectangles may be partially outside the original image.\n.   @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.\n.   @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have\n.   to retain it.\n.   @param flags Parameter with the same meaning for an old cascade as in the function\n.   cvHaarDetectObjects. It is not used for a new cascade.\n.   @param minSize Minimum possible object size. Objects smaller than that are ignored.\n.   @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale.\n.   \n.   The function is parallelized with the TBB library.\n.   \n.   @note\n.   -   (Python) A face detection example using cascade classifiers can be found at\n.   opencv_source_code/samples/python/facedetect.py"},
    {"detectMultiScale2", (PyCFunction)pyopencv_cv_CascadeClassifier_detectMultiScale2, METH_VARARGS | METH_KEYWORDS, "detectMultiScale2(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects, numDetections\n.   @overload\n.   @param image Matrix of the type CV_8U containing an image where objects are detected.\n.   @param objects Vector of rectangles where each rectangle contains the detected object, the\n.   rectangles may be partially outside the original image.\n.   @param numDetections Vector of detection numbers for the corresponding objects. An object's number\n.   of detections is the number of neighboring positively classified rectangles that were joined\n.   together to form the object.\n.   @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.\n.   @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have\n.   to retain it.\n.   @param flags Parameter with the same meaning for an old cascade as in the function\n.   cvHaarDetectObjects. It is not used for a new cascade.\n.   @param minSize Minimum possible object size. Objects smaller than that are ignored.\n.   @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale."},
    {"detectMultiScale3", (PyCFunction)pyopencv_cv_CascadeClassifier_detectMultiScale3, METH_VARARGS | METH_KEYWORDS, "detectMultiScale3(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize[, outputRejectLevels]]]]]]) -> objects, rejectLevels, levelWeights\n.   @overload\n.   This function allows you to retrieve the final stage decision certainty of classification.\n.   For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.\n.   For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.\n.   This value can then be used to separate strong from weaker classifications.\n.   \n.   A code sample on how to use it efficiently can be found below:\n.   @code\n.   Mat img;\n.   vector<double> weights;\n.   vector<int> levels;\n.   vector<Rect> detections;\n.   CascadeClassifier model(\"/path/to/your/model.xml\");\n.   model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);\n.   cerr << \"Detection \" << detections[0] << \" with weight \" << weights[0] << endl;\n.   @endcode"},
    {"empty", (PyCFunction)pyopencv_cv_CascadeClassifier_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n.   @brief Checks whether the classifier has been loaded."},
    {"getFeatureType", (PyCFunction)pyopencv_cv_CascadeClassifier_getFeatureType, METH_VARARGS | METH_KEYWORDS, "getFeatureType() -> retval\n."},
    {"getOriginalWindowSize", (PyCFunction)pyopencv_cv_CascadeClassifier_getOriginalWindowSize, METH_VARARGS | METH_KEYWORDS, "getOriginalWindowSize() -> retval\n."},
    {"isOldFormatCascade", (PyCFunction)pyopencv_cv_CascadeClassifier_isOldFormatCascade, METH_VARARGS | METH_KEYWORDS, "isOldFormatCascade() -> retval\n."},
    {"load", (PyCFunction)pyopencv_cv_CascadeClassifier_load, METH_VARARGS | METH_KEYWORDS, "load(filename) -> retval\n.   @brief Loads a classifier from a file.\n.   \n.   @param filename Name of the file from which the classifier is loaded. The file may contain an old\n.   HAAR classifier trained by the haartraining application or a new cascade classifier trained by the\n.   traincascade application."},
    {"read", (PyCFunction)pyopencv_cv_CascadeClassifier_read, METH_VARARGS | METH_KEYWORDS, "read(node) -> retval\n.   @brief Reads a classifier from a FileStorage node.\n.   \n.   @note The file may contain a new cascade classifier (trained traincascade application) only."},

    {NULL,          NULL}
};

static void pyopencv_CascadeClassifier_specials(void)
{
    pyopencv_CascadeClassifier_Type.tp_base = NULL;
    pyopencv_CascadeClassifier_Type.tp_dealloc = pyopencv_CascadeClassifier_dealloc;
    pyopencv_CascadeClassifier_Type.tp_repr = pyopencv_CascadeClassifier_repr;
    pyopencv_CascadeClassifier_Type.tp_getset = pyopencv_CascadeClassifier_getseters;
    pyopencv_CascadeClassifier_Type.tp_methods = pyopencv_CascadeClassifier_methods;
}

static PyObject* pyopencv_HOGDescriptor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<HOGDescriptor %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_HOGDescriptor_get_L2HysThreshold(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->L2HysThreshold);
}

static PyObject* pyopencv_HOGDescriptor_get_blockSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockSize);
}

static PyObject* pyopencv_HOGDescriptor_get_blockStride(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockStride);
}

static PyObject* pyopencv_HOGDescriptor_get_cellSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->cellSize);
}

static PyObject* pyopencv_HOGDescriptor_get_derivAperture(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->derivAperture);
}

static PyObject* pyopencv_HOGDescriptor_get_gammaCorrection(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->gammaCorrection);
}

static PyObject* pyopencv_HOGDescriptor_get_histogramNormType(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->histogramNormType);
}

static PyObject* pyopencv_HOGDescriptor_get_nbins(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nbins);
}

static PyObject* pyopencv_HOGDescriptor_get_nlevels(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nlevels);
}

static PyObject* pyopencv_HOGDescriptor_get_signedGradient(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->signedGradient);
}

static PyObject* pyopencv_HOGDescriptor_get_svmDetector(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->svmDetector);
}

static PyObject* pyopencv_HOGDescriptor_get_winSigma(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSigma);
}

static PyObject* pyopencv_HOGDescriptor_get_winSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSize);
}


static PyGetSetDef pyopencv_HOGDescriptor_getseters[] =
{
    {(char*)"L2HysThreshold", (getter)pyopencv_HOGDescriptor_get_L2HysThreshold, NULL, (char*)"L2HysThreshold", NULL},
    {(char*)"blockSize", (getter)pyopencv_HOGDescriptor_get_blockSize, NULL, (char*)"blockSize", NULL},
    {(char*)"blockStride", (getter)pyopencv_HOGDescriptor_get_blockStride, NULL, (char*)"blockStride", NULL},
    {(char*)"cellSize", (getter)pyopencv_HOGDescriptor_get_cellSize, NULL, (char*)"cellSize", NULL},
    {(char*)"derivAperture", (getter)pyopencv_HOGDescriptor_get_derivAperture, NULL, (char*)"derivAperture", NULL},
    {(char*)"gammaCorrection", (getter)pyopencv_HOGDescriptor_get_gammaCorrection, NULL, (char*)"gammaCorrection", NULL},
    {(char*)"histogramNormType", (getter)pyopencv_HOGDescriptor_get_histogramNormType, NULL, (char*)"histogramNormType", NULL},
    {(char*)"nbins", (getter)pyopencv_HOGDescriptor_get_nbins, NULL, (char*)"nbins", NULL},
    {(char*)"nlevels", (getter)pyopencv_HOGDescriptor_get_nlevels, NULL, (char*)"nlevels", NULL},
    {(char*)"signedGradient", (getter)pyopencv_HOGDescriptor_get_signedGradient, NULL, (char*)"signedGradient", NULL},
    {(char*)"svmDetector", (getter)pyopencv_HOGDescriptor_get_svmDetector, NULL, (char*)"svmDetector", NULL},
    {(char*)"winSigma", (getter)pyopencv_HOGDescriptor_get_winSigma, NULL, (char*)"winSigma", NULL},
    {(char*)"winSize", (getter)pyopencv_HOGDescriptor_get_winSize, NULL, (char*)"winSize", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_HOGDescriptor_checkDetectorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->checkDetectorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=std::vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_locations, locations, ArgInfo("locations", 0)) )
    {
        ERRWRAP2(_self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=std::vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_locations, locations, ArgInfo("locations", 0)) )
    {
        ERRWRAP2(_self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_computeGradient(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_grad, grad, ArgInfo("grad", 1)) &&
        pyopencv_to(pyobj_angleOfs, angleOfs, ArgInfo("angleOfs", 1)) &&
        pyopencv_to(pyobj_paddingTL, paddingTL, ArgInfo("paddingTL", 0)) &&
        pyopencv_to(pyobj_paddingBR, paddingBR, ArgInfo("paddingBR", 0)) )
    {
        ERRWRAP2(_self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_grad, grad, ArgInfo("grad", 1)) &&
        pyopencv_to(pyobj_angleOfs, angleOfs, ArgInfo("angleOfs", 1)) &&
        pyopencv_to(pyobj_paddingTL, paddingTL, ArgInfo("paddingTL", 0)) &&
        pyopencv_to(pyobj_paddingBR, paddingBR, ArgInfo("paddingBR", 0)) )
    {
        ERRWRAP2(_self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=std::vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_searchLocations, searchLocations, ArgInfo("searchLocations", 0)) )
    {
        ERRWRAP2(_self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(weights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=std::vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_searchLocations, searchLocations, ArgInfo("searchLocations", 0)) )
    {
        ERRWRAP2(_self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(weights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Rect foundLocations;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(foundWeights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    vector_Rect foundLocations;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(foundWeights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getWinSigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;
    bool retval;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.load", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename, objname));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.save", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(_self_->save(filename, objname));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_setSVMDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HOGDescriptor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    {
    PyObject* pyobj__svmdetector = NULL;
    Mat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector, ArgInfo("_svmdetector", 0)) )
    {
        ERRWRAP2(_self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__svmdetector = NULL;
    UMat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector, ArgInfo("_svmdetector", 0)) )
    {
        ERRWRAP2(_self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_HOGDescriptor_methods[] =
{
    {"checkDetectorSize", (PyCFunction)pyopencv_cv_HOGDescriptor_checkDetectorSize, METH_VARARGS | METH_KEYWORDS, "checkDetectorSize() -> retval\n."},
    {"compute", (PyCFunction)pyopencv_cv_HOGDescriptor_compute, METH_VARARGS | METH_KEYWORDS, "compute(img[, winStride[, padding[, locations]]]) -> descriptors\n."},
    {"computeGradient", (PyCFunction)pyopencv_cv_HOGDescriptor_computeGradient, METH_VARARGS | METH_KEYWORDS, "computeGradient(img[, grad[, angleOfs[, paddingTL[, paddingBR]]]]) -> grad, angleOfs\n."},
    {"detect", (PyCFunction)pyopencv_cv_HOGDescriptor_detect, METH_VARARGS | METH_KEYWORDS, "detect(img[, hitThreshold[, winStride[, padding[, searchLocations]]]]) -> foundLocations, weights\n."},
    {"detectMultiScale", (PyCFunction)pyopencv_cv_HOGDescriptor_detectMultiScale, METH_VARARGS | METH_KEYWORDS, "detectMultiScale(img[, hitThreshold[, winStride[, padding[, scale[, finalThreshold[, useMeanshiftGrouping]]]]]]) -> foundLocations, foundWeights\n."},
    {"getDescriptorSize", (PyCFunction)pyopencv_cv_HOGDescriptor_getDescriptorSize, METH_VARARGS | METH_KEYWORDS, "getDescriptorSize() -> retval\n."},
    {"getWinSigma", (PyCFunction)pyopencv_cv_HOGDescriptor_getWinSigma, METH_VARARGS | METH_KEYWORDS, "getWinSigma() -> retval\n."},
    {"load", (PyCFunction)pyopencv_cv_HOGDescriptor_load, METH_VARARGS | METH_KEYWORDS, "load(filename[, objname]) -> retval\n."},
    {"save", (PyCFunction)pyopencv_cv_HOGDescriptor_save, METH_VARARGS | METH_KEYWORDS, "save(filename[, objname]) -> None\n."},
    {"setSVMDetector", (PyCFunction)pyopencv_cv_HOGDescriptor_setSVMDetector, METH_VARARGS | METH_KEYWORDS, "setSVMDetector(_svmdetector) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_HOGDescriptor_specials(void)
{
    pyopencv_HOGDescriptor_Type.tp_base = NULL;
    pyopencv_HOGDescriptor_Type.tp_dealloc = pyopencv_HOGDescriptor_dealloc;
    pyopencv_HOGDescriptor_Type.tp_repr = pyopencv_HOGDescriptor_repr;
    pyopencv_HOGDescriptor_Type.tp_getset = pyopencv_HOGDescriptor_getseters;
    pyopencv_HOGDescriptor_Type.tp_methods = pyopencv_HOGDescriptor_methods;
}

static PyObject* pyopencv_Tonemap_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Tonemap %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Tonemap_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_Tonemap_getGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Tonemap* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Tonemap_Type))
        _self_ = dynamic_cast<cv::Tonemap*>(((pyopencv_Tonemap_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Tonemap_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Tonemap* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Tonemap_Type))
        _self_ = dynamic_cast<cv::Tonemap*>(((pyopencv_Tonemap_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Tonemap.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Tonemap.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Tonemap_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Tonemap* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Tonemap_Type))
        _self_ = dynamic_cast<cv::Tonemap*>(((pyopencv_Tonemap_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    float gamma=0.f;

    const char* keywords[] = { "gamma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:Tonemap.setGamma", (char**)keywords, &gamma) )
    {
        ERRWRAP2(_self_->setGamma(gamma));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_Tonemap_methods[] =
{
    {"getGamma", (PyCFunction)pyopencv_cv_Tonemap_getGamma, METH_VARARGS | METH_KEYWORDS, "getGamma() -> retval\n."},
    {"process", (PyCFunction)pyopencv_cv_Tonemap_process, METH_VARARGS | METH_KEYWORDS, "process(src[, dst]) -> dst\n.   @brief Tonemaps image\n.   \n.   @param src source image - 32-bit 3-channel Mat\n.   @param dst destination image - 32-bit 3-channel Mat with values in [0, 1] range"},
    {"setGamma", (PyCFunction)pyopencv_cv_Tonemap_setGamma, METH_VARARGS | METH_KEYWORDS, "setGamma(gamma) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_Tonemap_specials(void)
{
    pyopencv_Tonemap_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_Tonemap_Type.tp_dealloc = pyopencv_Tonemap_dealloc;
    pyopencv_Tonemap_Type.tp_repr = pyopencv_Tonemap_repr;
    pyopencv_Tonemap_Type.tp_getset = pyopencv_Tonemap_getseters;
    pyopencv_Tonemap_Type.tp_methods = pyopencv_Tonemap_methods;
}

static PyObject* pyopencv_TonemapDrago_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapDrago %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapDrago_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_TonemapDrago_getBias(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDrago* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBias());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_getSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDrago* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_setBias(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDrago* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    float bias=0.f;

    const char* keywords[] = { "bias", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDrago.setBias", (char**)keywords, &bias) )
    {
        ERRWRAP2(_self_->setBias(bias));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDrago* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDrago.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapDrago_methods[] =
{
    {"getBias", (PyCFunction)pyopencv_cv_TonemapDrago_getBias, METH_VARARGS | METH_KEYWORDS, "getBias() -> retval\n."},
    {"getSaturation", (PyCFunction)pyopencv_cv_TonemapDrago_getSaturation, METH_VARARGS | METH_KEYWORDS, "getSaturation() -> retval\n."},
    {"setBias", (PyCFunction)pyopencv_cv_TonemapDrago_setBias, METH_VARARGS | METH_KEYWORDS, "setBias(bias) -> None\n."},
    {"setSaturation", (PyCFunction)pyopencv_cv_TonemapDrago_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_TonemapDrago_specials(void)
{
    pyopencv_TonemapDrago_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapDrago_Type.tp_dealloc = pyopencv_TonemapDrago_dealloc;
    pyopencv_TonemapDrago_Type.tp_repr = pyopencv_TonemapDrago_repr;
    pyopencv_TonemapDrago_Type.tp_getset = pyopencv_TonemapDrago_getseters;
    pyopencv_TonemapDrago_Type.tp_methods = pyopencv_TonemapDrago_methods;
}

static PyObject* pyopencv_TonemapDurand_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapDurand %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapDurand_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_TonemapDurand_getContrast(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getContrast());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_getSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_getSigmaColor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSigmaColor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_getSigmaSpace(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSigmaSpace());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_setContrast(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float contrast=0.f;

    const char* keywords[] = { "contrast", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setContrast", (char**)keywords, &contrast) )
    {
        ERRWRAP2(_self_->setContrast(contrast));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_setSigmaColor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float sigma_color=0.f;

    const char* keywords[] = { "sigma_color", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSigmaColor", (char**)keywords, &sigma_color) )
    {
        ERRWRAP2(_self_->setSigmaColor(sigma_color));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDurand_setSigmaSpace(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapDurand* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    float sigma_space=0.f;

    const char* keywords[] = { "sigma_space", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSigmaSpace", (char**)keywords, &sigma_space) )
    {
        ERRWRAP2(_self_->setSigmaSpace(sigma_space));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapDurand_methods[] =
{
    {"getContrast", (PyCFunction)pyopencv_cv_TonemapDurand_getContrast, METH_VARARGS | METH_KEYWORDS, "getContrast() -> retval\n."},
    {"getSaturation", (PyCFunction)pyopencv_cv_TonemapDurand_getSaturation, METH_VARARGS | METH_KEYWORDS, "getSaturation() -> retval\n."},
    {"getSigmaColor", (PyCFunction)pyopencv_cv_TonemapDurand_getSigmaColor, METH_VARARGS | METH_KEYWORDS, "getSigmaColor() -> retval\n."},
    {"getSigmaSpace", (PyCFunction)pyopencv_cv_TonemapDurand_getSigmaSpace, METH_VARARGS | METH_KEYWORDS, "getSigmaSpace() -> retval\n."},
    {"setContrast", (PyCFunction)pyopencv_cv_TonemapDurand_setContrast, METH_VARARGS | METH_KEYWORDS, "setContrast(contrast) -> None\n."},
    {"setSaturation", (PyCFunction)pyopencv_cv_TonemapDurand_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None\n."},
    {"setSigmaColor", (PyCFunction)pyopencv_cv_TonemapDurand_setSigmaColor, METH_VARARGS | METH_KEYWORDS, "setSigmaColor(sigma_color) -> None\n."},
    {"setSigmaSpace", (PyCFunction)pyopencv_cv_TonemapDurand_setSigmaSpace, METH_VARARGS | METH_KEYWORDS, "setSigmaSpace(sigma_space) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_TonemapDurand_specials(void)
{
    pyopencv_TonemapDurand_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapDurand_Type.tp_dealloc = pyopencv_TonemapDurand_dealloc;
    pyopencv_TonemapDurand_Type.tp_repr = pyopencv_TonemapDurand_repr;
    pyopencv_TonemapDurand_Type.tp_getset = pyopencv_TonemapDurand_getseters;
    pyopencv_TonemapDurand_Type.tp_methods = pyopencv_TonemapDurand_methods;
}

static PyObject* pyopencv_TonemapReinhard_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapReinhard %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapReinhard_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_TonemapReinhard_getColorAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getColorAdaptation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_getIntensity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIntensity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_getLightAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLightAdaptation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setColorAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float color_adapt=0.f;

    const char* keywords[] = { "color_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setColorAdaptation", (char**)keywords, &color_adapt) )
    {
        ERRWRAP2(_self_->setColorAdaptation(color_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setIntensity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float intensity=0.f;

    const char* keywords[] = { "intensity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setIntensity", (char**)keywords, &intensity) )
    {
        ERRWRAP2(_self_->setIntensity(intensity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setLightAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapReinhard* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    float light_adapt=0.f;

    const char* keywords[] = { "light_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setLightAdaptation", (char**)keywords, &light_adapt) )
    {
        ERRWRAP2(_self_->setLightAdaptation(light_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapReinhard_methods[] =
{
    {"getColorAdaptation", (PyCFunction)pyopencv_cv_TonemapReinhard_getColorAdaptation, METH_VARARGS | METH_KEYWORDS, "getColorAdaptation() -> retval\n."},
    {"getIntensity", (PyCFunction)pyopencv_cv_TonemapReinhard_getIntensity, METH_VARARGS | METH_KEYWORDS, "getIntensity() -> retval\n."},
    {"getLightAdaptation", (PyCFunction)pyopencv_cv_TonemapReinhard_getLightAdaptation, METH_VARARGS | METH_KEYWORDS, "getLightAdaptation() -> retval\n."},
    {"setColorAdaptation", (PyCFunction)pyopencv_cv_TonemapReinhard_setColorAdaptation, METH_VARARGS | METH_KEYWORDS, "setColorAdaptation(color_adapt) -> None\n."},
    {"setIntensity", (PyCFunction)pyopencv_cv_TonemapReinhard_setIntensity, METH_VARARGS | METH_KEYWORDS, "setIntensity(intensity) -> None\n."},
    {"setLightAdaptation", (PyCFunction)pyopencv_cv_TonemapReinhard_setLightAdaptation, METH_VARARGS | METH_KEYWORDS, "setLightAdaptation(light_adapt) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_TonemapReinhard_specials(void)
{
    pyopencv_TonemapReinhard_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapReinhard_Type.tp_dealloc = pyopencv_TonemapReinhard_dealloc;
    pyopencv_TonemapReinhard_Type.tp_repr = pyopencv_TonemapReinhard_repr;
    pyopencv_TonemapReinhard_Type.tp_getset = pyopencv_TonemapReinhard_getseters;
    pyopencv_TonemapReinhard_Type.tp_methods = pyopencv_TonemapReinhard_methods;
}

static PyObject* pyopencv_TonemapMantiuk_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapMantiuk %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapMantiuk_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_TonemapMantiuk_getSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapMantiuk* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_getScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapMantiuk* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapMantiuk* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapMantiuk.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_setScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::TonemapMantiuk* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    float scale=0.f;

    const char* keywords[] = { "scale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapMantiuk.setScale", (char**)keywords, &scale) )
    {
        ERRWRAP2(_self_->setScale(scale));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapMantiuk_methods[] =
{
    {"getSaturation", (PyCFunction)pyopencv_cv_TonemapMantiuk_getSaturation, METH_VARARGS | METH_KEYWORDS, "getSaturation() -> retval\n."},
    {"getScale", (PyCFunction)pyopencv_cv_TonemapMantiuk_getScale, METH_VARARGS | METH_KEYWORDS, "getScale() -> retval\n."},
    {"setSaturation", (PyCFunction)pyopencv_cv_TonemapMantiuk_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None\n."},
    {"setScale", (PyCFunction)pyopencv_cv_TonemapMantiuk_setScale, METH_VARARGS | METH_KEYWORDS, "setScale(scale) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_TonemapMantiuk_specials(void)
{
    pyopencv_TonemapMantiuk_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapMantiuk_Type.tp_dealloc = pyopencv_TonemapMantiuk_dealloc;
    pyopencv_TonemapMantiuk_Type.tp_repr = pyopencv_TonemapMantiuk_repr;
    pyopencv_TonemapMantiuk_Type.tp_getset = pyopencv_TonemapMantiuk_getseters;
    pyopencv_TonemapMantiuk_Type.tp_methods = pyopencv_TonemapMantiuk_methods;
}

static PyObject* pyopencv_AlignExposures_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AlignExposures %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AlignExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_AlignExposures_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignExposures* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignExposures_Type))
        _self_ = dynamic_cast<cv::AlignExposures*>(((pyopencv_AlignExposures_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignExposures' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignExposures.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignExposures.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_AlignExposures_methods[] =
{
    {"process", (PyCFunction)pyopencv_cv_AlignExposures_process, METH_VARARGS | METH_KEYWORDS, "process(src, dst, times, response) -> None\n.   @brief Aligns images\n.   \n.   @param src vector of input images\n.   @param dst vector of aligned images\n.   @param times vector of exposure time values for each image\n.   @param response 256x1 matrix with inverse camera response function for each pixel value, it should\n.   have the same number of channels as images."},

    {NULL,          NULL}
};

static void pyopencv_AlignExposures_specials(void)
{
    pyopencv_AlignExposures_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_AlignExposures_Type.tp_dealloc = pyopencv_AlignExposures_dealloc;
    pyopencv_AlignExposures_Type.tp_repr = pyopencv_AlignExposures_repr;
    pyopencv_AlignExposures_Type.tp_getset = pyopencv_AlignExposures_getseters;
    pyopencv_AlignExposures_Type.tp_methods = pyopencv_AlignExposures_methods;
}

static PyObject* pyopencv_AlignMTB_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AlignMTB %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AlignMTB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_AlignMTB_calculateShift(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    {
    PyObject* pyobj_img0 = NULL;
    Mat img0;
    PyObject* pyobj_img1 = NULL;
    Mat img1;
    Point retval;

    const char* keywords[] = { "img0", "img1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.calculateShift", (char**)keywords, &pyobj_img0, &pyobj_img1) &&
        pyopencv_to(pyobj_img0, img0, ArgInfo("img0", 0)) &&
        pyopencv_to(pyobj_img1, img1, ArgInfo("img1", 0)) )
    {
        ERRWRAP2(retval = _self_->calculateShift(img0, img1));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img0 = NULL;
    UMat img0;
    PyObject* pyobj_img1 = NULL;
    UMat img1;
    Point retval;

    const char* keywords[] = { "img0", "img1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.calculateShift", (char**)keywords, &pyobj_img0, &pyobj_img1) &&
        pyopencv_to(pyobj_img0, img0, ArgInfo("img0", 0)) &&
        pyopencv_to(pyobj_img1, img1, ArgInfo("img1", 0)) )
    {
        ERRWRAP2(retval = _self_->calculateShift(img0, img1));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_computeBitmaps(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_tb = NULL;
    Mat tb;
    PyObject* pyobj_eb = NULL;
    Mat eb;

    const char* keywords[] = { "img", "tb", "eb", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:AlignMTB.computeBitmaps", (char**)keywords, &pyobj_img, &pyobj_tb, &pyobj_eb) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_tb, tb, ArgInfo("tb", 1)) &&
        pyopencv_to(pyobj_eb, eb, ArgInfo("eb", 1)) )
    {
        ERRWRAP2(_self_->computeBitmaps(img, tb, eb));
        return Py_BuildValue("(NN)", pyopencv_from(tb), pyopencv_from(eb));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    PyObject* pyobj_tb = NULL;
    UMat tb;
    PyObject* pyobj_eb = NULL;
    UMat eb;

    const char* keywords[] = { "img", "tb", "eb", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:AlignMTB.computeBitmaps", (char**)keywords, &pyobj_img, &pyobj_tb, &pyobj_eb) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_tb, tb, ArgInfo("tb", 1)) &&
        pyopencv_to(pyobj_eb, eb, ArgInfo("eb", 1)) )
    {
        ERRWRAP2(_self_->computeBitmaps(img, tb, eb));
        return Py_BuildValue("(NN)", pyopencv_from(tb), pyopencv_from(eb));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getCut(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCut());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getExcludeRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExcludeRange());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getMaxBits(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxBits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setCut(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    bool value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:AlignMTB.setCut", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setCut(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setExcludeRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    int exclude_range=0;

    const char* keywords[] = { "exclude_range", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AlignMTB.setExcludeRange", (char**)keywords, &exclude_range) )
    {
        ERRWRAP2(_self_->setExcludeRange(exclude_range));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setMaxBits(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    int max_bits=0;

    const char* keywords[] = { "max_bits", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AlignMTB.setMaxBits", (char**)keywords, &max_bits) )
    {
        ERRWRAP2(_self_->setMaxBits(max_bits));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_shiftMat(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AlignMTB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_shift = NULL;
    Point shift;

    const char* keywords[] = { "src", "shift", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:AlignMTB.shiftMat", (char**)keywords, &pyobj_src, &pyobj_shift, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_shift, shift, ArgInfo("shift", 0)) )
    {
        ERRWRAP2(_self_->shiftMat(src, dst, shift));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_shift = NULL;
    Point shift;

    const char* keywords[] = { "src", "shift", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:AlignMTB.shiftMat", (char**)keywords, &pyobj_src, &pyobj_shift, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_shift, shift, ArgInfo("shift", 0)) )
    {
        ERRWRAP2(_self_->shiftMat(src, dst, shift));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_AlignMTB_methods[] =
{
    {"calculateShift", (PyCFunction)pyopencv_cv_AlignMTB_calculateShift, METH_VARARGS | METH_KEYWORDS, "calculateShift(img0, img1) -> retval\n.   @brief Calculates shift between two images, i. e. how to shift the second image to correspond it with the\n.   first.\n.   \n.   @param img0 first image\n.   @param img1 second image"},
    {"computeBitmaps", (PyCFunction)pyopencv_cv_AlignMTB_computeBitmaps, METH_VARARGS | METH_KEYWORDS, "computeBitmaps(img[, tb[, eb]]) -> tb, eb\n.   @brief Computes median threshold and exclude bitmaps of given image.\n.   \n.   @param img input image\n.   @param tb median threshold bitmap\n.   @param eb exclude bitmap"},
    {"getCut", (PyCFunction)pyopencv_cv_AlignMTB_getCut, METH_VARARGS | METH_KEYWORDS, "getCut() -> retval\n."},
    {"getExcludeRange", (PyCFunction)pyopencv_cv_AlignMTB_getExcludeRange, METH_VARARGS | METH_KEYWORDS, "getExcludeRange() -> retval\n."},
    {"getMaxBits", (PyCFunction)pyopencv_cv_AlignMTB_getMaxBits, METH_VARARGS | METH_KEYWORDS, "getMaxBits() -> retval\n."},
    {"process", (PyCFunction)pyopencv_cv_AlignMTB_process, METH_VARARGS | METH_KEYWORDS, "process(src, dst, times, response) -> None\n.   \n\n\n\nprocess(src, dst) -> None\n.   @brief Short version of process, that doesn't take extra arguments.\n.   \n.   @param src vector of input images\n.   @param dst vector of aligned images"},
    {"setCut", (PyCFunction)pyopencv_cv_AlignMTB_setCut, METH_VARARGS | METH_KEYWORDS, "setCut(value) -> None\n."},
    {"setExcludeRange", (PyCFunction)pyopencv_cv_AlignMTB_setExcludeRange, METH_VARARGS | METH_KEYWORDS, "setExcludeRange(exclude_range) -> None\n."},
    {"setMaxBits", (PyCFunction)pyopencv_cv_AlignMTB_setMaxBits, METH_VARARGS | METH_KEYWORDS, "setMaxBits(max_bits) -> None\n."},
    {"shiftMat", (PyCFunction)pyopencv_cv_AlignMTB_shiftMat, METH_VARARGS | METH_KEYWORDS, "shiftMat(src, shift[, dst]) -> dst\n.   @brief Helper function, that shift Mat filling new regions with zeros.\n.   \n.   @param src input image\n.   @param dst result image\n.   @param shift shift value"},

    {NULL,          NULL}
};

static void pyopencv_AlignMTB_specials(void)
{
    pyopencv_AlignMTB_Type.tp_base = &pyopencv_AlignExposures_Type;
    pyopencv_AlignMTB_Type.tp_dealloc = pyopencv_AlignMTB_dealloc;
    pyopencv_AlignMTB_Type.tp_repr = pyopencv_AlignMTB_repr;
    pyopencv_AlignMTB_Type.tp_getset = pyopencv_AlignMTB_getseters;
    pyopencv_AlignMTB_Type.tp_methods = pyopencv_AlignMTB_methods;
}

static PyObject* pyopencv_CalibrateCRF_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateCRF %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateCRF_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_CalibrateCRF_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateCRF* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateCRF_Type))
        _self_ = dynamic_cast<cv::CalibrateCRF*>(((pyopencv_CalibrateCRF_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateCRF' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:CalibrateCRF.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:CalibrateCRF.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateCRF_methods[] =
{
    {"process", (PyCFunction)pyopencv_cv_CalibrateCRF_process, METH_VARARGS | METH_KEYWORDS, "process(src, times[, dst]) -> dst\n.   @brief Recovers inverse camera response.\n.   \n.   @param src vector of input images\n.   @param dst 256x1 matrix with inverse camera response function\n.   @param times vector of exposure time values for each image"},

    {NULL,          NULL}
};

static void pyopencv_CalibrateCRF_specials(void)
{
    pyopencv_CalibrateCRF_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_CalibrateCRF_Type.tp_dealloc = pyopencv_CalibrateCRF_dealloc;
    pyopencv_CalibrateCRF_Type.tp_repr = pyopencv_CalibrateCRF_repr;
    pyopencv_CalibrateCRF_Type.tp_getset = pyopencv_CalibrateCRF_getseters;
    pyopencv_CalibrateCRF_Type.tp_methods = pyopencv_CalibrateCRF_methods;
}

static PyObject* pyopencv_CalibrateDebevec_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateDebevec %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_CalibrateDebevec_getLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLambda());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_getRandom(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRandom());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_getSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    float lambda=0.f;

    const char* keywords[] = { "lambda", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:CalibrateDebevec.setLambda", (char**)keywords, &lambda) )
    {
        ERRWRAP2(_self_->setLambda(lambda));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setRandom(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    bool random=0;

    const char* keywords[] = { "random", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:CalibrateDebevec.setRandom", (char**)keywords, &random) )
    {
        ERRWRAP2(_self_->setRandom(random));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    int samples=0;

    const char* keywords[] = { "samples", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:CalibrateDebevec.setSamples", (char**)keywords, &samples) )
    {
        ERRWRAP2(_self_->setSamples(samples));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateDebevec_methods[] =
{
    {"getLambda", (PyCFunction)pyopencv_cv_CalibrateDebevec_getLambda, METH_VARARGS | METH_KEYWORDS, "getLambda() -> retval\n."},
    {"getRandom", (PyCFunction)pyopencv_cv_CalibrateDebevec_getRandom, METH_VARARGS | METH_KEYWORDS, "getRandom() -> retval\n."},
    {"getSamples", (PyCFunction)pyopencv_cv_CalibrateDebevec_getSamples, METH_VARARGS | METH_KEYWORDS, "getSamples() -> retval\n."},
    {"setLambda", (PyCFunction)pyopencv_cv_CalibrateDebevec_setLambda, METH_VARARGS | METH_KEYWORDS, "setLambda(lambda) -> None\n."},
    {"setRandom", (PyCFunction)pyopencv_cv_CalibrateDebevec_setRandom, METH_VARARGS | METH_KEYWORDS, "setRandom(random) -> None\n."},
    {"setSamples", (PyCFunction)pyopencv_cv_CalibrateDebevec_setSamples, METH_VARARGS | METH_KEYWORDS, "setSamples(samples) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_CalibrateDebevec_specials(void)
{
    pyopencv_CalibrateDebevec_Type.tp_base = &pyopencv_CalibrateCRF_Type;
    pyopencv_CalibrateDebevec_Type.tp_dealloc = pyopencv_CalibrateDebevec_dealloc;
    pyopencv_CalibrateDebevec_Type.tp_repr = pyopencv_CalibrateDebevec_repr;
    pyopencv_CalibrateDebevec_Type.tp_getset = pyopencv_CalibrateDebevec_getseters;
    pyopencv_CalibrateDebevec_Type.tp_methods = pyopencv_CalibrateDebevec_methods;
}

static PyObject* pyopencv_CalibrateRobertson_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateRobertson %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_CalibrateRobertson_getMaxIter(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxIter());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_getRadiance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRadiance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_setMaxIter(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    int max_iter=0;

    const char* keywords[] = { "max_iter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:CalibrateRobertson.setMaxIter", (char**)keywords, &max_iter) )
    {
        ERRWRAP2(_self_->setMaxIter(max_iter));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::CalibrateRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    float threshold=0.f;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:CalibrateRobertson.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateRobertson_methods[] =
{
    {"getMaxIter", (PyCFunction)pyopencv_cv_CalibrateRobertson_getMaxIter, METH_VARARGS | METH_KEYWORDS, "getMaxIter() -> retval\n."},
    {"getRadiance", (PyCFunction)pyopencv_cv_CalibrateRobertson_getRadiance, METH_VARARGS | METH_KEYWORDS, "getRadiance() -> retval\n."},
    {"getThreshold", (PyCFunction)pyopencv_cv_CalibrateRobertson_getThreshold, METH_VARARGS | METH_KEYWORDS, "getThreshold() -> retval\n."},
    {"setMaxIter", (PyCFunction)pyopencv_cv_CalibrateRobertson_setMaxIter, METH_VARARGS | METH_KEYWORDS, "setMaxIter(max_iter) -> None\n."},
    {"setThreshold", (PyCFunction)pyopencv_cv_CalibrateRobertson_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_CalibrateRobertson_specials(void)
{
    pyopencv_CalibrateRobertson_Type.tp_base = &pyopencv_CalibrateCRF_Type;
    pyopencv_CalibrateRobertson_Type.tp_dealloc = pyopencv_CalibrateRobertson_dealloc;
    pyopencv_CalibrateRobertson_Type.tp_repr = pyopencv_CalibrateRobertson_repr;
    pyopencv_CalibrateRobertson_Type.tp_getset = pyopencv_CalibrateRobertson_getseters;
    pyopencv_CalibrateRobertson_Type.tp_methods = pyopencv_CalibrateRobertson_methods;
}

static PyObject* pyopencv_MergeExposures_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeExposures %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_MergeExposures_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeExposures* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeExposures_Type))
        _self_ = dynamic_cast<cv::MergeExposures*>(((pyopencv_MergeExposures_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeExposures' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeExposures.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeExposures.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeExposures_methods[] =
{
    {"process", (PyCFunction)pyopencv_cv_MergeExposures_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst\n.   @brief Merges images.\n.   \n.   @param src vector of input images\n.   @param dst result image\n.   @param times vector of exposure time values for each image\n.   @param response 256x1 matrix with inverse camera response function for each pixel value, it should\n.   have the same number of channels as images."},

    {NULL,          NULL}
};

static void pyopencv_MergeExposures_specials(void)
{
    pyopencv_MergeExposures_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_MergeExposures_Type.tp_dealloc = pyopencv_MergeExposures_dealloc;
    pyopencv_MergeExposures_Type.tp_repr = pyopencv_MergeExposures_repr;
    pyopencv_MergeExposures_Type.tp_getset = pyopencv_MergeExposures_getseters;
    pyopencv_MergeExposures_Type.tp_methods = pyopencv_MergeExposures_methods;
}

static PyObject* pyopencv_MergeDebevec_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeDebevec %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_MergeDebevec_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeDebevec* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeDebevec_Type))
        _self_ = dynamic_cast<cv::MergeDebevec*>(((pyopencv_MergeDebevec_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeDebevec' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeDebevec_methods[] =
{
    {"process", (PyCFunction)pyopencv_cv_MergeDebevec_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src, times[, dst]) -> dst\n."},

    {NULL,          NULL}
};

static void pyopencv_MergeDebevec_specials(void)
{
    pyopencv_MergeDebevec_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeDebevec_Type.tp_dealloc = pyopencv_MergeDebevec_dealloc;
    pyopencv_MergeDebevec_Type.tp_repr = pyopencv_MergeDebevec_repr;
    pyopencv_MergeDebevec_Type.tp_getset = pyopencv_MergeDebevec_getseters;
    pyopencv_MergeDebevec_Type.tp_methods = pyopencv_MergeDebevec_methods;
}

static PyObject* pyopencv_MergeMertens_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeMertens %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeMertens_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_MergeMertens_getContrastWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getContrastWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_getExposureWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExposureWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_getSaturationWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturationWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setContrastWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float contrast_weiht=0.f;

    const char* keywords[] = { "contrast_weiht", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setContrastWeight", (char**)keywords, &contrast_weiht) )
    {
        ERRWRAP2(_self_->setContrastWeight(contrast_weiht));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setExposureWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float exposure_weight=0.f;

    const char* keywords[] = { "exposure_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setExposureWeight", (char**)keywords, &exposure_weight) )
    {
        ERRWRAP2(_self_->setExposureWeight(exposure_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setSaturationWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeMertens* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    float saturation_weight=0.f;

    const char* keywords[] = { "saturation_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setSaturationWeight", (char**)keywords, &saturation_weight) )
    {
        ERRWRAP2(_self_->setSaturationWeight(saturation_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeMertens_methods[] =
{
    {"getContrastWeight", (PyCFunction)pyopencv_cv_MergeMertens_getContrastWeight, METH_VARARGS | METH_KEYWORDS, "getContrastWeight() -> retval\n."},
    {"getExposureWeight", (PyCFunction)pyopencv_cv_MergeMertens_getExposureWeight, METH_VARARGS | METH_KEYWORDS, "getExposureWeight() -> retval\n."},
    {"getSaturationWeight", (PyCFunction)pyopencv_cv_MergeMertens_getSaturationWeight, METH_VARARGS | METH_KEYWORDS, "getSaturationWeight() -> retval\n."},
    {"process", (PyCFunction)pyopencv_cv_MergeMertens_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src[, dst]) -> dst\n.   @brief Short version of process, that doesn't take extra arguments.\n.   \n.   @param src vector of input images\n.   @param dst result image"},
    {"setContrastWeight", (PyCFunction)pyopencv_cv_MergeMertens_setContrastWeight, METH_VARARGS | METH_KEYWORDS, "setContrastWeight(contrast_weiht) -> None\n."},
    {"setExposureWeight", (PyCFunction)pyopencv_cv_MergeMertens_setExposureWeight, METH_VARARGS | METH_KEYWORDS, "setExposureWeight(exposure_weight) -> None\n."},
    {"setSaturationWeight", (PyCFunction)pyopencv_cv_MergeMertens_setSaturationWeight, METH_VARARGS | METH_KEYWORDS, "setSaturationWeight(saturation_weight) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_MergeMertens_specials(void)
{
    pyopencv_MergeMertens_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeMertens_Type.tp_dealloc = pyopencv_MergeMertens_dealloc;
    pyopencv_MergeMertens_Type.tp_repr = pyopencv_MergeMertens_repr;
    pyopencv_MergeMertens_Type.tp_getset = pyopencv_MergeMertens_getseters;
    pyopencv_MergeMertens_Type.tp_methods = pyopencv_MergeMertens_methods;
}

static PyObject* pyopencv_MergeRobertson_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeRobertson %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_MergeRobertson_process(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MergeRobertson* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MergeRobertson_Type))
        _self_ = dynamic_cast<cv::MergeRobertson*>(((pyopencv_MergeRobertson_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MergeRobertson' or its derivative)");
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeRobertson_methods[] =
{
    {"process", (PyCFunction)pyopencv_cv_MergeRobertson_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src, times[, dst]) -> dst\n."},

    {NULL,          NULL}
};

static void pyopencv_MergeRobertson_specials(void)
{
    pyopencv_MergeRobertson_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeRobertson_Type.tp_dealloc = pyopencv_MergeRobertson_dealloc;
    pyopencv_MergeRobertson_Type.tp_repr = pyopencv_MergeRobertson_repr;
    pyopencv_MergeRobertson_Type.tp_getset = pyopencv_MergeRobertson_getseters;
    pyopencv_MergeRobertson_Type.tp_methods = pyopencv_MergeRobertson_methods;
}

static PyObject* pyopencv_BackgroundSubtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BackgroundSubtractor_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractor_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractor*>(((pyopencv_BackgroundSubtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractor_getBackgroundImage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractor_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractor*>(((pyopencv_BackgroundSubtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    {
    PyObject* pyobj_backgroundImage = NULL;
    Mat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_backgroundImage = NULL;
    UMat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractor_methods[] =
{
    {"apply", (PyCFunction)pyopencv_cv_BackgroundSubtractor_apply, METH_VARARGS | METH_KEYWORDS, "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.   @param image Next video frame.\n.   @param fgmask The output foreground mask as an 8-bit binary image.\n.   @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.   learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.   rate. 0 means that the background model is not updated at all, 1 means that the background model\n.   is completely reinitialized from the last frame."},
    {"getBackgroundImage", (PyCFunction)pyopencv_cv_BackgroundSubtractor_getBackgroundImage, METH_VARARGS | METH_KEYWORDS, "getBackgroundImage([, backgroundImage]) -> backgroundImage\n.   @brief Computes a background image.\n.   \n.   @param backgroundImage The output background image.\n.   \n.   @note Sometimes the background image can be very blurry, as it contain the average background\n.   statistics."},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractor_specials(void)
{
    pyopencv_BackgroundSubtractor_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_BackgroundSubtractor_Type.tp_dealloc = pyopencv_BackgroundSubtractor_dealloc;
    pyopencv_BackgroundSubtractor_Type.tp_repr = pyopencv_BackgroundSubtractor_repr;
    pyopencv_BackgroundSubtractor_Type.tp_getset = pyopencv_BackgroundSubtractor_getseters;
    pyopencv_BackgroundSubtractor_Type.tp_methods = pyopencv_BackgroundSubtractor_methods;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorMOG2 %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorMOG2_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackgroundRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getComplexityReductionThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNMixtures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarInit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarInit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThresholdGen());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double ratio=0;

    const char* keywords[] = { "ratio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setBackgroundRatio", (char**)keywords, &ratio) )
    {
        ERRWRAP2(_self_->setBackgroundRatio(ratio));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double ct=0;

    const char* keywords[] = { "ct", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setComplexityReductionThreshold", (char**)keywords, &ct) )
    {
        ERRWRAP2(_self_->setComplexityReductionThreshold(ct));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorMOG2.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int nmixtures=0;

    const char* keywords[] = { "nmixtures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setNMixtures", (char**)keywords, &nmixtures) )
    {
        ERRWRAP2(_self_->setNMixtures(nmixtures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarInit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double varInit=0;

    const char* keywords[] = { "varInit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarInit", (char**)keywords, &varInit) )
    {
        ERRWRAP2(_self_->setVarInit(varInit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double varMax=0;

    const char* keywords[] = { "varMax", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMax", (char**)keywords, &varMax) )
    {
        ERRWRAP2(_self_->setVarMax(varMax));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double varMin=0;

    const char* keywords[] = { "varMin", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMin", (char**)keywords, &varMin) )
    {
        ERRWRAP2(_self_->setVarMin(varMin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double varThreshold=0;

    const char* keywords[] = { "varThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThreshold", (char**)keywords, &varThreshold) )
    {
        ERRWRAP2(_self_->setVarThreshold(varThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorMOG2* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    double varThresholdGen=0;

    const char* keywords[] = { "varThresholdGen", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThresholdGen", (char**)keywords, &varThresholdGen) )
    {
        ERRWRAP2(_self_->setVarThresholdGen(varThresholdGen));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorMOG2_methods[] =
{
    {"apply", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_apply, METH_VARARGS | METH_KEYWORDS, "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.   @param image Next video frame. Floating point frame will be used without scaling and should be in range \\f$[0,255]\\f$.\n.   @param fgmask The output foreground mask as an 8-bit binary image.\n.   @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.   learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.   rate. 0 means that the background model is not updated at all, 1 means that the background model\n.   is completely reinitialized from the last frame."},
    {"getBackgroundRatio", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio, METH_VARARGS | METH_KEYWORDS, "getBackgroundRatio() -> retval\n.   @brief Returns the \"background ratio\" parameter of the algorithm\n.   \n.   If a foreground pixel keeps semi-constant value for about backgroundRatio\\*history frames, it's\n.   considered background and added to the model as a center of a new component. It corresponds to TB\n.   parameter in the paper."},
    {"getComplexityReductionThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold, METH_VARARGS | METH_KEYWORDS, "getComplexityReductionThreshold() -> retval\n.   @brief Returns the complexity reduction threshold\n.   \n.   This parameter defines the number of samples needed to accept to prove the component exists. CT=0.05\n.   is a default value for all the samples. By setting CT=0 you get an algorithm very similar to the\n.   standard Stauffer&Grimson algorithm."},
    {"getDetectShadows", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows, METH_VARARGS | METH_KEYWORDS, "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.   If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorMOG2 for\n.   details."},
    {"getHistory", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getHistory, METH_VARARGS | METH_KEYWORDS, "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNMixtures", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures, METH_VARARGS | METH_KEYWORDS, "getNMixtures() -> retval\n.   @brief Returns the number of gaussian components in the background model"},
    {"getShadowThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold, METH_VARARGS | METH_KEYWORDS, "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.   A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.   the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.   is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.   *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue, METH_VARARGS | METH_KEYWORDS, "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.   Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.   in the mask always means background, 255 means foreground."},
    {"getVarInit", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getVarInit, METH_VARARGS | METH_KEYWORDS, "getVarInit() -> retval\n.   @brief Returns the initial variance of each gaussian component"},
    {"getVarMax", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getVarMax, METH_VARARGS | METH_KEYWORDS, "getVarMax() -> retval\n."},
    {"getVarMin", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getVarMin, METH_VARARGS | METH_KEYWORDS, "getVarMin() -> retval\n."},
    {"getVarThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold, METH_VARARGS | METH_KEYWORDS, "getVarThreshold() -> retval\n.   @brief Returns the variance threshold for the pixel-model match\n.   \n.   The main threshold on the squared Mahalanobis distance to decide if the sample is well described by\n.   the background model or not. Related to Cthr from the paper."},
    {"getVarThresholdGen", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen, METH_VARARGS | METH_KEYWORDS, "getVarThresholdGen() -> retval\n.   @brief Returns the variance threshold for the pixel-model match used for new mixture component generation\n.   \n.   Threshold for the squared Mahalanobis distance that helps decide when a sample is close to the\n.   existing components (corresponds to Tg in the paper). If a pixel is not close to any component, it\n.   is considered foreground or added as a new component. 3 sigma =\\> Tg=3\\*3=9 is default. A smaller Tg\n.   value generates more components. A higher Tg value may result in a small number of components but\n.   they can grow too large."},
    {"setBackgroundRatio", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio, METH_VARARGS | METH_KEYWORDS, "setBackgroundRatio(ratio) -> None\n.   @brief Sets the \"background ratio\" parameter of the algorithm"},
    {"setComplexityReductionThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold, METH_VARARGS | METH_KEYWORDS, "setComplexityReductionThreshold(ct) -> None\n.   @brief Sets the complexity reduction threshold"},
    {"setDetectShadows", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows, METH_VARARGS | METH_KEYWORDS, "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setHistory", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setHistory, METH_VARARGS | METH_KEYWORDS, "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNMixtures", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures, METH_VARARGS | METH_KEYWORDS, "setNMixtures(nmixtures) -> None\n.   @brief Sets the number of gaussian components in the background model.\n.   \n.   The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold, METH_VARARGS | METH_KEYWORDS, "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue, METH_VARARGS | METH_KEYWORDS, "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setVarInit", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setVarInit, METH_VARARGS | METH_KEYWORDS, "setVarInit(varInit) -> None\n.   @brief Sets the initial variance of each gaussian component"},
    {"setVarMax", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setVarMax, METH_VARARGS | METH_KEYWORDS, "setVarMax(varMax) -> None\n."},
    {"setVarMin", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setVarMin, METH_VARARGS | METH_KEYWORDS, "setVarMin(varMin) -> None\n."},
    {"setVarThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold, METH_VARARGS | METH_KEYWORDS, "setVarThreshold(varThreshold) -> None\n.   @brief Sets the variance threshold for the pixel-model match"},
    {"setVarThresholdGen", (PyCFunction)pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen, METH_VARARGS | METH_KEYWORDS, "setVarThresholdGen(varThresholdGen) -> None\n.   @brief Sets the variance threshold for the pixel-model match used for new mixture component generation"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorMOG2_specials(void)
{
    pyopencv_BackgroundSubtractorMOG2_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_dealloc = pyopencv_BackgroundSubtractorMOG2_dealloc;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_repr = pyopencv_BackgroundSubtractorMOG2_repr;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_getset = pyopencv_BackgroundSubtractorMOG2_getseters;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_methods = pyopencv_BackgroundSubtractorMOG2_methods;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorKNN %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorKNN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDist2Threshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getkNNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorKNN.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    double _dist2Threshold=0;

    const char* keywords[] = { "_dist2Threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setDist2Threshold", (char**)keywords, &_dist2Threshold) )
    {
        ERRWRAP2(_self_->setDist2Threshold(_dist2Threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int _nN=0;

    const char* keywords[] = { "_nN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setNSamples", (char**)keywords, &_nN) )
    {
        ERRWRAP2(_self_->setNSamples(_nN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BackgroundSubtractorKNN* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    int _nkNN=0;

    const char* keywords[] = { "_nkNN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setkNNSamples", (char**)keywords, &_nkNN) )
    {
        ERRWRAP2(_self_->setkNNSamples(_nkNN));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorKNN_methods[] =
{
    {"getDetectShadows", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows, METH_VARARGS | METH_KEYWORDS, "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.   If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorKNN for\n.   details."},
    {"getDist2Threshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold, METH_VARARGS | METH_KEYWORDS, "getDist2Threshold() -> retval\n.   @brief Returns the threshold on the squared distance between the pixel and the sample\n.   \n.   The threshold on the squared distance between the pixel and the sample to decide whether a pixel is\n.   close to a data sample."},
    {"getHistory", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getHistory, METH_VARARGS | METH_KEYWORDS, "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNSamples", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getNSamples, METH_VARARGS | METH_KEYWORDS, "getNSamples() -> retval\n.   @brief Returns the number of data samples in the background model"},
    {"getShadowThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold, METH_VARARGS | METH_KEYWORDS, "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.   A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.   the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.   is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.   *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getShadowValue, METH_VARARGS | METH_KEYWORDS, "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.   Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.   in the mask always means background, 255 means foreground."},
    {"getkNNSamples", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples, METH_VARARGS | METH_KEYWORDS, "getkNNSamples() -> retval\n.   @brief Returns the number of neighbours, the k in the kNN.\n.   \n.   K is the number of samples that need to be within dist2Threshold in order to decide that that\n.   pixel is matching the kNN background model."},
    {"setDetectShadows", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows, METH_VARARGS | METH_KEYWORDS, "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setDist2Threshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold, METH_VARARGS | METH_KEYWORDS, "setDist2Threshold(_dist2Threshold) -> None\n.   @brief Sets the threshold on the squared distance"},
    {"setHistory", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setHistory, METH_VARARGS | METH_KEYWORDS, "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNSamples", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setNSamples, METH_VARARGS | METH_KEYWORDS, "setNSamples(_nN) -> None\n.   @brief Sets the number of data samples in the background model.\n.   \n.   The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold, METH_VARARGS | METH_KEYWORDS, "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setShadowValue, METH_VARARGS | METH_KEYWORDS, "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setkNNSamples", (PyCFunction)pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples, METH_VARARGS | METH_KEYWORDS, "setkNNSamples(_nkNN) -> None\n.   @brief Sets the k in the kNN. How many nearest neigbours need to match."},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorKNN_specials(void)
{
    pyopencv_BackgroundSubtractorKNN_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorKNN_Type.tp_dealloc = pyopencv_BackgroundSubtractorKNN_dealloc;
    pyopencv_BackgroundSubtractorKNN_Type.tp_repr = pyopencv_BackgroundSubtractorKNN_repr;
    pyopencv_BackgroundSubtractorKNN_Type.tp_getset = pyopencv_BackgroundSubtractorKNN_getseters;
    pyopencv_BackgroundSubtractorKNN_Type.tp_methods = pyopencv_BackgroundSubtractorKNN_methods;
}

static PyObject* pyopencv_KalmanFilter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KalmanFilter %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KalmanFilter_get_controlMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->controlMatrix);
}

static int pyopencv_KalmanFilter_set_controlMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the controlMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->controlMatrix) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPost);
}

static int pyopencv_KalmanFilter_set_errorCovPost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPost attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->errorCovPost) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPre);
}

static int pyopencv_KalmanFilter_set_errorCovPre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPre attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->errorCovPre) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_gain(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->gain);
}

static int pyopencv_KalmanFilter_set_gain(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the gain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->gain) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementMatrix);
}

static int pyopencv_KalmanFilter_set_measurementMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->measurementMatrix) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementNoiseCov);
}

static int pyopencv_KalmanFilter_set_measurementNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementNoiseCov attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->measurementNoiseCov) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_processNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->processNoiseCov);
}

static int pyopencv_KalmanFilter_set_processNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the processNoiseCov attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->processNoiseCov) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePost);
}

static int pyopencv_KalmanFilter_set_statePost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePost attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->statePost) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePre);
}

static int pyopencv_KalmanFilter_set_statePre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePre attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->statePre) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_transitionMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->transitionMatrix);
}

static int pyopencv_KalmanFilter_set_transitionMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the transitionMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->transitionMatrix) ? 0 : -1;
}


static PyGetSetDef pyopencv_KalmanFilter_getseters[] =
{
    {(char*)"controlMatrix", (getter)pyopencv_KalmanFilter_get_controlMatrix, (setter)pyopencv_KalmanFilter_set_controlMatrix, (char*)"controlMatrix", NULL},
    {(char*)"errorCovPost", (getter)pyopencv_KalmanFilter_get_errorCovPost, (setter)pyopencv_KalmanFilter_set_errorCovPost, (char*)"errorCovPost", NULL},
    {(char*)"errorCovPre", (getter)pyopencv_KalmanFilter_get_errorCovPre, (setter)pyopencv_KalmanFilter_set_errorCovPre, (char*)"errorCovPre", NULL},
    {(char*)"gain", (getter)pyopencv_KalmanFilter_get_gain, (setter)pyopencv_KalmanFilter_set_gain, (char*)"gain", NULL},
    {(char*)"measurementMatrix", (getter)pyopencv_KalmanFilter_get_measurementMatrix, (setter)pyopencv_KalmanFilter_set_measurementMatrix, (char*)"measurementMatrix", NULL},
    {(char*)"measurementNoiseCov", (getter)pyopencv_KalmanFilter_get_measurementNoiseCov, (setter)pyopencv_KalmanFilter_set_measurementNoiseCov, (char*)"measurementNoiseCov", NULL},
    {(char*)"processNoiseCov", (getter)pyopencv_KalmanFilter_get_processNoiseCov, (setter)pyopencv_KalmanFilter_set_processNoiseCov, (char*)"processNoiseCov", NULL},
    {(char*)"statePost", (getter)pyopencv_KalmanFilter_get_statePost, (setter)pyopencv_KalmanFilter_set_statePost, (char*)"statePost", NULL},
    {(char*)"statePre", (getter)pyopencv_KalmanFilter_get_statePre, (setter)pyopencv_KalmanFilter_set_statePre, (char*)"statePre", NULL},
    {(char*)"transitionMatrix", (getter)pyopencv_KalmanFilter_get_transitionMatrix, (setter)pyopencv_KalmanFilter_set_transitionMatrix, (char*)"transitionMatrix", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_KalmanFilter_correct(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KalmanFilter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        _self_ = ((pyopencv_KalmanFilter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    {
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_KalmanFilter_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KalmanFilter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        _self_ = ((pyopencv_KalmanFilter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    {
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_KalmanFilter_methods[] =
{
    {"correct", (PyCFunction)pyopencv_cv_KalmanFilter_correct, METH_VARARGS | METH_KEYWORDS, "correct(measurement) -> retval\n.   @brief Updates the predicted state from the measurement.\n.   \n.   @param measurement The measured system parameters"},
    {"predict", (PyCFunction)pyopencv_cv_KalmanFilter_predict, METH_VARARGS | METH_KEYWORDS, "predict([, control]) -> retval\n.   @brief Computes a predicted state.\n.   \n.   @param control The optional input control"},

    {NULL,          NULL}
};

static void pyopencv_KalmanFilter_specials(void)
{
    pyopencv_KalmanFilter_Type.tp_base = NULL;
    pyopencv_KalmanFilter_Type.tp_dealloc = pyopencv_KalmanFilter_dealloc;
    pyopencv_KalmanFilter_Type.tp_repr = pyopencv_KalmanFilter_repr;
    pyopencv_KalmanFilter_Type.tp_getset = pyopencv_KalmanFilter_getseters;
    pyopencv_KalmanFilter_Type.tp_methods = pyopencv_KalmanFilter_methods;
}

static PyObject* pyopencv_DenseOpticalFlow_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DenseOpticalFlow %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DenseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_DenseOpticalFlow_calc(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DenseOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DenseOpticalFlow_Type))
        _self_ = dynamic_cast<cv::DenseOpticalFlow*>(((pyopencv_DenseOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");
    {
    PyObject* pyobj_I0 = NULL;
    Mat I0;
    PyObject* pyobj_I1 = NULL;
    Mat I1;
    PyObject* pyobj_flow = NULL;
    Mat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_I0 = NULL;
    UMat I0;
    PyObject* pyobj_I1 = NULL;
    UMat I1;
    PyObject* pyobj_flow = NULL;
    UMat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DenseOpticalFlow_collectGarbage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DenseOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DenseOpticalFlow_Type))
        _self_ = dynamic_cast<cv::DenseOpticalFlow*>(((pyopencv_DenseOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_DenseOpticalFlow_methods[] =
{
    {"calc", (PyCFunction)pyopencv_cv_DenseOpticalFlow_calc, METH_VARARGS | METH_KEYWORDS, "calc(I0, I1, flow) -> flow\n.   @brief Calculates an optical flow.\n.   \n.   @param I0 first 8-bit single-channel input image.\n.   @param I1 second input image of the same size and the same type as prev.\n.   @param flow computed flow image that has the same size as prev and type CV_32FC2."},
    {"collectGarbage", (PyCFunction)pyopencv_cv_DenseOpticalFlow_collectGarbage, METH_VARARGS | METH_KEYWORDS, "collectGarbage() -> None\n.   @brief Releases all inner buffers."},

    {NULL,          NULL}
};

static void pyopencv_DenseOpticalFlow_specials(void)
{
    pyopencv_DenseOpticalFlow_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_DenseOpticalFlow_Type.tp_dealloc = pyopencv_DenseOpticalFlow_dealloc;
    pyopencv_DenseOpticalFlow_Type.tp_repr = pyopencv_DenseOpticalFlow_repr;
    pyopencv_DenseOpticalFlow_Type.tp_getset = pyopencv_DenseOpticalFlow_getseters;
    pyopencv_DenseOpticalFlow_Type.tp_methods = pyopencv_DenseOpticalFlow_methods;
}

static PyObject* pyopencv_SparseOpticalFlow_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SparseOpticalFlow %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SparseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_SparseOpticalFlow_calc(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparseOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparseOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparseOpticalFlow*>(((pyopencv_SparseOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparseOpticalFlow' or its derivative)");
    {
    PyObject* pyobj_prevImg = NULL;
    Mat prevImg;
    PyObject* pyobj_nextImg = NULL;
    Mat nextImg;
    PyObject* pyobj_prevPts = NULL;
    Mat prevPts;
    PyObject* pyobj_nextPts = NULL;
    Mat nextPts;
    PyObject* pyobj_status = NULL;
    Mat status;
    PyObject* pyobj_err = NULL;
    Mat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_prevImg = NULL;
    UMat prevImg;
    PyObject* pyobj_nextImg = NULL;
    UMat nextImg;
    PyObject* pyobj_prevPts = NULL;
    UMat prevPts;
    PyObject* pyobj_nextPts = NULL;
    UMat nextPts;
    PyObject* pyobj_status = NULL;
    UMat status;
    PyObject* pyobj_err = NULL;
    UMat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_SparseOpticalFlow_methods[] =
{
    {"calc", (PyCFunction)pyopencv_cv_SparseOpticalFlow_calc, METH_VARARGS | METH_KEYWORDS, "calc(prevImg, nextImg, prevPts, nextPts[, status[, err]]) -> nextPts, status, err\n.   @brief Calculates a sparse optical flow.\n.   \n.   @param prevImg First input image.\n.   @param nextImg Second input image of the same size and the same type as prevImg.\n.   @param prevPts Vector of 2D points for which the flow needs to be found.\n.   @param nextPts Output vector of 2D points containing the calculated new positions of input features in the second image.\n.   @param status Output status vector. Each element of the vector is set to 1 if the\n.   flow for the corresponding features has been found. Otherwise, it is set to 0.\n.   @param err Optional output vector that contains error response for each point (inverse confidence)."},

    {NULL,          NULL}
};

static void pyopencv_SparseOpticalFlow_specials(void)
{
    pyopencv_SparseOpticalFlow_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_SparseOpticalFlow_Type.tp_dealloc = pyopencv_SparseOpticalFlow_dealloc;
    pyopencv_SparseOpticalFlow_Type.tp_repr = pyopencv_SparseOpticalFlow_repr;
    pyopencv_SparseOpticalFlow_Type.tp_getset = pyopencv_SparseOpticalFlow_getseters;
    pyopencv_SparseOpticalFlow_Type.tp_methods = pyopencv_SparseOpticalFlow_methods;
}

static PyObject* pyopencv_DualTVL1OpticalFlow_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DualTVL1OpticalFlow %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DualTVL1OpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEpsilon());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getInnerIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getInnerIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLambda());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getMedianFiltering(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMedianFiltering());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getOuterIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOuterIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getScalesNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScalesNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getTau(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTau());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getTheta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTheta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getUseInitialFlow(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseInitialFlow());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getWarpingsNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWarpingsNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setEpsilon", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setEpsilon(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setGamma", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setInnerIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setInnerIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setInnerIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setLambda", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setLambda(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setMedianFiltering(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setMedianFiltering", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMedianFiltering(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setOuterIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setOuterIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setOuterIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setScaleStep", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setScaleStep(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setScalesNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setScalesNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setScalesNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setTau(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setTau", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTau(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setTheta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setTheta", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTheta(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setUseInitialFlow(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:DualTVL1OpticalFlow.setUseInitialFlow", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUseInitialFlow(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setWarpingsNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DualTVL1OpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DualTVL1OpticalFlow_Type))
        _self_ = dynamic_cast<cv::DualTVL1OpticalFlow*>(((pyopencv_DualTVL1OpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setWarpingsNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWarpingsNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_DualTVL1OpticalFlow_methods[] =
{
    {"getEpsilon", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getEpsilon, METH_VARARGS | METH_KEYWORDS, "getEpsilon() -> retval\n.   @see setEpsilon"},
    {"getGamma", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getGamma, METH_VARARGS | METH_KEYWORDS, "getGamma() -> retval\n.   @see setGamma"},
    {"getInnerIterations", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getInnerIterations, METH_VARARGS | METH_KEYWORDS, "getInnerIterations() -> retval\n.   @see setInnerIterations"},
    {"getLambda", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getLambda, METH_VARARGS | METH_KEYWORDS, "getLambda() -> retval\n.   @see setLambda"},
    {"getMedianFiltering", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getMedianFiltering, METH_VARARGS | METH_KEYWORDS, "getMedianFiltering() -> retval\n.   @see setMedianFiltering"},
    {"getOuterIterations", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getOuterIterations, METH_VARARGS | METH_KEYWORDS, "getOuterIterations() -> retval\n.   @see setOuterIterations"},
    {"getScaleStep", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getScaleStep, METH_VARARGS | METH_KEYWORDS, "getScaleStep() -> retval\n.   @see setScaleStep"},
    {"getScalesNumber", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getScalesNumber, METH_VARARGS | METH_KEYWORDS, "getScalesNumber() -> retval\n.   @see setScalesNumber"},
    {"getTau", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getTau, METH_VARARGS | METH_KEYWORDS, "getTau() -> retval\n.   @see setTau"},
    {"getTheta", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getTheta, METH_VARARGS | METH_KEYWORDS, "getTheta() -> retval\n.   @see setTheta"},
    {"getUseInitialFlow", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getUseInitialFlow, METH_VARARGS | METH_KEYWORDS, "getUseInitialFlow() -> retval\n.   @see setUseInitialFlow"},
    {"getWarpingsNumber", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_getWarpingsNumber, METH_VARARGS | METH_KEYWORDS, "getWarpingsNumber() -> retval\n.   @see setWarpingsNumber"},
    {"setEpsilon", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setEpsilon, METH_VARARGS | METH_KEYWORDS, "setEpsilon(val) -> None\n.   @copybrief getEpsilon @see getEpsilon"},
    {"setGamma", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setGamma, METH_VARARGS | METH_KEYWORDS, "setGamma(val) -> None\n.   @copybrief getGamma @see getGamma"},
    {"setInnerIterations", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setInnerIterations, METH_VARARGS | METH_KEYWORDS, "setInnerIterations(val) -> None\n.   @copybrief getInnerIterations @see getInnerIterations"},
    {"setLambda", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setLambda, METH_VARARGS | METH_KEYWORDS, "setLambda(val) -> None\n.   @copybrief getLambda @see getLambda"},
    {"setMedianFiltering", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setMedianFiltering, METH_VARARGS | METH_KEYWORDS, "setMedianFiltering(val) -> None\n.   @copybrief getMedianFiltering @see getMedianFiltering"},
    {"setOuterIterations", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setOuterIterations, METH_VARARGS | METH_KEYWORDS, "setOuterIterations(val) -> None\n.   @copybrief getOuterIterations @see getOuterIterations"},
    {"setScaleStep", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setScaleStep, METH_VARARGS | METH_KEYWORDS, "setScaleStep(val) -> None\n.   @copybrief getScaleStep @see getScaleStep"},
    {"setScalesNumber", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setScalesNumber, METH_VARARGS | METH_KEYWORDS, "setScalesNumber(val) -> None\n.   @copybrief getScalesNumber @see getScalesNumber"},
    {"setTau", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setTau, METH_VARARGS | METH_KEYWORDS, "setTau(val) -> None\n.   @copybrief getTau @see getTau"},
    {"setTheta", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setTheta, METH_VARARGS | METH_KEYWORDS, "setTheta(val) -> None\n.   @copybrief getTheta @see getTheta"},
    {"setUseInitialFlow", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setUseInitialFlow, METH_VARARGS | METH_KEYWORDS, "setUseInitialFlow(val) -> None\n.   @copybrief getUseInitialFlow @see getUseInitialFlow"},
    {"setWarpingsNumber", (PyCFunction)pyopencv_cv_DualTVL1OpticalFlow_setWarpingsNumber, METH_VARARGS | METH_KEYWORDS, "setWarpingsNumber(val) -> None\n.   @copybrief getWarpingsNumber @see getWarpingsNumber"},

    {NULL,          NULL}
};

static void pyopencv_DualTVL1OpticalFlow_specials(void)
{
    pyopencv_DualTVL1OpticalFlow_Type.tp_base = &pyopencv_DenseOpticalFlow_Type;
    pyopencv_DualTVL1OpticalFlow_Type.tp_dealloc = pyopencv_DualTVL1OpticalFlow_dealloc;
    pyopencv_DualTVL1OpticalFlow_Type.tp_repr = pyopencv_DualTVL1OpticalFlow_repr;
    pyopencv_DualTVL1OpticalFlow_Type.tp_getset = pyopencv_DualTVL1OpticalFlow_getseters;
    pyopencv_DualTVL1OpticalFlow_Type.tp_methods = pyopencv_DualTVL1OpticalFlow_methods;
}

static PyObject* pyopencv_FarnebackOpticalFlow_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FarnebackOpticalFlow %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FarnebackOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFastPyramids(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastPyramids());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumIters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumIters());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolyN(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolyN());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolySigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolySigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPyrScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPyrScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFastPyramids(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    bool fastPyramids=0;

    const char* keywords[] = { "fastPyramids", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:FarnebackOpticalFlow.setFastPyramids", (char**)keywords, &fastPyramids) )
    {
        ERRWRAP2(_self_->setFastPyramids(fastPyramids));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setFlags", (char**)keywords, &flags) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumIters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int numIters=0;

    const char* keywords[] = { "numIters", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setNumIters", (char**)keywords, &numIters) )
    {
        ERRWRAP2(_self_->setNumIters(numIters));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int numLevels=0;

    const char* keywords[] = { "numLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setNumLevels", (char**)keywords, &numLevels) )
    {
        ERRWRAP2(_self_->setNumLevels(numLevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolyN(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int polyN=0;

    const char* keywords[] = { "polyN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setPolyN", (char**)keywords, &polyN) )
    {
        ERRWRAP2(_self_->setPolyN(polyN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolySigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    double polySigma=0;

    const char* keywords[] = { "polySigma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:FarnebackOpticalFlow.setPolySigma", (char**)keywords, &polySigma) )
    {
        ERRWRAP2(_self_->setPolySigma(polySigma));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPyrScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    double pyrScale=0;

    const char* keywords[] = { "pyrScale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:FarnebackOpticalFlow.setPyrScale", (char**)keywords, &pyrScale) )
    {
        ERRWRAP2(_self_->setPyrScale(pyrScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FarnebackOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FarnebackOpticalFlow_Type))
        _self_ = dynamic_cast<cv::FarnebackOpticalFlow*>(((pyopencv_FarnebackOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    int winSize=0;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setWinSize", (char**)keywords, &winSize) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_FarnebackOpticalFlow_methods[] =
{
    {"getFastPyramids", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getFastPyramids, METH_VARARGS | METH_KEYWORDS, "getFastPyramids() -> retval\n."},
    {"getFlags", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getFlags, METH_VARARGS | METH_KEYWORDS, "getFlags() -> retval\n."},
    {"getNumIters", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getNumIters, METH_VARARGS | METH_KEYWORDS, "getNumIters() -> retval\n."},
    {"getNumLevels", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getNumLevels, METH_VARARGS | METH_KEYWORDS, "getNumLevels() -> retval\n."},
    {"getPolyN", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getPolyN, METH_VARARGS | METH_KEYWORDS, "getPolyN() -> retval\n."},
    {"getPolySigma", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getPolySigma, METH_VARARGS | METH_KEYWORDS, "getPolySigma() -> retval\n."},
    {"getPyrScale", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getPyrScale, METH_VARARGS | METH_KEYWORDS, "getPyrScale() -> retval\n."},
    {"getWinSize", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_getWinSize, METH_VARARGS | METH_KEYWORDS, "getWinSize() -> retval\n."},
    {"setFastPyramids", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setFastPyramids, METH_VARARGS | METH_KEYWORDS, "setFastPyramids(fastPyramids) -> None\n."},
    {"setFlags", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setFlags, METH_VARARGS | METH_KEYWORDS, "setFlags(flags) -> None\n."},
    {"setNumIters", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setNumIters, METH_VARARGS | METH_KEYWORDS, "setNumIters(numIters) -> None\n."},
    {"setNumLevels", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setNumLevels, METH_VARARGS | METH_KEYWORDS, "setNumLevels(numLevels) -> None\n."},
    {"setPolyN", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setPolyN, METH_VARARGS | METH_KEYWORDS, "setPolyN(polyN) -> None\n."},
    {"setPolySigma", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setPolySigma, METH_VARARGS | METH_KEYWORDS, "setPolySigma(polySigma) -> None\n."},
    {"setPyrScale", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setPyrScale, METH_VARARGS | METH_KEYWORDS, "setPyrScale(pyrScale) -> None\n."},
    {"setWinSize", (PyCFunction)pyopencv_cv_FarnebackOpticalFlow_setWinSize, METH_VARARGS | METH_KEYWORDS, "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_FarnebackOpticalFlow_specials(void)
{
    pyopencv_FarnebackOpticalFlow_Type.tp_base = &pyopencv_DenseOpticalFlow_Type;
    pyopencv_FarnebackOpticalFlow_Type.tp_dealloc = pyopencv_FarnebackOpticalFlow_dealloc;
    pyopencv_FarnebackOpticalFlow_Type.tp_repr = pyopencv_FarnebackOpticalFlow_repr;
    pyopencv_FarnebackOpticalFlow_Type.tp_getset = pyopencv_FarnebackOpticalFlow_getseters;
    pyopencv_FarnebackOpticalFlow_Type.tp_methods = pyopencv_FarnebackOpticalFlow_methods;
}

static PyObject* pyopencv_SparsePyrLKOpticalFlow_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SparsePyrLKOpticalFlow %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SparsePyrLKOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinEigThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Size retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:SparsePyrLKOpticalFlow.setFlags", (char**)keywords, &flags) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    int maxLevel=0;

    const char* keywords[] = { "maxLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:SparsePyrLKOpticalFlow.setMaxLevel", (char**)keywords, &maxLevel) )
    {
        ERRWRAP2(_self_->setMaxLevel(maxLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    double minEigThreshold=0;

    const char* keywords[] = { "minEigThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:SparsePyrLKOpticalFlow.setMinEigThreshold", (char**)keywords, &minEigThreshold) )
    {
        ERRWRAP2(_self_->setMinEigThreshold(minEigThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    PyObject* pyobj_crit = NULL;
    TermCriteria crit;

    const char* keywords[] = { "crit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:SparsePyrLKOpticalFlow.setTermCriteria", (char**)keywords, &pyobj_crit) &&
        pyopencv_to(pyobj_crit, crit, ArgInfo("crit", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(crit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::SparsePyrLKOpticalFlow* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_SparsePyrLKOpticalFlow_Type))
        _self_ = dynamic_cast<cv::SparsePyrLKOpticalFlow*>(((pyopencv_SparsePyrLKOpticalFlow_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    PyObject* pyobj_winSize = NULL;
    Size winSize;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:SparsePyrLKOpticalFlow.setWinSize", (char**)keywords, &pyobj_winSize) &&
        pyopencv_to(pyobj_winSize, winSize, ArgInfo("winSize", 0)) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_SparsePyrLKOpticalFlow_methods[] =
{
    {"getFlags", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_getFlags, METH_VARARGS | METH_KEYWORDS, "getFlags() -> retval\n."},
    {"getMaxLevel", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel, METH_VARARGS | METH_KEYWORDS, "getMaxLevel() -> retval\n."},
    {"getMinEigThreshold", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold, METH_VARARGS | METH_KEYWORDS, "getMinEigThreshold() -> retval\n."},
    {"getTermCriteria", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria, METH_VARARGS | METH_KEYWORDS, "getTermCriteria() -> retval\n."},
    {"getWinSize", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize, METH_VARARGS | METH_KEYWORDS, "getWinSize() -> retval\n."},
    {"setFlags", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_setFlags, METH_VARARGS | METH_KEYWORDS, "setFlags(flags) -> None\n."},
    {"setMaxLevel", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel, METH_VARARGS | METH_KEYWORDS, "setMaxLevel(maxLevel) -> None\n."},
    {"setMinEigThreshold", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold, METH_VARARGS | METH_KEYWORDS, "setMinEigThreshold(minEigThreshold) -> None\n."},
    {"setTermCriteria", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria, METH_VARARGS | METH_KEYWORDS, "setTermCriteria(crit) -> None\n."},
    {"setWinSize", (PyCFunction)pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize, METH_VARARGS | METH_KEYWORDS, "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_SparsePyrLKOpticalFlow_specials(void)
{
    pyopencv_SparsePyrLKOpticalFlow_Type.tp_base = &pyopencv_SparseOpticalFlow_Type;
    pyopencv_SparsePyrLKOpticalFlow_Type.tp_dealloc = pyopencv_SparsePyrLKOpticalFlow_dealloc;
    pyopencv_SparsePyrLKOpticalFlow_Type.tp_repr = pyopencv_SparsePyrLKOpticalFlow_repr;
    pyopencv_SparsePyrLKOpticalFlow_Type.tp_getset = pyopencv_SparsePyrLKOpticalFlow_getseters;
    pyopencv_SparsePyrLKOpticalFlow_Type.tp_methods = pyopencv_SparsePyrLKOpticalFlow_methods;
}

static PyObject* pyopencv_dnn_Layer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<dnn_Layer %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_dnn_Layer_get_blobs(pyopencv_dnn_Layer_t* p, void *closure)
{
    cv::dnn::Layer* _self_ = dynamic_cast<cv::dnn::Layer*>(p->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of object (must be 'dnn_Layer' or its derivative)");
    return pyopencv_from(_self_->blobs);
}

static int pyopencv_dnn_Layer_set_blobs(pyopencv_dnn_Layer_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the blobs attribute");
        return -1;
    }
    cv::dnn::Layer* _self_ = dynamic_cast<cv::dnn::Layer*>(p->v.get());
    if (_self_ == NULL)
    {
        failmsgp("Incorrect type of object (must be 'dnn_Layer' or its derivative)");
        return -1;
    }
    return pyopencv_to(value, _self_->blobs) ? 0 : -1;
}

static PyObject* pyopencv_dnn_Layer_get_name(pyopencv_dnn_Layer_t* p, void *closure)
{
    cv::dnn::Layer* _self_ = dynamic_cast<cv::dnn::Layer*>(p->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of object (must be 'dnn_Layer' or its derivative)");
    return pyopencv_from(_self_->name);
}

static PyObject* pyopencv_dnn_Layer_get_type(pyopencv_dnn_Layer_t* p, void *closure)
{
    cv::dnn::Layer* _self_ = dynamic_cast<cv::dnn::Layer*>(p->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of object (must be 'dnn_Layer' or its derivative)");
    return pyopencv_from(_self_->type);
}


static PyGetSetDef pyopencv_dnn_Layer_getseters[] =
{
    {(char*)"blobs", (getter)pyopencv_dnn_Layer_get_blobs, (setter)pyopencv_dnn_Layer_set_blobs, (char*)"blobs", NULL},
    {(char*)"name", (getter)pyopencv_dnn_Layer_get_name, NULL, (char*)"name", NULL},
    {(char*)"type", (getter)pyopencv_dnn_Layer_get_type, NULL, (char*)"type", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_dnn_dnn_Layer_finalize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Layer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Layer_Type))
        _self_ = dynamic_cast<cv::dnn::Layer*>(((pyopencv_dnn_Layer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Layer' or its derivative)");
    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;

    const char* keywords[] = { "inputs", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Layer.finalize", (char**)keywords, &pyobj_inputs, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) )
    {
        ERRWRAP2(_self_->finalize(inputs, outputs));
        return pyopencv_from(outputs);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;

    const char* keywords[] = { "inputs", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Layer.finalize", (char**)keywords, &pyobj_inputs, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) )
    {
        ERRWRAP2(_self_->finalize(inputs, outputs));
        return pyopencv_from(outputs);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    std::vector<Mat> retval;

    const char* keywords[] = { "inputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Layer.finalize", (char**)keywords, &pyobj_inputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) )
    {
        ERRWRAP2(retval = _self_->finalize(inputs));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    std::vector<Mat> retval;

    const char* keywords[] = { "inputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Layer.finalize", (char**)keywords, &pyobj_inputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) )
    {
        ERRWRAP2(retval = _self_->finalize(inputs));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Layer_forward(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Layer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Layer_Type))
        _self_ = dynamic_cast<cv::dnn::Layer*>(((pyopencv_dnn_Layer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Layer' or its derivative)");
    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;
    PyObject* pyobj_internals = NULL;
    vector_Mat internals;

    const char* keywords[] = { "inputs", "outputs", "internals", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:dnn_Layer.forward", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_internals) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_internals, internals, ArgInfo("internals", 1)) )
    {
        ERRWRAP2(_self_->forward(inputs, outputs, internals));
        return Py_BuildValue("(NN)", pyopencv_from(outputs), pyopencv_from(internals));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;
    PyObject* pyobj_internals = NULL;
    vector_Mat internals;

    const char* keywords[] = { "inputs", "outputs", "internals", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:dnn_Layer.forward", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_internals) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_internals, internals, ArgInfo("internals", 1)) )
    {
        ERRWRAP2(_self_->forward(inputs, outputs, internals));
        return Py_BuildValue("(NN)", pyopencv_from(outputs), pyopencv_from(internals));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Layer_run(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Layer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Layer_Type))
        _self_ = dynamic_cast<cv::dnn::Layer*>(((pyopencv_dnn_Layer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Layer' or its derivative)");
    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;
    PyObject* pyobj_internals = NULL;
    vector_Mat internals;

    const char* keywords[] = { "inputs", "internals", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:dnn_Layer.run", (char**)keywords, &pyobj_inputs, &pyobj_internals, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_internals, internals, ArgInfo("internals", 1)) )
    {
        ERRWRAP2(_self_->run(inputs, outputs, internals));
        return Py_BuildValue("(NN)", pyopencv_from(outputs), pyopencv_from(internals));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    vector_Mat inputs;
    PyObject* pyobj_outputs = NULL;
    vector_Mat outputs;
    PyObject* pyobj_internals = NULL;
    vector_Mat internals;

    const char* keywords[] = { "inputs", "internals", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:dnn_Layer.run", (char**)keywords, &pyobj_inputs, &pyobj_internals, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_internals, internals, ArgInfo("internals", 1)) )
    {
        ERRWRAP2(_self_->run(inputs, outputs, internals));
        return Py_BuildValue("(NN)", pyopencv_from(outputs), pyopencv_from(internals));
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_dnn_Layer_methods[] =
{
    {"finalize", (PyCFunction)pyopencv_cv_dnn_dnn_Layer_finalize, METH_VARARGS | METH_KEYWORDS, "finalize(inputs[, outputs]) -> outputs\n.   @brief @overload\n\n\n\nfinalize(inputs) -> retval\n.   @brief @overload"},
    {"forward", (PyCFunction)pyopencv_cv_dnn_dnn_Layer_forward, METH_VARARGS | METH_KEYWORDS, "forward(inputs, outputs, internals) -> outputs, internals\n.   @brief @overload"},
    {"run", (PyCFunction)pyopencv_cv_dnn_dnn_Layer_run, METH_VARARGS | METH_KEYWORDS, "run(inputs, internals[, outputs]) -> outputs, internals\n.   @brief Allocates layer and computes output."},

    {NULL,          NULL}
};

static void pyopencv_dnn_Layer_specials(void)
{
    pyopencv_dnn_Layer_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_dnn_Layer_Type.tp_dealloc = pyopencv_dnn_Layer_dealloc;
    pyopencv_dnn_Layer_Type.tp_repr = pyopencv_dnn_Layer_repr;
    pyopencv_dnn_Layer_Type.tp_getset = pyopencv_dnn_Layer_getseters;
    pyopencv_dnn_Layer_Type.tp_methods = pyopencv_dnn_Layer_methods;
}

static PyObject* pyopencv_dnn_Net_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<dnn_Net %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_dnn_Net_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_dnn_dnn_Net_connect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_outPin = NULL;
    String outPin;
    PyObject* pyobj_inpPin = NULL;
    String inpPin;

    const char* keywords[] = { "outPin", "inpPin", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:dnn_Net.connect", (char**)keywords, &pyobj_outPin, &pyobj_inpPin) &&
        pyopencv_to(pyobj_outPin, outPin, ArgInfo("outPin", 0)) &&
        pyopencv_to(pyobj_inpPin, inpPin, ArgInfo("inpPin", 0)) )
    {
        ERRWRAP2(_self_->connect(outPin, inpPin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_deleteLayer(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layer = NULL;
    LayerId layer;

    const char* keywords[] = { "layer", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.deleteLayer", (char**)keywords, &pyobj_layer) &&
        pyopencv_to(pyobj_layer, layer, ArgInfo("layer", 0)) )
    {
        ERRWRAP2(_self_->deleteLayer(layer));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_enableFusion(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    bool fusion=0;

    const char* keywords[] = { "fusion", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:dnn_Net.enableFusion", (char**)keywords, &fusion) )
    {
        ERRWRAP2(_self_->enableFusion(fusion));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_forward(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_outputName = NULL;
    String outputName;
    Mat retval;

    const char* keywords[] = { "outputName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:dnn_Net.forward", (char**)keywords, &pyobj_outputName) &&
        pyopencv_to(pyobj_outputName, outputName, ArgInfo("outputName", 0)) )
    {
        ERRWRAP2(retval = _self_->forward(outputName));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_outputBlobs = NULL;
    vector_Mat outputBlobs;
    PyObject* pyobj_outputName = NULL;
    String outputName;

    const char* keywords[] = { "outputBlobs", "outputName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Net.forward", (char**)keywords, &pyobj_outputBlobs, &pyobj_outputName) &&
        pyopencv_to(pyobj_outputBlobs, outputBlobs, ArgInfo("outputBlobs", 0)) &&
        pyopencv_to(pyobj_outputName, outputName, ArgInfo("outputName", 0)) )
    {
        ERRWRAP2(_self_->forward(outputBlobs, outputName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_outputBlobs = NULL;
    vector_Mat outputBlobs;
    PyObject* pyobj_outputName = NULL;
    String outputName;

    const char* keywords[] = { "outputBlobs", "outputName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Net.forward", (char**)keywords, &pyobj_outputBlobs, &pyobj_outputName) &&
        pyopencv_to(pyobj_outputBlobs, outputBlobs, ArgInfo("outputBlobs", 0)) &&
        pyopencv_to(pyobj_outputName, outputName, ArgInfo("outputName", 0)) )
    {
        ERRWRAP2(_self_->forward(outputBlobs, outputName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_outputBlobs = NULL;
    vector_Mat outputBlobs;
    PyObject* pyobj_outBlobNames = NULL;
    vector_String outBlobNames;

    const char* keywords[] = { "outputBlobs", "outBlobNames", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:dnn_Net.forward", (char**)keywords, &pyobj_outputBlobs, &pyobj_outBlobNames) &&
        pyopencv_to(pyobj_outputBlobs, outputBlobs, ArgInfo("outputBlobs", 0)) &&
        pyopencv_to(pyobj_outBlobNames, outBlobNames, ArgInfo("outBlobNames", 0)) )
    {
        ERRWRAP2(_self_->forward(outputBlobs, outBlobNames));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_outputBlobs = NULL;
    vector_Mat outputBlobs;
    PyObject* pyobj_outBlobNames = NULL;
    vector_String outBlobNames;

    const char* keywords[] = { "outputBlobs", "outBlobNames", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:dnn_Net.forward", (char**)keywords, &pyobj_outputBlobs, &pyobj_outBlobNames) &&
        pyopencv_to(pyobj_outputBlobs, outputBlobs, ArgInfo("outputBlobs", 0)) &&
        pyopencv_to(pyobj_outBlobNames, outBlobNames, ArgInfo("outBlobNames", 0)) )
    {
        ERRWRAP2(_self_->forward(outputBlobs, outBlobNames));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_outputBlobs = NULL;
    vector_vector_Mat outputBlobs;
    PyObject* pyobj_outBlobNames = NULL;
    vector_String outBlobNames;

    const char* keywords[] = { "outputBlobs", "outBlobNames", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:dnn_Net.forward", (char**)keywords, &pyobj_outputBlobs, &pyobj_outBlobNames) &&
        pyopencv_to(pyobj_outputBlobs, outputBlobs, ArgInfo("outputBlobs", 0)) &&
        pyopencv_to(pyobj_outBlobNames, outBlobNames, ArgInfo("outBlobNames", 0)) )
    {
        ERRWRAP2(_self_->forward(outputBlobs, outBlobNames));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getFLOPS(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    int64 retval;

    const char* keywords[] = { "netInputShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getFLOPS", (char**)keywords, &pyobj_netInputShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) )
    {
        ERRWRAP2(retval = _self_->getFLOPS(netInputShapes));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    int64 retval;

    const char* keywords[] = { "netInputShape", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getFLOPS", (char**)keywords, &pyobj_netInputShape) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) )
    {
        ERRWRAP2(retval = _self_->getFLOPS(netInputShape));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int layerId=0;
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    int64 retval;

    const char* keywords[] = { "layerId", "netInputShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iO:dnn_Net.getFLOPS", (char**)keywords, &layerId, &pyobj_netInputShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) )
    {
        ERRWRAP2(retval = _self_->getFLOPS(layerId, netInputShapes));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int layerId=0;
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    int64 retval;

    const char* keywords[] = { "layerId", "netInputShape", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iO:dnn_Net.getFLOPS", (char**)keywords, &layerId, &pyobj_netInputShape) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) )
    {
        ERRWRAP2(retval = _self_->getFLOPS(layerId, netInputShape));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayer(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layerId = NULL;
    LayerId layerId;
    Ptr<Layer> retval;

    const char* keywords[] = { "layerId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getLayer", (char**)keywords, &pyobj_layerId) &&
        pyopencv_to(pyobj_layerId, layerId, ArgInfo("layerId", 0)) )
    {
        ERRWRAP2(retval = _self_->getLayer(layerId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayerId(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layer = NULL;
    String layer;
    int retval;

    const char* keywords[] = { "layer", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getLayerId", (char**)keywords, &pyobj_layer) &&
        pyopencv_to(pyobj_layer, layer, ArgInfo("layer", 0)) )
    {
        ERRWRAP2(retval = _self_->getLayerId(layer));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayerInputs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layerId = NULL;
    LayerId layerId;
    std::vector<Ptr<Layer> > retval;

    const char* keywords[] = { "layerId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getLayerInputs", (char**)keywords, &pyobj_layerId) &&
        pyopencv_to(pyobj_layerId, layerId, ArgInfo("layerId", 0)) )
    {
        ERRWRAP2(retval = _self_->getLayerInputs(layerId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayerNames(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    std::vector<String> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLayerNames());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayerShapes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    int layerId=0;
    PyObject* pyobj_inLayerShapes = NULL;
    vector_MatShape inLayerShapes;
    PyObject* pyobj_outLayerShapes = NULL;
    vector_MatShape outLayerShapes;

    const char* keywords[] = { "netInputShape", "layerId", "inLayerShapes", "outLayerShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiOO:dnn_Net.getLayerShapes", (char**)keywords, &pyobj_netInputShape, &layerId, &pyobj_inLayerShapes, &pyobj_outLayerShapes) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) &&
        pyopencv_to(pyobj_inLayerShapes, inLayerShapes, ArgInfo("inLayerShapes", 0)) &&
        pyopencv_to(pyobj_outLayerShapes, outLayerShapes, ArgInfo("outLayerShapes", 0)) )
    {
        ERRWRAP2(_self_->getLayerShapes(netInputShape, layerId, &inLayerShapes, &outLayerShapes));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    int layerId=0;
    PyObject* pyobj_inLayerShapes = NULL;
    vector_MatShape inLayerShapes;
    PyObject* pyobj_outLayerShapes = NULL;
    vector_MatShape outLayerShapes;

    const char* keywords[] = { "netInputShapes", "layerId", "inLayerShapes", "outLayerShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiOO:dnn_Net.getLayerShapes", (char**)keywords, &pyobj_netInputShapes, &layerId, &pyobj_inLayerShapes, &pyobj_outLayerShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) &&
        pyopencv_to(pyobj_inLayerShapes, inLayerShapes, ArgInfo("inLayerShapes", 0)) &&
        pyopencv_to(pyobj_outLayerShapes, outLayerShapes, ArgInfo("outLayerShapes", 0)) )
    {
        ERRWRAP2(_self_->getLayerShapes(netInputShapes, layerId, &inLayerShapes, &outLayerShapes));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayerTypes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    vector_String layersTypes;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getLayerTypes(layersTypes));
        return pyopencv_from(layersTypes);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayersCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layerType = NULL;
    String layerType;
    int retval;

    const char* keywords[] = { "layerType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getLayersCount", (char**)keywords, &pyobj_layerType) &&
        pyopencv_to(pyobj_layerType, layerType, ArgInfo("layerType", 0)) )
    {
        ERRWRAP2(retval = _self_->getLayersCount(layerType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getLayersShapes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    PyObject* pyobj_layersIds = NULL;
    vector_int layersIds;
    PyObject* pyobj_inLayersShapes = NULL;
    vector_vector_MatShape inLayersShapes;
    PyObject* pyobj_outLayersShapes = NULL;
    vector_vector_MatShape outLayersShapes;

    const char* keywords[] = { "netInputShapes", "layersIds", "inLayersShapes", "outLayersShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:dnn_Net.getLayersShapes", (char**)keywords, &pyobj_netInputShapes, &pyobj_layersIds, &pyobj_inLayersShapes, &pyobj_outLayersShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) &&
        pyopencv_to(pyobj_layersIds, layersIds, ArgInfo("layersIds", 0)) &&
        pyopencv_to(pyobj_inLayersShapes, inLayersShapes, ArgInfo("inLayersShapes", 0)) &&
        pyopencv_to(pyobj_outLayersShapes, outLayersShapes, ArgInfo("outLayersShapes", 0)) )
    {
        ERRWRAP2(_self_->getLayersShapes(netInputShapes, &layersIds, &inLayersShapes, &outLayersShapes));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    PyObject* pyobj_layersIds = NULL;
    vector_int layersIds;
    PyObject* pyobj_inLayersShapes = NULL;
    vector_vector_MatShape inLayersShapes;
    PyObject* pyobj_outLayersShapes = NULL;
    vector_vector_MatShape outLayersShapes;

    const char* keywords[] = { "netInputShape", "layersIds", "inLayersShapes", "outLayersShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:dnn_Net.getLayersShapes", (char**)keywords, &pyobj_netInputShape, &pyobj_layersIds, &pyobj_inLayersShapes, &pyobj_outLayersShapes) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) &&
        pyopencv_to(pyobj_layersIds, layersIds, ArgInfo("layersIds", 0)) &&
        pyopencv_to(pyobj_inLayersShapes, inLayersShapes, ArgInfo("inLayersShapes", 0)) &&
        pyopencv_to(pyobj_outLayersShapes, outLayersShapes, ArgInfo("outLayersShapes", 0)) )
    {
        ERRWRAP2(_self_->getLayersShapes(netInputShape, &layersIds, &inLayersShapes, &outLayersShapes));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getMemoryConsumption(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    size_t weights;
    size_t blobs;

    const char* keywords[] = { "netInputShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getMemoryConsumption", (char**)keywords, &pyobj_netInputShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(netInputShapes, weights, blobs));
        return Py_BuildValue("(NN)", pyopencv_from(weights), pyopencv_from(blobs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    size_t weights;
    size_t blobs;

    const char* keywords[] = { "netInputShape", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getMemoryConsumption", (char**)keywords, &pyobj_netInputShape) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(netInputShape, weights, blobs));
        return Py_BuildValue("(NN)", pyopencv_from(weights), pyopencv_from(blobs));
    }
    }
    PyErr_Clear();

    {
    int layerId=0;
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    size_t weights;
    size_t blobs;

    const char* keywords[] = { "layerId", "netInputShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iO:dnn_Net.getMemoryConsumption", (char**)keywords, &layerId, &pyobj_netInputShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(layerId, netInputShapes, weights, blobs));
        return Py_BuildValue("(NN)", pyopencv_from(weights), pyopencv_from(blobs));
    }
    }
    PyErr_Clear();

    {
    int layerId=0;
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    size_t weights;
    size_t blobs;

    const char* keywords[] = { "layerId", "netInputShape", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iO:dnn_Net.getMemoryConsumption", (char**)keywords, &layerId, &pyobj_netInputShape) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(layerId, netInputShape, weights, blobs));
        return Py_BuildValue("(NN)", pyopencv_from(weights), pyopencv_from(blobs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShapes = NULL;
    vector_MatShape netInputShapes;
    vector_int layerIds;
    vector_size_t weights;
    vector_size_t blobs;

    const char* keywords[] = { "netInputShapes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getMemoryConsumption", (char**)keywords, &pyobj_netInputShapes) &&
        pyopencv_to(pyobj_netInputShapes, netInputShapes, ArgInfo("netInputShapes", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(netInputShapes, layerIds, weights, blobs));
        return Py_BuildValue("(NNN)", pyopencv_from(layerIds), pyopencv_from(weights), pyopencv_from(blobs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_netInputShape = NULL;
    MatShape netInputShape;
    vector_int layerIds;
    vector_size_t weights;
    vector_size_t blobs;

    const char* keywords[] = { "netInputShape", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.getMemoryConsumption", (char**)keywords, &pyobj_netInputShape) &&
        pyopencv_to(pyobj_netInputShape, netInputShape, ArgInfo("netInputShape", 0)) )
    {
        ERRWRAP2(_self_->getMemoryConsumption(netInputShape, layerIds, weights, blobs));
        return Py_BuildValue("(NNN)", pyopencv_from(layerIds), pyopencv_from(weights), pyopencv_from(blobs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getParam(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_layer = NULL;
    LayerId layer;
    int numParam=0;
    Mat retval;

    const char* keywords[] = { "layer", "numParam", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|i:dnn_Net.getParam", (char**)keywords, &pyobj_layer, &numParam) &&
        pyopencv_to(pyobj_layer, layer, ArgInfo("layer", 0)) )
    {
        ERRWRAP2(retval = _self_->getParam(layer, numParam));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_getUnconnectedOutLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    std::vector<int> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUnconnectedOutLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_setInput(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_blob = NULL;
    Mat blob;
    PyObject* pyobj_name = NULL;
    String name="";

    const char* keywords[] = { "blob", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Net.setInput", (char**)keywords, &pyobj_blob, &pyobj_name) &&
        pyopencv_to(pyobj_blob, blob, ArgInfo("blob", 0)) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->setInput(blob, name));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_blob = NULL;
    Mat blob;
    PyObject* pyobj_name = NULL;
    String name="";

    const char* keywords[] = { "blob", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:dnn_Net.setInput", (char**)keywords, &pyobj_blob, &pyobj_name) &&
        pyopencv_to(pyobj_blob, blob, ArgInfo("blob", 0)) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->setInput(blob, name));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_setInputsNames(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    PyObject* pyobj_inputBlobNames = NULL;
    vector_String inputBlobNames;

    const char* keywords[] = { "inputBlobNames", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Net.setInputsNames", (char**)keywords, &pyobj_inputBlobNames) &&
        pyopencv_to(pyobj_inputBlobNames, inputBlobNames, ArgInfo("inputBlobNames", 0)) )
    {
        ERRWRAP2(_self_->setInputsNames(inputBlobNames));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_Net_setParam(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Net* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Net_Type))
        _self_ = &((pyopencv_dnn_Net_t*)self)->v;
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Net' or its derivative)");
    {
    PyObject* pyobj_layer = NULL;
    LayerId layer;
    int numParam=0;
    PyObject* pyobj_blob = NULL;
    Mat blob;

    const char* keywords[] = { "layer", "numParam", "blob", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:dnn_Net.setParam", (char**)keywords, &pyobj_layer, &numParam, &pyobj_blob) &&
        pyopencv_to(pyobj_layer, layer, ArgInfo("layer", 0)) &&
        pyopencv_to(pyobj_blob, blob, ArgInfo("blob", 0)) )
    {
        ERRWRAP2(_self_->setParam(layer, numParam, blob));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_layer = NULL;
    LayerId layer;
    int numParam=0;
    PyObject* pyobj_blob = NULL;
    Mat blob;

    const char* keywords[] = { "layer", "numParam", "blob", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:dnn_Net.setParam", (char**)keywords, &pyobj_layer, &numParam, &pyobj_blob) &&
        pyopencv_to(pyobj_layer, layer, ArgInfo("layer", 0)) &&
        pyopencv_to(pyobj_blob, blob, ArgInfo("blob", 0)) )
    {
        ERRWRAP2(_self_->setParam(layer, numParam, blob));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_dnn_Net_methods[] =
{
    {"connect", (PyCFunction)pyopencv_cv_dnn_dnn_Net_connect, METH_VARARGS | METH_KEYWORDS, "connect(outPin, inpPin) -> None\n.   @brief Connects output of the first layer to input of the second layer.\n.   *  @param outPin descriptor of the first layer output.\n.   *  @param inpPin descriptor of the second layer input.\n.   *\n.   * Descriptors have the following template <DFN>&lt;layer_name&gt;[.input_number]</DFN>:\n.   * - the first part of the template <DFN>layer_name</DFN> is sting name of the added layer.\n.   *   If this part is empty then the network input pseudo layer will be used;\n.   * - the second optional part of the template <DFN>input_number</DFN>\n.   *   is either number of the layer input, either label one.\n.   *   If this part is omitted then the first layer input will be used.\n.   *\n.   *  @see setNetInputs(), Layer::inputNameToIndex(), Layer::outputNameToIndex()"},
    {"deleteLayer", (PyCFunction)pyopencv_cv_dnn_dnn_Net_deleteLayer, METH_VARARGS | METH_KEYWORDS, "deleteLayer(layer) -> None\n.   @brief Delete layer for the network (not implemented yet)"},
    {"empty", (PyCFunction)pyopencv_cv_dnn_dnn_Net_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n.   Returns true if there are no layers in the network."},
    {"enableFusion", (PyCFunction)pyopencv_cv_dnn_dnn_Net_enableFusion, METH_VARARGS | METH_KEYWORDS, "enableFusion(fusion) -> None\n.   @brief Enables or disables layer fusion in the network.\n.   * @param fusion true to enable the fusion, false to disable. The fusion is enabled by default."},
    {"forward", (PyCFunction)pyopencv_cv_dnn_dnn_Net_forward, METH_VARARGS | METH_KEYWORDS, "forward([, outputName]) -> retval\n.   @brief Runs forward pass to compute output of layer with name @p outputName.\n.   *  @param outputName name for layer which output is needed to get\n.   *  @return blob for first output of specified layer.\n.   *  @details By default runs forward pass for the whole network.\n\n\n\nforward(outputBlobs[, outputName]) -> None\n.   @brief Runs forward pass to compute output of layer with name @p outputName.\n.   *  @param outputBlobs contains all output blobs for specified layer.\n.   *  @param outputName name for layer which output is needed to get\n.   *  @details If @p outputName is empty, runs forward pass for the whole network.\n\n\n\nforward(outputBlobs, outBlobNames) -> None\n.   @brief Runs forward pass to compute outputs of layers listed in @p outBlobNames.\n.   *  @param outputBlobs contains blobs for first outputs of specified layers.\n.   *  @param outBlobNames names for layers which outputs are needed to get"},
    {"getFLOPS", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getFLOPS, METH_VARARGS | METH_KEYWORDS, "getFLOPS(netInputShapes) -> retval\n.   @brief Computes FLOP for whole loaded model with specified input shapes.\n.   * @param netInputShapes vector of shapes for all net inputs.\n.   * @returns computed FLOP.\n\n\n\ngetFLOPS(netInputShape) -> retval\n.   @overload\n\n\n\ngetFLOPS(layerId, netInputShapes) -> retval\n.   @overload\n\n\n\ngetFLOPS(layerId, netInputShape) -> retval\n.   @overload"},
    {"getLayer", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayer, METH_VARARGS | METH_KEYWORDS, "getLayer(layerId) -> retval\n.   @brief Returns pointer to layer with specified id or name which the network use."},
    {"getLayerId", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayerId, METH_VARARGS | METH_KEYWORDS, "getLayerId(layer) -> retval\n.   @brief Converts string name of the layer to the integer identifier.\n.   *  @returns id of the layer, or -1 if the layer wasn't found."},
    {"getLayerInputs", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayerInputs, METH_VARARGS | METH_KEYWORDS, "getLayerInputs(layerId) -> retval\n.   @brief Returns pointers to input layers of specific layer."},
    {"getLayerNames", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayerNames, METH_VARARGS | METH_KEYWORDS, "getLayerNames() -> retval\n."},
    {"getLayerShapes", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayerShapes, METH_VARARGS | METH_KEYWORDS, "getLayerShapes(netInputShape, layerId, inLayerShapes, outLayerShapes) -> None\n.   @brief Returns input and output shapes for layer with specified\n.   * id in loaded model; preliminary inferencing isn't necessary.\n.   *  @param netInputShape shape input blob in net input layer.\n.   *  @param layerId id for layer.\n.   *  @param inLayerShapes output parameter for input layers shapes;\n.   * order is the same as in layersIds\n.   *  @param outLayerShapes output parameter for output layers shapes;\n.   * order is the same as in layersIds\n\n\n\ngetLayerShapes(netInputShapes, layerId, inLayerShapes, outLayerShapes) -> None\n.   @overload"},
    {"getLayerTypes", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayerTypes, METH_VARARGS | METH_KEYWORDS, "getLayerTypes() -> layersTypes\n.   @brief Returns list of types for layer used in model.\n.   * @param layersTypes output parameter for returning types."},
    {"getLayersCount", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayersCount, METH_VARARGS | METH_KEYWORDS, "getLayersCount(layerType) -> retval\n.   @brief Returns count of layers of specified type.\n.   * @param layerType type.\n.   * @returns count of layers"},
    {"getLayersShapes", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getLayersShapes, METH_VARARGS | METH_KEYWORDS, "getLayersShapes(netInputShapes, layersIds, inLayersShapes, outLayersShapes) -> None\n.   @brief Returns input and output shapes for all layers in loaded model;\n.   *  preliminary inferencing isn't necessary.\n.   *  @param netInputShapes shapes for all input blobs in net input layer.\n.   *  @param layersIds output parameter for layer IDs.\n.   *  @param inLayersShapes output parameter for input layers shapes;\n.   * order is the same as in layersIds\n.   *  @param outLayersShapes output parameter for output layers shapes;\n.   * order is the same as in layersIds\n\n\n\ngetLayersShapes(netInputShape, layersIds, inLayersShapes, outLayersShapes) -> None\n.   @overload"},
    {"getMemoryConsumption", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getMemoryConsumption, METH_VARARGS | METH_KEYWORDS, "getMemoryConsumption(netInputShapes) -> weights, blobs\n.   @brief Computes bytes number which are requered to store\n.   * all weights and intermediate blobs for model.\n.   * @param netInputShapes vector of shapes for all net inputs.\n.   * @param weights output parameter to store resulting bytes for weights.\n.   * @param blobs output parameter to store resulting bytes for intermediate blobs.\n\n\n\ngetMemoryConsumption(netInputShape) -> weights, blobs\n.   @overload\n\n\n\ngetMemoryConsumption(layerId, netInputShapes) -> weights, blobs\n.   @overload\n\n\n\ngetMemoryConsumption(layerId, netInputShape) -> weights, blobs\n.   @overload\n\n\n\ngetMemoryConsumption(netInputShapes) -> layerIds, weights, blobs\n.   @brief Computes bytes number which are requered to store\n.   * all weights and intermediate blobs for each layer.\n.   * @param netInputShapes vector of shapes for all net inputs.\n.   * @param layerIds output vector to save layer IDs.\n.   * @param weights output parameter to store resulting bytes for weights.\n.   * @param blobs output parameter to store resulting bytes for intermediate blobs.\n\n\n\ngetMemoryConsumption(netInputShape) -> layerIds, weights, blobs\n.   @overload"},
    {"getParam", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getParam, METH_VARARGS | METH_KEYWORDS, "getParam(layer[, numParam]) -> retval\n.   @brief Returns parameter blob of the layer.\n.   *  @param layer name or id of the layer.\n.   *  @param numParam index of the layer parameter in the Layer::blobs array.\n.   *  @see Layer::blobs"},
    {"getUnconnectedOutLayers", (PyCFunction)pyopencv_cv_dnn_dnn_Net_getUnconnectedOutLayers, METH_VARARGS | METH_KEYWORDS, "getUnconnectedOutLayers() -> retval\n.   @brief Returns indexes of layers with unconnected outputs."},
    {"setInput", (PyCFunction)pyopencv_cv_dnn_dnn_Net_setInput, METH_VARARGS | METH_KEYWORDS, "setInput(blob[, name]) -> None\n.   @brief Sets the new value for the layer output blob\n.   *  @param name descriptor of the updating layer output blob.\n.   *  @param blob new blob.\n.   *  @see connect(String, String) to know format of the descriptor.\n.   *  @note If updating blob is not empty then @p blob must have the same shape,\n.   *  because network reshaping is not implemented yet."},
    {"setInputsNames", (PyCFunction)pyopencv_cv_dnn_dnn_Net_setInputsNames, METH_VARARGS | METH_KEYWORDS, "setInputsNames(inputBlobNames) -> None\n.   @brief Sets outputs names of the network input pseudo layer.\n.   *\n.   * Each net always has special own the network input pseudo layer with id=0.\n.   * This layer stores the user blobs only and don't make any computations.\n.   * In fact, this layer provides the only way to pass user data into the network.\n.   * As any other layer, this layer can label its outputs and this function provides an easy way to do this."},
    {"setParam", (PyCFunction)pyopencv_cv_dnn_dnn_Net_setParam, METH_VARARGS | METH_KEYWORDS, "setParam(layer, numParam, blob) -> None\n.   @brief Sets the new value for the learned param of the layer.\n.   *  @param layer name or id of the layer.\n.   *  @param numParam index of the layer parameter in the Layer::blobs array.\n.   *  @param blob the new value.\n.   *  @see Layer::blobs\n.   *  @note If shape of the new blob differs from the previous shape,\n.   *  then the following forward pass may fail."},

    {NULL,          NULL}
};

static void pyopencv_dnn_Net_specials(void)
{
    pyopencv_dnn_Net_Type.tp_base = NULL;
    pyopencv_dnn_Net_Type.tp_dealloc = pyopencv_dnn_Net_dealloc;
    pyopencv_dnn_Net_Type.tp_repr = pyopencv_dnn_Net_repr;
    pyopencv_dnn_Net_Type.tp_getset = pyopencv_dnn_Net_getseters;
    pyopencv_dnn_Net_Type.tp_methods = pyopencv_dnn_Net_methods;
}

static PyObject* pyopencv_dnn_Importer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<dnn_Importer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_dnn_Importer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_dnn_dnn_Importer_populateNet(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::Importer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_Importer_Type))
        _self_ = dynamic_cast<cv::dnn::Importer*>(((pyopencv_dnn_Importer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_Importer' or its derivative)");
    PyObject* pyobj_net = NULL;
    Net net;

    const char* keywords[] = { "net", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:dnn_Importer.populateNet", (char**)keywords, &pyobj_net) &&
        pyopencv_to(pyobj_net, net, ArgInfo("net", 0)) )
    {
        ERRWRAP2(_self_->populateNet(net));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_dnn_Importer_methods[] =
{
    {"populateNet", (PyCFunction)pyopencv_cv_dnn_dnn_Importer_populateNet, METH_VARARGS | METH_KEYWORDS, "populateNet(net) -> None\n.   @brief Adds loaded layers into the @p net and sets connections between them."},

    {NULL,          NULL}
};

static void pyopencv_dnn_Importer_specials(void)
{
    pyopencv_dnn_Importer_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_dnn_Importer_Type.tp_dealloc = pyopencv_dnn_Importer_dealloc;
    pyopencv_dnn_Importer_Type.tp_repr = pyopencv_dnn_Importer_repr;
    pyopencv_dnn_Importer_Type.tp_getset = pyopencv_dnn_Importer_getseters;
    pyopencv_dnn_Importer_Type.tp_methods = pyopencv_dnn_Importer_methods;
}

static PyObject* pyopencv_dnn_DictValue_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<dnn_DictValue %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_dnn_DictValue_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_dnn_dnn_DictValue_getIntValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    int idx=-1;
    int retval;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:dnn_DictValue.getIntValue", (char**)keywords, &idx) )
    {
        ERRWRAP2(retval = _self_->getIntValue(idx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_DictValue_getRealValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    int idx=-1;
    double retval;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:dnn_DictValue.getRealValue", (char**)keywords, &idx) )
    {
        ERRWRAP2(retval = _self_->getRealValue(idx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_DictValue_getStringValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    int idx=-1;
    String retval;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:dnn_DictValue.getStringValue", (char**)keywords, &idx) )
    {
        ERRWRAP2(retval = _self_->getStringValue(idx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_DictValue_isInt(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_DictValue_isReal(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isReal());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_dnn_dnn_DictValue_isString(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::dnn;

    cv::dnn::DictValue* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_dnn_DictValue_Type))
        _self_ = ((pyopencv_dnn_DictValue_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'dnn_DictValue' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isString());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_dnn_DictValue_methods[] =
{
    {"getIntValue", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_getIntValue, METH_VARARGS | METH_KEYWORDS, "getIntValue([, idx]) -> retval\n."},
    {"getRealValue", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_getRealValue, METH_VARARGS | METH_KEYWORDS, "getRealValue([, idx]) -> retval\n."},
    {"getStringValue", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_getStringValue, METH_VARARGS | METH_KEYWORDS, "getStringValue([, idx]) -> retval\n."},
    {"isInt", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_isInt, METH_VARARGS | METH_KEYWORDS, "isInt() -> retval\n."},
    {"isReal", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_isReal, METH_VARARGS | METH_KEYWORDS, "isReal() -> retval\n."},
    {"isString", (PyCFunction)pyopencv_cv_dnn_dnn_DictValue_isString, METH_VARARGS | METH_KEYWORDS, "isString() -> retval\n."},

    {NULL,          NULL}
};

static void pyopencv_dnn_DictValue_specials(void)
{
    pyopencv_dnn_DictValue_Type.tp_base = NULL;
    pyopencv_dnn_DictValue_Type.tp_dealloc = pyopencv_dnn_DictValue_dealloc;
    pyopencv_dnn_DictValue_Type.tp_repr = pyopencv_dnn_DictValue_repr;
    pyopencv_dnn_DictValue_Type.tp_getset = pyopencv_dnn_DictValue_getseters;
    pyopencv_dnn_DictValue_Type.tp_methods = pyopencv_dnn_DictValue_methods;
}

static PyObject* pyopencv_ShapeDistanceExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ShapeDistanceExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ShapeDistanceExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ShapeDistanceExtractor_computeDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeDistanceExtractor*>(((pyopencv_ShapeDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeDistanceExtractor' or its derivative)");
    {
    PyObject* pyobj_contour1 = NULL;
    Mat contour1;
    PyObject* pyobj_contour2 = NULL;
    Mat contour2;
    float retval;

    const char* keywords[] = { "contour1", "contour2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ShapeDistanceExtractor.computeDistance", (char**)keywords, &pyobj_contour1, &pyobj_contour2) &&
        pyopencv_to(pyobj_contour1, contour1, ArgInfo("contour1", 0)) &&
        pyopencv_to(pyobj_contour2, contour2, ArgInfo("contour2", 0)) )
    {
        ERRWRAP2(retval = _self_->computeDistance(contour1, contour2));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_contour1 = NULL;
    UMat contour1;
    PyObject* pyobj_contour2 = NULL;
    UMat contour2;
    float retval;

    const char* keywords[] = { "contour1", "contour2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ShapeDistanceExtractor.computeDistance", (char**)keywords, &pyobj_contour1, &pyobj_contour2) &&
        pyopencv_to(pyobj_contour1, contour1, ArgInfo("contour1", 0)) &&
        pyopencv_to(pyobj_contour2, contour2, ArgInfo("contour2", 0)) )
    {
        ERRWRAP2(retval = _self_->computeDistance(contour1, contour2));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ShapeDistanceExtractor_methods[] =
{
    {"computeDistance", (PyCFunction)pyopencv_cv_ShapeDistanceExtractor_computeDistance, METH_VARARGS | METH_KEYWORDS, "computeDistance(contour1, contour2) -> retval\n.   @brief Compute the shape distance between two shapes defined by its contours.\n.   \n.   @param contour1 Contour defining first shape.\n.   @param contour2 Contour defining second shape."},

    {NULL,          NULL}
};

static void pyopencv_ShapeDistanceExtractor_specials(void)
{
    pyopencv_ShapeDistanceExtractor_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_ShapeDistanceExtractor_Type.tp_dealloc = pyopencv_ShapeDistanceExtractor_dealloc;
    pyopencv_ShapeDistanceExtractor_Type.tp_repr = pyopencv_ShapeDistanceExtractor_repr;
    pyopencv_ShapeDistanceExtractor_Type.tp_getset = pyopencv_ShapeDistanceExtractor_getseters;
    pyopencv_ShapeDistanceExtractor_Type.tp_methods = pyopencv_ShapeDistanceExtractor_methods;
}

static PyObject* pyopencv_ShapeContextDistanceExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ShapeContextDistanceExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ShapeContextDistanceExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getAngularBins(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngularBins());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getBendingEnergyWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBendingEnergyWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getCostExtractor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    Ptr<HistogramCostExtractor> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCostExtractor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getImageAppearanceWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getImageAppearanceWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getImages(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    {
    PyObject* pyobj_image1 = NULL;
    Mat image1;
    PyObject* pyobj_image2 = NULL;
    Mat image2;

    const char* keywords[] = { "image1", "image2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|OO:ShapeContextDistanceExtractor.getImages", (char**)keywords, &pyobj_image1, &pyobj_image2) &&
        pyopencv_to(pyobj_image1, image1, ArgInfo("image1", 1)) &&
        pyopencv_to(pyobj_image2, image2, ArgInfo("image2", 1)) )
    {
        ERRWRAP2(_self_->getImages(image1, image2));
        return Py_BuildValue("(NN)", pyopencv_from(image1), pyopencv_from(image2));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image1 = NULL;
    UMat image1;
    PyObject* pyobj_image2 = NULL;
    UMat image2;

    const char* keywords[] = { "image1", "image2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|OO:ShapeContextDistanceExtractor.getImages", (char**)keywords, &pyobj_image1, &pyobj_image2) &&
        pyopencv_to(pyobj_image1, image1, ArgInfo("image1", 1)) &&
        pyopencv_to(pyobj_image2, image2, ArgInfo("image2", 1)) )
    {
        ERRWRAP2(_self_->getImages(image1, image2));
        return Py_BuildValue("(NN)", pyopencv_from(image1), pyopencv_from(image2));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getInnerRadius(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getInnerRadius());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getOuterRadius(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOuterRadius());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getRadialBins(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRadialBins());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getRotationInvariant(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRotationInvariant());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getShapeContextWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShapeContextWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getStdDev(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getStdDev());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_getTransformAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    Ptr<ShapeTransformer> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTransformAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setAngularBins(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int nAngularBins=0;

    const char* keywords[] = { "nAngularBins", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ShapeContextDistanceExtractor.setAngularBins", (char**)keywords, &nAngularBins) )
    {
        ERRWRAP2(_self_->setAngularBins(nAngularBins));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setBendingEnergyWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float bendingEnergyWeight=0.f;

    const char* keywords[] = { "bendingEnergyWeight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setBendingEnergyWeight", (char**)keywords, &bendingEnergyWeight) )
    {
        ERRWRAP2(_self_->setBendingEnergyWeight(bendingEnergyWeight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setCostExtractor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    PyObject* pyobj_comparer = NULL;
    Ptr<HistogramCostExtractor> comparer;

    const char* keywords[] = { "comparer", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ShapeContextDistanceExtractor.setCostExtractor", (char**)keywords, &pyobj_comparer) &&
        pyopencv_to(pyobj_comparer, comparer, ArgInfo("comparer", 0)) )
    {
        ERRWRAP2(_self_->setCostExtractor(comparer));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setImageAppearanceWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float imageAppearanceWeight=0.f;

    const char* keywords[] = { "imageAppearanceWeight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setImageAppearanceWeight", (char**)keywords, &imageAppearanceWeight) )
    {
        ERRWRAP2(_self_->setImageAppearanceWeight(imageAppearanceWeight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setImages(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    {
    PyObject* pyobj_image1 = NULL;
    Mat image1;
    PyObject* pyobj_image2 = NULL;
    Mat image2;

    const char* keywords[] = { "image1", "image2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ShapeContextDistanceExtractor.setImages", (char**)keywords, &pyobj_image1, &pyobj_image2) &&
        pyopencv_to(pyobj_image1, image1, ArgInfo("image1", 0)) &&
        pyopencv_to(pyobj_image2, image2, ArgInfo("image2", 0)) )
    {
        ERRWRAP2(_self_->setImages(image1, image2));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image1 = NULL;
    UMat image1;
    PyObject* pyobj_image2 = NULL;
    UMat image2;

    const char* keywords[] = { "image1", "image2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ShapeContextDistanceExtractor.setImages", (char**)keywords, &pyobj_image1, &pyobj_image2) &&
        pyopencv_to(pyobj_image1, image1, ArgInfo("image1", 0)) &&
        pyopencv_to(pyobj_image2, image2, ArgInfo("image2", 0)) )
    {
        ERRWRAP2(_self_->setImages(image1, image2));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setInnerRadius(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float innerRadius=0.f;

    const char* keywords[] = { "innerRadius", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setInnerRadius", (char**)keywords, &innerRadius) )
    {
        ERRWRAP2(_self_->setInnerRadius(innerRadius));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int iterations=0;

    const char* keywords[] = { "iterations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ShapeContextDistanceExtractor.setIterations", (char**)keywords, &iterations) )
    {
        ERRWRAP2(_self_->setIterations(iterations));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setOuterRadius(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float outerRadius=0.f;

    const char* keywords[] = { "outerRadius", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setOuterRadius", (char**)keywords, &outerRadius) )
    {
        ERRWRAP2(_self_->setOuterRadius(outerRadius));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setRadialBins(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    int nRadialBins=0;

    const char* keywords[] = { "nRadialBins", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ShapeContextDistanceExtractor.setRadialBins", (char**)keywords, &nRadialBins) )
    {
        ERRWRAP2(_self_->setRadialBins(nRadialBins));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setRotationInvariant(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    bool rotationInvariant=0;

    const char* keywords[] = { "rotationInvariant", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ShapeContextDistanceExtractor.setRotationInvariant", (char**)keywords, &rotationInvariant) )
    {
        ERRWRAP2(_self_->setRotationInvariant(rotationInvariant));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setShapeContextWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float shapeContextWeight=0.f;

    const char* keywords[] = { "shapeContextWeight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setShapeContextWeight", (char**)keywords, &shapeContextWeight) )
    {
        ERRWRAP2(_self_->setShapeContextWeight(shapeContextWeight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setStdDev(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    float sigma=0.f;

    const char* keywords[] = { "sigma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ShapeContextDistanceExtractor.setStdDev", (char**)keywords, &sigma) )
    {
        ERRWRAP2(_self_->setStdDev(sigma));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeContextDistanceExtractor_setTransformAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeContextDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeContextDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::ShapeContextDistanceExtractor*>(((pyopencv_ShapeContextDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeContextDistanceExtractor' or its derivative)");
    PyObject* pyobj_transformer = NULL;
    Ptr<ShapeTransformer> transformer;

    const char* keywords[] = { "transformer", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ShapeContextDistanceExtractor.setTransformAlgorithm", (char**)keywords, &pyobj_transformer) &&
        pyopencv_to(pyobj_transformer, transformer, ArgInfo("transformer", 0)) )
    {
        ERRWRAP2(_self_->setTransformAlgorithm(transformer));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ShapeContextDistanceExtractor_methods[] =
{
    {"getAngularBins", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getAngularBins, METH_VARARGS | METH_KEYWORDS, "getAngularBins() -> retval\n."},
    {"getBendingEnergyWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getBendingEnergyWeight, METH_VARARGS | METH_KEYWORDS, "getBendingEnergyWeight() -> retval\n."},
    {"getCostExtractor", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getCostExtractor, METH_VARARGS | METH_KEYWORDS, "getCostExtractor() -> retval\n."},
    {"getImageAppearanceWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getImageAppearanceWeight, METH_VARARGS | METH_KEYWORDS, "getImageAppearanceWeight() -> retval\n."},
    {"getImages", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getImages, METH_VARARGS | METH_KEYWORDS, "getImages([, image1[, image2]]) -> image1, image2\n."},
    {"getInnerRadius", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getInnerRadius, METH_VARARGS | METH_KEYWORDS, "getInnerRadius() -> retval\n."},
    {"getIterations", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getIterations, METH_VARARGS | METH_KEYWORDS, "getIterations() -> retval\n."},
    {"getOuterRadius", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getOuterRadius, METH_VARARGS | METH_KEYWORDS, "getOuterRadius() -> retval\n."},
    {"getRadialBins", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getRadialBins, METH_VARARGS | METH_KEYWORDS, "getRadialBins() -> retval\n."},
    {"getRotationInvariant", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getRotationInvariant, METH_VARARGS | METH_KEYWORDS, "getRotationInvariant() -> retval\n."},
    {"getShapeContextWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getShapeContextWeight, METH_VARARGS | METH_KEYWORDS, "getShapeContextWeight() -> retval\n."},
    {"getStdDev", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getStdDev, METH_VARARGS | METH_KEYWORDS, "getStdDev() -> retval\n."},
    {"getTransformAlgorithm", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_getTransformAlgorithm, METH_VARARGS | METH_KEYWORDS, "getTransformAlgorithm() -> retval\n."},
    {"setAngularBins", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setAngularBins, METH_VARARGS | METH_KEYWORDS, "setAngularBins(nAngularBins) -> None\n.   @brief Establish the number of angular bins for the Shape Context Descriptor used in the shape matching\n.   pipeline.\n.   \n.   @param nAngularBins The number of angular bins in the shape context descriptor."},
    {"setBendingEnergyWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setBendingEnergyWeight, METH_VARARGS | METH_KEYWORDS, "setBendingEnergyWeight(bendingEnergyWeight) -> None\n.   @brief Set the weight of the Bending Energy in the final value of the shape distance. The bending energy\n.   definition depends on what transformation is being used to align the shapes. The final value of the\n.   shape distance is a user-defined linear combination of the shape context distance, an image\n.   appearance distance, and a bending energy.\n.   \n.   @param bendingEnergyWeight The weight of the Bending Energy in the final distance value."},
    {"setCostExtractor", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setCostExtractor, METH_VARARGS | METH_KEYWORDS, "setCostExtractor(comparer) -> None\n.   @brief Set the algorithm used for building the shape context descriptor cost matrix.\n.   \n.   @param comparer Smart pointer to a HistogramCostExtractor, an algorithm that defines the cost\n.   matrix between descriptors."},
    {"setImageAppearanceWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setImageAppearanceWeight, METH_VARARGS | METH_KEYWORDS, "setImageAppearanceWeight(imageAppearanceWeight) -> None\n.   @brief Set the weight of the Image Appearance cost in the final value of the shape distance. The image\n.   appearance cost is defined as the sum of squared brightness differences in Gaussian windows around\n.   corresponding image points. The final value of the shape distance is a user-defined linear\n.   combination of the shape context distance, an image appearance distance, and a bending energy. If\n.   this value is set to a number different from 0, is mandatory to set the images that correspond to\n.   each shape.\n.   \n.   @param imageAppearanceWeight The weight of the appearance cost in the final distance value."},
    {"setImages", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setImages, METH_VARARGS | METH_KEYWORDS, "setImages(image1, image2) -> None\n.   @brief Set the images that correspond to each shape. This images are used in the calculation of the Image\n.   Appearance cost.\n.   \n.   @param image1 Image corresponding to the shape defined by contours1.\n.   @param image2 Image corresponding to the shape defined by contours2."},
    {"setInnerRadius", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setInnerRadius, METH_VARARGS | METH_KEYWORDS, "setInnerRadius(innerRadius) -> None\n.   @brief Set the inner radius of the shape context descriptor.\n.   \n.   @param innerRadius The value of the inner radius."},
    {"setIterations", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setIterations, METH_VARARGS | METH_KEYWORDS, "setIterations(iterations) -> None\n."},
    {"setOuterRadius", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setOuterRadius, METH_VARARGS | METH_KEYWORDS, "setOuterRadius(outerRadius) -> None\n.   @brief Set the outer radius of the shape context descriptor.\n.   \n.   @param outerRadius The value of the outer radius."},
    {"setRadialBins", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setRadialBins, METH_VARARGS | METH_KEYWORDS, "setRadialBins(nRadialBins) -> None\n.   @brief Establish the number of radial bins for the Shape Context Descriptor used in the shape matching\n.   pipeline.\n.   \n.   @param nRadialBins The number of radial bins in the shape context descriptor."},
    {"setRotationInvariant", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setRotationInvariant, METH_VARARGS | METH_KEYWORDS, "setRotationInvariant(rotationInvariant) -> None\n."},
    {"setShapeContextWeight", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setShapeContextWeight, METH_VARARGS | METH_KEYWORDS, "setShapeContextWeight(shapeContextWeight) -> None\n.   @brief Set the weight of the shape context distance in the final value of the shape distance. The shape\n.   context distance between two shapes is defined as the symmetric sum of shape context matching costs\n.   over best matching points. The final value of the shape distance is a user-defined linear\n.   combination of the shape context distance, an image appearance distance, and a bending energy.\n.   \n.   @param shapeContextWeight The weight of the shape context distance in the final distance value."},
    {"setStdDev", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setStdDev, METH_VARARGS | METH_KEYWORDS, "setStdDev(sigma) -> None\n.   @brief Set the value of the standard deviation for the Gaussian window for the image appearance cost.\n.   \n.   @param sigma Standard Deviation."},
    {"setTransformAlgorithm", (PyCFunction)pyopencv_cv_ShapeContextDistanceExtractor_setTransformAlgorithm, METH_VARARGS | METH_KEYWORDS, "setTransformAlgorithm(transformer) -> None\n.   @brief Set the algorithm used for aligning the shapes.\n.   \n.   @param transformer Smart pointer to a ShapeTransformer, an algorithm that defines the aligning\n.   transformation."},

    {NULL,          NULL}
};

static void pyopencv_ShapeContextDistanceExtractor_specials(void)
{
    pyopencv_ShapeContextDistanceExtractor_Type.tp_base = &pyopencv_ShapeDistanceExtractor_Type;
    pyopencv_ShapeContextDistanceExtractor_Type.tp_dealloc = pyopencv_ShapeContextDistanceExtractor_dealloc;
    pyopencv_ShapeContextDistanceExtractor_Type.tp_repr = pyopencv_ShapeContextDistanceExtractor_repr;
    pyopencv_ShapeContextDistanceExtractor_Type.tp_getset = pyopencv_ShapeContextDistanceExtractor_getseters;
    pyopencv_ShapeContextDistanceExtractor_Type.tp_methods = pyopencv_ShapeContextDistanceExtractor_methods;
}

static PyObject* pyopencv_HausdorffDistanceExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<HausdorffDistanceExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_HausdorffDistanceExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_HausdorffDistanceExtractor_getDistanceFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HausdorffDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HausdorffDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::HausdorffDistanceExtractor*>(((pyopencv_HausdorffDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HausdorffDistanceExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDistanceFlag());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HausdorffDistanceExtractor_getRankProportion(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HausdorffDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HausdorffDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::HausdorffDistanceExtractor*>(((pyopencv_HausdorffDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HausdorffDistanceExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRankProportion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HausdorffDistanceExtractor_setDistanceFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HausdorffDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HausdorffDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::HausdorffDistanceExtractor*>(((pyopencv_HausdorffDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HausdorffDistanceExtractor' or its derivative)");
    int distanceFlag=0;

    const char* keywords[] = { "distanceFlag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:HausdorffDistanceExtractor.setDistanceFlag", (char**)keywords, &distanceFlag) )
    {
        ERRWRAP2(_self_->setDistanceFlag(distanceFlag));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_HausdorffDistanceExtractor_setRankProportion(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HausdorffDistanceExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HausdorffDistanceExtractor_Type))
        _self_ = dynamic_cast<cv::HausdorffDistanceExtractor*>(((pyopencv_HausdorffDistanceExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HausdorffDistanceExtractor' or its derivative)");
    float rankProportion=0.f;

    const char* keywords[] = { "rankProportion", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:HausdorffDistanceExtractor.setRankProportion", (char**)keywords, &rankProportion) )
    {
        ERRWRAP2(_self_->setRankProportion(rankProportion));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_HausdorffDistanceExtractor_methods[] =
{
    {"getDistanceFlag", (PyCFunction)pyopencv_cv_HausdorffDistanceExtractor_getDistanceFlag, METH_VARARGS | METH_KEYWORDS, "getDistanceFlag() -> retval\n."},
    {"getRankProportion", (PyCFunction)pyopencv_cv_HausdorffDistanceExtractor_getRankProportion, METH_VARARGS | METH_KEYWORDS, "getRankProportion() -> retval\n."},
    {"setDistanceFlag", (PyCFunction)pyopencv_cv_HausdorffDistanceExtractor_setDistanceFlag, METH_VARARGS | METH_KEYWORDS, "setDistanceFlag(distanceFlag) -> None\n.   @brief Set the norm used to compute the Hausdorff value between two shapes. It can be L1 or L2 norm.\n.   \n.   @param distanceFlag Flag indicating which norm is used to compute the Hausdorff distance\n.   (NORM_L1, NORM_L2)."},
    {"setRankProportion", (PyCFunction)pyopencv_cv_HausdorffDistanceExtractor_setRankProportion, METH_VARARGS | METH_KEYWORDS, "setRankProportion(rankProportion) -> None\n.   @brief This method sets the rank proportion (or fractional value) that establish the Kth ranked value of\n.   the partial Hausdorff distance. Experimentally had been shown that 0.6 is a good value to compare\n.   shapes.\n.   \n.   @param rankProportion fractional value (between 0 and 1)."},

    {NULL,          NULL}
};

static void pyopencv_HausdorffDistanceExtractor_specials(void)
{
    pyopencv_HausdorffDistanceExtractor_Type.tp_base = &pyopencv_ShapeDistanceExtractor_Type;
    pyopencv_HausdorffDistanceExtractor_Type.tp_dealloc = pyopencv_HausdorffDistanceExtractor_dealloc;
    pyopencv_HausdorffDistanceExtractor_Type.tp_repr = pyopencv_HausdorffDistanceExtractor_repr;
    pyopencv_HausdorffDistanceExtractor_Type.tp_getset = pyopencv_HausdorffDistanceExtractor_getseters;
    pyopencv_HausdorffDistanceExtractor_Type.tp_methods = pyopencv_HausdorffDistanceExtractor_methods;
}

static PyObject* pyopencv_HistogramCostExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<HistogramCostExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_HistogramCostExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_HistogramCostExtractor_buildCostMatrix(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::HistogramCostExtractor*>(((pyopencv_HistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HistogramCostExtractor' or its derivative)");
    {
    PyObject* pyobj_descriptors1 = NULL;
    Mat descriptors1;
    PyObject* pyobj_descriptors2 = NULL;
    Mat descriptors2;
    PyObject* pyobj_costMatrix = NULL;
    Mat costMatrix;

    const char* keywords[] = { "descriptors1", "descriptors2", "costMatrix", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:HistogramCostExtractor.buildCostMatrix", (char**)keywords, &pyobj_descriptors1, &pyobj_descriptors2, &pyobj_costMatrix) &&
        pyopencv_to(pyobj_descriptors1, descriptors1, ArgInfo("descriptors1", 0)) &&
        pyopencv_to(pyobj_descriptors2, descriptors2, ArgInfo("descriptors2", 0)) &&
        pyopencv_to(pyobj_costMatrix, costMatrix, ArgInfo("costMatrix", 1)) )
    {
        ERRWRAP2(_self_->buildCostMatrix(descriptors1, descriptors2, costMatrix));
        return pyopencv_from(costMatrix);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors1 = NULL;
    UMat descriptors1;
    PyObject* pyobj_descriptors2 = NULL;
    UMat descriptors2;
    PyObject* pyobj_costMatrix = NULL;
    UMat costMatrix;

    const char* keywords[] = { "descriptors1", "descriptors2", "costMatrix", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:HistogramCostExtractor.buildCostMatrix", (char**)keywords, &pyobj_descriptors1, &pyobj_descriptors2, &pyobj_costMatrix) &&
        pyopencv_to(pyobj_descriptors1, descriptors1, ArgInfo("descriptors1", 0)) &&
        pyopencv_to(pyobj_descriptors2, descriptors2, ArgInfo("descriptors2", 0)) &&
        pyopencv_to(pyobj_costMatrix, costMatrix, ArgInfo("costMatrix", 1)) )
    {
        ERRWRAP2(_self_->buildCostMatrix(descriptors1, descriptors2, costMatrix));
        return pyopencv_from(costMatrix);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HistogramCostExtractor_getDefaultCost(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::HistogramCostExtractor*>(((pyopencv_HistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HistogramCostExtractor' or its derivative)");
    float retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultCost());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HistogramCostExtractor_getNDummies(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::HistogramCostExtractor*>(((pyopencv_HistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HistogramCostExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNDummies());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HistogramCostExtractor_setDefaultCost(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::HistogramCostExtractor*>(((pyopencv_HistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HistogramCostExtractor' or its derivative)");
    float defaultCost=0.f;

    const char* keywords[] = { "defaultCost", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:HistogramCostExtractor.setDefaultCost", (char**)keywords, &defaultCost) )
    {
        ERRWRAP2(_self_->setDefaultCost(defaultCost));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_HistogramCostExtractor_setNDummies(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::HistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_HistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::HistogramCostExtractor*>(((pyopencv_HistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'HistogramCostExtractor' or its derivative)");
    int nDummies=0;

    const char* keywords[] = { "nDummies", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:HistogramCostExtractor.setNDummies", (char**)keywords, &nDummies) )
    {
        ERRWRAP2(_self_->setNDummies(nDummies));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_HistogramCostExtractor_methods[] =
{
    {"buildCostMatrix", (PyCFunction)pyopencv_cv_HistogramCostExtractor_buildCostMatrix, METH_VARARGS | METH_KEYWORDS, "buildCostMatrix(descriptors1, descriptors2[, costMatrix]) -> costMatrix\n."},
    {"getDefaultCost", (PyCFunction)pyopencv_cv_HistogramCostExtractor_getDefaultCost, METH_VARARGS | METH_KEYWORDS, "getDefaultCost() -> retval\n."},
    {"getNDummies", (PyCFunction)pyopencv_cv_HistogramCostExtractor_getNDummies, METH_VARARGS | METH_KEYWORDS, "getNDummies() -> retval\n."},
    {"setDefaultCost", (PyCFunction)pyopencv_cv_HistogramCostExtractor_setDefaultCost, METH_VARARGS | METH_KEYWORDS, "setDefaultCost(defaultCost) -> None\n."},
    {"setNDummies", (PyCFunction)pyopencv_cv_HistogramCostExtractor_setNDummies, METH_VARARGS | METH_KEYWORDS, "setNDummies(nDummies) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_HistogramCostExtractor_specials(void)
{
    pyopencv_HistogramCostExtractor_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_HistogramCostExtractor_Type.tp_dealloc = pyopencv_HistogramCostExtractor_dealloc;
    pyopencv_HistogramCostExtractor_Type.tp_repr = pyopencv_HistogramCostExtractor_repr;
    pyopencv_HistogramCostExtractor_Type.tp_getset = pyopencv_HistogramCostExtractor_getseters;
    pyopencv_HistogramCostExtractor_Type.tp_methods = pyopencv_HistogramCostExtractor_methods;
}

static PyObject* pyopencv_NormHistogramCostExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<NormHistogramCostExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_NormHistogramCostExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_NormHistogramCostExtractor_getNormFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::NormHistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_NormHistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::NormHistogramCostExtractor*>(((pyopencv_NormHistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'NormHistogramCostExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNormFlag());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_NormHistogramCostExtractor_setNormFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::NormHistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_NormHistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::NormHistogramCostExtractor*>(((pyopencv_NormHistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'NormHistogramCostExtractor' or its derivative)");
    int flag=0;

    const char* keywords[] = { "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:NormHistogramCostExtractor.setNormFlag", (char**)keywords, &flag) )
    {
        ERRWRAP2(_self_->setNormFlag(flag));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_NormHistogramCostExtractor_methods[] =
{
    {"getNormFlag", (PyCFunction)pyopencv_cv_NormHistogramCostExtractor_getNormFlag, METH_VARARGS | METH_KEYWORDS, "getNormFlag() -> retval\n."},
    {"setNormFlag", (PyCFunction)pyopencv_cv_NormHistogramCostExtractor_setNormFlag, METH_VARARGS | METH_KEYWORDS, "setNormFlag(flag) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_NormHistogramCostExtractor_specials(void)
{
    pyopencv_NormHistogramCostExtractor_Type.tp_base = &pyopencv_HistogramCostExtractor_Type;
    pyopencv_NormHistogramCostExtractor_Type.tp_dealloc = pyopencv_NormHistogramCostExtractor_dealloc;
    pyopencv_NormHistogramCostExtractor_Type.tp_repr = pyopencv_NormHistogramCostExtractor_repr;
    pyopencv_NormHistogramCostExtractor_Type.tp_getset = pyopencv_NormHistogramCostExtractor_getseters;
    pyopencv_NormHistogramCostExtractor_Type.tp_methods = pyopencv_NormHistogramCostExtractor_methods;
}

static PyObject* pyopencv_EMDHistogramCostExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<EMDHistogramCostExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_EMDHistogramCostExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_EMDHistogramCostExtractor_getNormFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::EMDHistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_EMDHistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::EMDHistogramCostExtractor*>(((pyopencv_EMDHistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'EMDHistogramCostExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNormFlag());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_EMDHistogramCostExtractor_setNormFlag(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::EMDHistogramCostExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_EMDHistogramCostExtractor_Type))
        _self_ = dynamic_cast<cv::EMDHistogramCostExtractor*>(((pyopencv_EMDHistogramCostExtractor_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'EMDHistogramCostExtractor' or its derivative)");
    int flag=0;

    const char* keywords[] = { "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:EMDHistogramCostExtractor.setNormFlag", (char**)keywords, &flag) )
    {
        ERRWRAP2(_self_->setNormFlag(flag));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_EMDHistogramCostExtractor_methods[] =
{
    {"getNormFlag", (PyCFunction)pyopencv_cv_EMDHistogramCostExtractor_getNormFlag, METH_VARARGS | METH_KEYWORDS, "getNormFlag() -> retval\n."},
    {"setNormFlag", (PyCFunction)pyopencv_cv_EMDHistogramCostExtractor_setNormFlag, METH_VARARGS | METH_KEYWORDS, "setNormFlag(flag) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_EMDHistogramCostExtractor_specials(void)
{
    pyopencv_EMDHistogramCostExtractor_Type.tp_base = &pyopencv_HistogramCostExtractor_Type;
    pyopencv_EMDHistogramCostExtractor_Type.tp_dealloc = pyopencv_EMDHistogramCostExtractor_dealloc;
    pyopencv_EMDHistogramCostExtractor_Type.tp_repr = pyopencv_EMDHistogramCostExtractor_repr;
    pyopencv_EMDHistogramCostExtractor_Type.tp_getset = pyopencv_EMDHistogramCostExtractor_getseters;
    pyopencv_EMDHistogramCostExtractor_Type.tp_methods = pyopencv_EMDHistogramCostExtractor_methods;
}

static PyObject* pyopencv_ChiHistogramCostExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ChiHistogramCostExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ChiHistogramCostExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_ChiHistogramCostExtractor_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_ChiHistogramCostExtractor_specials(void)
{
    pyopencv_ChiHistogramCostExtractor_Type.tp_base = &pyopencv_HistogramCostExtractor_Type;
    pyopencv_ChiHistogramCostExtractor_Type.tp_dealloc = pyopencv_ChiHistogramCostExtractor_dealloc;
    pyopencv_ChiHistogramCostExtractor_Type.tp_repr = pyopencv_ChiHistogramCostExtractor_repr;
    pyopencv_ChiHistogramCostExtractor_Type.tp_getset = pyopencv_ChiHistogramCostExtractor_getseters;
    pyopencv_ChiHistogramCostExtractor_Type.tp_methods = pyopencv_ChiHistogramCostExtractor_methods;
}

static PyObject* pyopencv_EMDL1HistogramCostExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<EMDL1HistogramCostExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_EMDL1HistogramCostExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_EMDL1HistogramCostExtractor_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_EMDL1HistogramCostExtractor_specials(void)
{
    pyopencv_EMDL1HistogramCostExtractor_Type.tp_base = &pyopencv_HistogramCostExtractor_Type;
    pyopencv_EMDL1HistogramCostExtractor_Type.tp_dealloc = pyopencv_EMDL1HistogramCostExtractor_dealloc;
    pyopencv_EMDL1HistogramCostExtractor_Type.tp_repr = pyopencv_EMDL1HistogramCostExtractor_repr;
    pyopencv_EMDL1HistogramCostExtractor_Type.tp_getset = pyopencv_EMDL1HistogramCostExtractor_getseters;
    pyopencv_EMDL1HistogramCostExtractor_Type.tp_methods = pyopencv_EMDL1HistogramCostExtractor_methods;
}

static PyObject* pyopencv_ShapeTransformer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ShapeTransformer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ShapeTransformer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ShapeTransformer_applyTransformation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeTransformer_Type))
        _self_ = dynamic_cast<cv::ShapeTransformer*>(((pyopencv_ShapeTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeTransformer' or its derivative)");
    {
    PyObject* pyobj_input = NULL;
    Mat input;
    PyObject* pyobj_output = NULL;
    Mat output;
    float retval;

    const char* keywords[] = { "input", "output", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ShapeTransformer.applyTransformation", (char**)keywords, &pyobj_input, &pyobj_output) &&
        pyopencv_to(pyobj_input, input, ArgInfo("input", 0)) &&
        pyopencv_to(pyobj_output, output, ArgInfo("output", 1)) )
    {
        ERRWRAP2(retval = _self_->applyTransformation(input, output));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(output));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_input = NULL;
    UMat input;
    PyObject* pyobj_output = NULL;
    UMat output;
    float retval;

    const char* keywords[] = { "input", "output", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ShapeTransformer.applyTransformation", (char**)keywords, &pyobj_input, &pyobj_output) &&
        pyopencv_to(pyobj_input, input, ArgInfo("input", 0)) &&
        pyopencv_to(pyobj_output, output, ArgInfo("output", 1)) )
    {
        ERRWRAP2(retval = _self_->applyTransformation(input, output));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(output));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeTransformer_estimateTransformation(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeTransformer_Type))
        _self_ = dynamic_cast<cv::ShapeTransformer*>(((pyopencv_ShapeTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeTransformer' or its derivative)");
    {
    PyObject* pyobj_transformingShape = NULL;
    Mat transformingShape;
    PyObject* pyobj_targetShape = NULL;
    Mat targetShape;
    PyObject* pyobj_matches = NULL;
    vector_DMatch matches;

    const char* keywords[] = { "transformingShape", "targetShape", "matches", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:ShapeTransformer.estimateTransformation", (char**)keywords, &pyobj_transformingShape, &pyobj_targetShape, &pyobj_matches) &&
        pyopencv_to(pyobj_transformingShape, transformingShape, ArgInfo("transformingShape", 0)) &&
        pyopencv_to(pyobj_targetShape, targetShape, ArgInfo("targetShape", 0)) &&
        pyopencv_to(pyobj_matches, matches, ArgInfo("matches", 0)) )
    {
        ERRWRAP2(_self_->estimateTransformation(transformingShape, targetShape, matches));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_transformingShape = NULL;
    UMat transformingShape;
    PyObject* pyobj_targetShape = NULL;
    UMat targetShape;
    PyObject* pyobj_matches = NULL;
    vector_DMatch matches;

    const char* keywords[] = { "transformingShape", "targetShape", "matches", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:ShapeTransformer.estimateTransformation", (char**)keywords, &pyobj_transformingShape, &pyobj_targetShape, &pyobj_matches) &&
        pyopencv_to(pyobj_transformingShape, transformingShape, ArgInfo("transformingShape", 0)) &&
        pyopencv_to(pyobj_targetShape, targetShape, ArgInfo("targetShape", 0)) &&
        pyopencv_to(pyobj_matches, matches, ArgInfo("matches", 0)) )
    {
        ERRWRAP2(_self_->estimateTransformation(transformingShape, targetShape, matches));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ShapeTransformer_warpImage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ShapeTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ShapeTransformer_Type))
        _self_ = dynamic_cast<cv::ShapeTransformer*>(((pyopencv_ShapeTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ShapeTransformer' or its derivative)");
    {
    PyObject* pyobj_transformingImage = NULL;
    Mat transformingImage;
    PyObject* pyobj_output = NULL;
    Mat output;
    int flags=INTER_LINEAR;
    int borderMode=BORDER_CONSTANT;
    PyObject* pyobj_borderValue = NULL;
    Scalar borderValue;

    const char* keywords[] = { "transformingImage", "output", "flags", "borderMode", "borderValue", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OiiO:ShapeTransformer.warpImage", (char**)keywords, &pyobj_transformingImage, &pyobj_output, &flags, &borderMode, &pyobj_borderValue) &&
        pyopencv_to(pyobj_transformingImage, transformingImage, ArgInfo("transformingImage", 0)) &&
        pyopencv_to(pyobj_output, output, ArgInfo("output", 1)) &&
        pyopencv_to(pyobj_borderValue, borderValue, ArgInfo("borderValue", 0)) )
    {
        ERRWRAP2(_self_->warpImage(transformingImage, output, flags, borderMode, borderValue));
        return pyopencv_from(output);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_transformingImage = NULL;
    UMat transformingImage;
    PyObject* pyobj_output = NULL;
    UMat output;
    int flags=INTER_LINEAR;
    int borderMode=BORDER_CONSTANT;
    PyObject* pyobj_borderValue = NULL;
    Scalar borderValue;

    const char* keywords[] = { "transformingImage", "output", "flags", "borderMode", "borderValue", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OiiO:ShapeTransformer.warpImage", (char**)keywords, &pyobj_transformingImage, &pyobj_output, &flags, &borderMode, &pyobj_borderValue) &&
        pyopencv_to(pyobj_transformingImage, transformingImage, ArgInfo("transformingImage", 0)) &&
        pyopencv_to(pyobj_output, output, ArgInfo("output", 1)) &&
        pyopencv_to(pyobj_borderValue, borderValue, ArgInfo("borderValue", 0)) )
    {
        ERRWRAP2(_self_->warpImage(transformingImage, output, flags, borderMode, borderValue));
        return pyopencv_from(output);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_ShapeTransformer_methods[] =
{
    {"applyTransformation", (PyCFunction)pyopencv_cv_ShapeTransformer_applyTransformation, METH_VARARGS | METH_KEYWORDS, "applyTransformation(input[, output]) -> retval, output\n.   @brief Apply a transformation, given a pre-estimated transformation parameters.\n.   \n.   @param input Contour (set of points) to apply the transformation.\n.   @param output Output contour."},
    {"estimateTransformation", (PyCFunction)pyopencv_cv_ShapeTransformer_estimateTransformation, METH_VARARGS | METH_KEYWORDS, "estimateTransformation(transformingShape, targetShape, matches) -> None\n.   @brief Estimate the transformation parameters of the current transformer algorithm, based on point matches.\n.   \n.   @param transformingShape Contour defining first shape.\n.   @param targetShape Contour defining second shape (Target).\n.   @param matches Standard vector of Matches between points."},
    {"warpImage", (PyCFunction)pyopencv_cv_ShapeTransformer_warpImage, METH_VARARGS | METH_KEYWORDS, "warpImage(transformingImage[, output[, flags[, borderMode[, borderValue]]]]) -> output\n.   @brief Apply a transformation, given a pre-estimated transformation parameters, to an Image.\n.   \n.   @param transformingImage Input image.\n.   @param output Output image.\n.   @param flags Image interpolation method.\n.   @param borderMode border style.\n.   @param borderValue border value."},

    {NULL,          NULL}
};

static void pyopencv_ShapeTransformer_specials(void)
{
    pyopencv_ShapeTransformer_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_ShapeTransformer_Type.tp_dealloc = pyopencv_ShapeTransformer_dealloc;
    pyopencv_ShapeTransformer_Type.tp_repr = pyopencv_ShapeTransformer_repr;
    pyopencv_ShapeTransformer_Type.tp_getset = pyopencv_ShapeTransformer_getseters;
    pyopencv_ShapeTransformer_Type.tp_methods = pyopencv_ShapeTransformer_methods;
}

static PyObject* pyopencv_ThinPlateSplineShapeTransformer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ThinPlateSplineShapeTransformer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ThinPlateSplineShapeTransformer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ThinPlateSplineShapeTransformer_getRegularizationParameter(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ThinPlateSplineShapeTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ThinPlateSplineShapeTransformer_Type))
        _self_ = dynamic_cast<cv::ThinPlateSplineShapeTransformer*>(((pyopencv_ThinPlateSplineShapeTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ThinPlateSplineShapeTransformer' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRegularizationParameter());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ThinPlateSplineShapeTransformer_setRegularizationParameter(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ThinPlateSplineShapeTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ThinPlateSplineShapeTransformer_Type))
        _self_ = dynamic_cast<cv::ThinPlateSplineShapeTransformer*>(((pyopencv_ThinPlateSplineShapeTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ThinPlateSplineShapeTransformer' or its derivative)");
    double beta=0;

    const char* keywords[] = { "beta", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ThinPlateSplineShapeTransformer.setRegularizationParameter", (char**)keywords, &beta) )
    {
        ERRWRAP2(_self_->setRegularizationParameter(beta));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ThinPlateSplineShapeTransformer_methods[] =
{
    {"getRegularizationParameter", (PyCFunction)pyopencv_cv_ThinPlateSplineShapeTransformer_getRegularizationParameter, METH_VARARGS | METH_KEYWORDS, "getRegularizationParameter() -> retval\n."},
    {"setRegularizationParameter", (PyCFunction)pyopencv_cv_ThinPlateSplineShapeTransformer_setRegularizationParameter, METH_VARARGS | METH_KEYWORDS, "setRegularizationParameter(beta) -> None\n.   @brief Set the regularization parameter for relaxing the exact interpolation requirements of the TPS\n.   algorithm.\n.   \n.   @param beta value of the regularization parameter."},

    {NULL,          NULL}
};

static void pyopencv_ThinPlateSplineShapeTransformer_specials(void)
{
    pyopencv_ThinPlateSplineShapeTransformer_Type.tp_base = &pyopencv_ShapeTransformer_Type;
    pyopencv_ThinPlateSplineShapeTransformer_Type.tp_dealloc = pyopencv_ThinPlateSplineShapeTransformer_dealloc;
    pyopencv_ThinPlateSplineShapeTransformer_Type.tp_repr = pyopencv_ThinPlateSplineShapeTransformer_repr;
    pyopencv_ThinPlateSplineShapeTransformer_Type.tp_getset = pyopencv_ThinPlateSplineShapeTransformer_getseters;
    pyopencv_ThinPlateSplineShapeTransformer_Type.tp_methods = pyopencv_ThinPlateSplineShapeTransformer_methods;
}

static PyObject* pyopencv_AffineTransformer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AffineTransformer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AffineTransformer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_AffineTransformer_getFullAffine(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AffineTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AffineTransformer_Type))
        _self_ = dynamic_cast<cv::AffineTransformer*>(((pyopencv_AffineTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AffineTransformer' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFullAffine());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AffineTransformer_setFullAffine(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AffineTransformer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AffineTransformer_Type))
        _self_ = dynamic_cast<cv::AffineTransformer*>(((pyopencv_AffineTransformer_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AffineTransformer' or its derivative)");
    bool fullAffine=0;

    const char* keywords[] = { "fullAffine", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:AffineTransformer.setFullAffine", (char**)keywords, &fullAffine) )
    {
        ERRWRAP2(_self_->setFullAffine(fullAffine));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_AffineTransformer_methods[] =
{
    {"getFullAffine", (PyCFunction)pyopencv_cv_AffineTransformer_getFullAffine, METH_VARARGS | METH_KEYWORDS, "getFullAffine() -> retval\n."},
    {"setFullAffine", (PyCFunction)pyopencv_cv_AffineTransformer_setFullAffine, METH_VARARGS | METH_KEYWORDS, "setFullAffine(fullAffine) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_AffineTransformer_specials(void)
{
    pyopencv_AffineTransformer_Type.tp_base = &pyopencv_ShapeTransformer_Type;
    pyopencv_AffineTransformer_Type.tp_dealloc = pyopencv_AffineTransformer_dealloc;
    pyopencv_AffineTransformer_Type.tp_repr = pyopencv_AffineTransformer_repr;
    pyopencv_AffineTransformer_Type.tp_getset = pyopencv_AffineTransformer_getseters;
    pyopencv_AffineTransformer_Type.tp_methods = pyopencv_AffineTransformer_methods;
}

static PyObject* pyopencv_VideoCapture_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoCapture %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoCapture_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_VideoCapture_get(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.get", (char**)keywords, &propId) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_grab(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->grab());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_open(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    {
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoCapture.open", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int index=0;
    bool retval;

    const char* keywords[] = { "index", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.open", (char**)keywords, &index) )
    {
        ERRWRAP2(retval = _self_->open(index));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int cameraNum=0;
    int apiPreference=0;
    bool retval;

    const char* keywords[] = { "cameraNum", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:VideoCapture.open", (char**)keywords, &cameraNum, &apiPreference) )
    {
        ERRWRAP2(retval = _self_->open(cameraNum, apiPreference));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi:VideoCapture.open", (char**)keywords, &pyobj_filename, &apiPreference) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_retrieve(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &flag) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &flag) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_set(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoCapture* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    int propId=0;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoCapture.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoCapture_methods[] =
{
    {"get", (PyCFunction)pyopencv_cv_VideoCapture_get, METH_VARARGS | METH_KEYWORDS, "get(propId) -> retval\n.   @brief Returns the specified VideoCapture property\n.   \n.   @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.   or one from @ref videoio_flags_others\n.   @return Value for the specified property. Value 0 is returned when querying a property that is\n.   not supported by the backend used by the VideoCapture instance.\n.   \n.   @note Reading / writing properties involves many layers. Some unexpected result might happens\n.   along this chain.\n.   @code {.txt}\n.   `VideoCapture -> API Backend -> Operating System -> Device Driver -> Device Hardware`\n.   @endcode\n.   The returned value might be different from what really used by the device or it could be encoded\n.   using device dependant rules (eg. steps or percentage). Effective behaviour depends from device\n.   driver and API Backend"},
    {"grab", (PyCFunction)pyopencv_cv_VideoCapture_grab, METH_VARARGS | METH_KEYWORDS, "grab() -> retval\n.   @brief Grabs the next frame from video file or capturing device.\n.   \n.   @return `true` (non-zero) in the case of success.\n.   \n.   The method/function grabs the next frame from video file or camera and returns true (non-zero) in\n.   the case of success.\n.   \n.   The primary use of the function is in multi-camera environments, especially when the cameras do not\n.   have hardware synchronization. That is, you call VideoCapture::grab() for each camera and after that\n.   call the slower method VideoCapture::retrieve() to decode and get frame from each camera. This way\n.   the overhead on demosaicing or motion jpeg decompression etc. is eliminated and the retrieved frames\n.   from different cameras will be closer in time.\n.   \n.   Also, when a connected camera is multi-head (for example, a stereo camera or a Kinect device), the\n.   correct way of retrieving data from it is to call VideoCapture::grab() first and then call\n.   VideoCapture::retrieve() one or more times with different values of the channel parameter.\n.   \n.   @ref tutorial_kinect_openni"},
    {"isOpened", (PyCFunction)pyopencv_cv_VideoCapture_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval\n.   @brief Returns true if video capturing has been initialized already.\n.   \n.   If the previous call to VideoCapture constructor or VideoCapture::open() succeeded, the method returns\n.   true."},
    {"open", (PyCFunction)pyopencv_cv_VideoCapture_open, METH_VARARGS | METH_KEYWORDS, "open(filename) -> retval\n.   @brief  Open video file or a capturing device or a IP video stream for video capturing\n.   \n.   @overload\n.   \n.   Parameters are same as the constructor VideoCapture(const String& filename)\n.   @return `true` if the file has been successfully opened\n.   \n.   The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(index) -> retval\n.   @brief  Open a camera for video capturing\n.   \n.   @overload\n.   \n.   Parameters are same as the constructor VideoCapture(int index)\n.   @return `true` if the camera has been successfully opened.\n.   \n.   The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(cameraNum, apiPreference) -> retval\n.   @brief  Open a camera for video capturing\n.   \n.   @overload\n.   \n.   Parameters are similar as the constructor VideoCapture(int index),except it takes an additional argument apiPreference.\n.   Definitely, is same as open(int index) where `index=cameraNum + apiPreference`\n.   @return `true` if the camera has been successfully opened.\n\n\n\nopen(filename, apiPreference) -> retval\n.   @brief Open video file or a capturing device or a IP video stream for video capturing with API Preference\n.   \n.   @overload\n.   \n.   Parameters are same as the constructor VideoCapture(const String& filename, int apiPreference)\n.   @return `true` if the file has been successfully opened\n.   \n.   The method first calls VideoCapture::release to close the already opened file or camera."},
    {"read", (PyCFunction)pyopencv_cv_VideoCapture_read, METH_VARARGS | METH_KEYWORDS, "read([, image]) -> retval, image\n.   @brief Grabs, decodes and returns the next video frame.\n.   \n.   @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.   @return `false` if no frames has been grabbed\n.   \n.   The method/function combines VideoCapture::grab() and VideoCapture::retrieve() in one call. This is the\n.   most convenient method for reading video files or capturing data from decode and returns the just\n.   grabbed frame. If no frames has been grabbed (camera has been disconnected, or there are no more\n.   frames in video file), the method returns false and the function returns empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.   @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.   capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.   :ocvcvCloneImage and then do whatever you want with the copy."},
    {"release", (PyCFunction)pyopencv_cv_VideoCapture_release, METH_VARARGS | METH_KEYWORDS, "release() -> None\n.   @brief Closes video file or capturing device.\n.   \n.   The method is automatically called by subsequent VideoCapture::open and by VideoCapture\n.   destructor.\n.   \n.   The C function also deallocates memory and clears \\*capture pointer."},
    {"retrieve", (PyCFunction)pyopencv_cv_VideoCapture_retrieve, METH_VARARGS | METH_KEYWORDS, "retrieve([, image[, flag]]) -> retval, image\n.   @brief Decodes and returns the grabbed video frame.\n.   \n.   @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.   @param flag it could be a frame index or a driver specific flag\n.   @return `false` if no frames has been grabbed\n.   \n.   The method decodes and returns the just grabbed frame. If no frames has been grabbed\n.   (camera has been disconnected, or there are no more frames in video file), the method returns false\n.   and the function returns an empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.   @sa read()\n.   \n.   @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.   capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.   :ocvcvCloneImage and then do whatever you want with the copy."},
    {"set", (PyCFunction)pyopencv_cv_VideoCapture_set, METH_VARARGS | METH_KEYWORDS, "set(propId, value) -> retval\n.   @brief Sets a property in the VideoCapture.\n.   \n.   @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.   or one from @ref videoio_flags_others\n.   @param value Value of the property.\n.   @return `true` if the property is supported by backend used by the VideoCapture instance.\n.   @note Even if it returns `true` this doesn't ensure that the property\n.   value has been accepted by the capture device. See note in VideoCapture::get()"},

    {NULL,          NULL}
};

static void pyopencv_VideoCapture_specials(void)
{
    pyopencv_VideoCapture_Type.tp_base = NULL;
    pyopencv_VideoCapture_Type.tp_dealloc = pyopencv_VideoCapture_dealloc;
    pyopencv_VideoCapture_Type.tp_repr = pyopencv_VideoCapture_repr;
    pyopencv_VideoCapture_Type.tp_getset = pyopencv_VideoCapture_getseters;
    pyopencv_VideoCapture_Type.tp_methods = pyopencv_VideoCapture_methods;
}

static PyObject* pyopencv_VideoWriter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoWriter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoWriter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_VideoWriter_get(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoWriter.get", (char**)keywords, &propId) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_open(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &apiPreference, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_set(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    int propId=0;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoWriter.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::VideoWriter* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoWriter_methods[] =
{
    {"get", (PyCFunction)pyopencv_cv_VideoWriter_get, METH_VARARGS | METH_KEYWORDS, "get(propId) -> retval\n.   @brief Returns the specified VideoWriter property\n.   \n.   @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.   or one of @ref videoio_flags_others\n.   \n.   @return Value for the specified property. Value 0 is returned when querying a property that is\n.   not supported by the backend used by the VideoWriter instance."},
    {"isOpened", (PyCFunction)pyopencv_cv_VideoWriter_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval\n.   @brief Returns true if video writer has been successfully initialized."},
    {"open", (PyCFunction)pyopencv_cv_VideoWriter_open, METH_VARARGS | METH_KEYWORDS, "open(filename, fourcc, fps, frameSize[, isColor]) -> retval\n.   @brief Initializes or reinitializes video writer.\n.   \n.   The method opens video writer. Parameters are the same as in the constructor\n.   VideoWriter::VideoWriter.\n.   @return `true` if video writer has been successfully initialized\n.   \n.   The method first calls VideoWriter::release to close the already opened file.\n\n\n\nopen(filename, apiPreference, fourcc, fps, frameSize[, isColor]) -> retval\n.   @overload"},
    {"release", (PyCFunction)pyopencv_cv_VideoWriter_release, METH_VARARGS | METH_KEYWORDS, "release() -> None\n.   @brief Closes the video writer.\n.   \n.   The method is automatically called by subsequent VideoWriter::open and by the VideoWriter\n.   destructor."},
    {"set", (PyCFunction)pyopencv_cv_VideoWriter_set, METH_VARARGS | METH_KEYWORDS, "set(propId, value) -> retval\n.   @brief Sets a property in the VideoWriter.\n.   \n.   @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.   or one of @ref videoio_flags_others\n.   \n.   @param value Value of the property.\n.   @return  `true` if the property is supported by the backend used by the VideoWriter instance."},
    {"write", (PyCFunction)pyopencv_cv_VideoWriter_write, METH_VARARGS | METH_KEYWORDS, "write(image) -> None\n.   @brief Writes the next video frame\n.   \n.   @param image The written frame\n.   \n.   The function/method writes the specified image to video file. It must have the same size as has\n.   been specified when opening the video writer."},

    {NULL,          NULL}
};

static void pyopencv_VideoWriter_specials(void)
{
    pyopencv_VideoWriter_Type.tp_base = NULL;
    pyopencv_VideoWriter_Type.tp_dealloc = pyopencv_VideoWriter_dealloc;
    pyopencv_VideoWriter_Type.tp_repr = pyopencv_VideoWriter_repr;
    pyopencv_VideoWriter_Type.tp_getset = pyopencv_VideoWriter_getseters;
    pyopencv_VideoWriter_Type.tp_methods = pyopencv_VideoWriter_methods;
}

static PyObject* pyopencv_Feature2D_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Feature2D %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Feature2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_Feature2D_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_defaultNorm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->defaultNorm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detectAndCompute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Ob:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Ob:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Feature2D.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Feature2D* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Feature2D.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_Feature2D_methods[] =
{
    {"compute", (PyCFunction)pyopencv_cv_Feature2D_compute, METH_VARARGS | METH_KEYWORDS, "compute(image, keypoints[, descriptors]) -> keypoints, descriptors\n.   @brief Computes the descriptors for a set of keypoints detected in an image (first variant) or image set\n.   (second variant).\n.   \n.   @param image Image.\n.   @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.   computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.   with several dominant orientations (for each orientation).\n.   @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.   descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.   descriptor for keypoint j-th keypoint.\n\n\n\ncompute(images, keypoints[, descriptors]) -> keypoints, descriptors\n.   @overload\n.   \n.   @param images Image set.\n.   @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.   computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.   with several dominant orientations (for each orientation).\n.   @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.   descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.   descriptor for keypoint j-th keypoint."},
    {"defaultNorm", (PyCFunction)pyopencv_cv_Feature2D_defaultNorm, METH_VARARGS | METH_KEYWORDS, "defaultNorm() -> retval\n."},
    {"descriptorSize", (PyCFunction)pyopencv_cv_Feature2D_descriptorSize, METH_VARARGS | METH_KEYWORDS, "descriptorSize() -> retval\n."},
    {"descriptorType", (PyCFunction)pyopencv_cv_Feature2D_descriptorType, METH_VARARGS | METH_KEYWORDS, "descriptorType() -> retval\n."},
    {"detect", (PyCFunction)pyopencv_cv_Feature2D_detect, METH_VARARGS | METH_KEYWORDS, "detect(image[, mask]) -> keypoints\n.   @brief Detects keypoints in an image (first variant) or image set (second variant).\n.   \n.   @param image Image.\n.   @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.   of keypoints detected in images[i] .\n.   @param mask Mask specifying where to look for keypoints (optional). It must be a 8-bit integer\n.   matrix with non-zero values in the region of interest.\n\n\n\ndetect(images[, masks]) -> keypoints\n.   @overload\n.   @param images Image set.\n.   @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.   of keypoints detected in images[i] .\n.   @param masks Masks for each input image specifying where to look for keypoints (optional).\n.   masks[i] is a mask for images[i]."},
    {"detectAndCompute", (PyCFunction)pyopencv_cv_Feature2D_detectAndCompute, METH_VARARGS | METH_KEYWORDS, "detectAndCompute(image, mask[, descriptors[, useProvidedKeypoints]]) -> keypoints, descriptors\n.   Detects keypoints and computes the descriptors"},
    {"empty", (PyCFunction)pyopencv_cv_Feature2D_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n."},
    {"read", (PyCFunction)pyopencv_cv_Feature2D_read, METH_VARARGS | METH_KEYWORDS, "read(fileName) -> None\n."},
    {"write", (PyCFunction)pyopencv_cv_Feature2D_write, METH_VARARGS | METH_KEYWORDS, "write(fileName) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_Feature2D_specials(void)
{
    pyopencv_Feature2D_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_Feature2D_Type.tp_dealloc = pyopencv_Feature2D_dealloc;
    pyopencv_Feature2D_Type.tp_repr = pyopencv_Feature2D_repr;
    pyopencv_Feature2D_Type.tp_getset = pyopencv_Feature2D_getseters;
    pyopencv_Feature2D_Type.tp_methods = pyopencv_Feature2D_methods;
}

static PyObject* pyopencv_BRISK_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BRISK %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BRISK_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BRISK_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BRISK_specials(void)
{
    pyopencv_BRISK_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_BRISK_Type.tp_dealloc = pyopencv_BRISK_dealloc;
    pyopencv_BRISK_Type.tp_repr = pyopencv_BRISK_repr;
    pyopencv_BRISK_Type.tp_getset = pyopencv_BRISK_getseters;
    pyopencv_BRISK_Type.tp_methods = pyopencv_BRISK_methods;
}

static PyObject* pyopencv_ORB_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ORB %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ORB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_ORB_getEdgeThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEdgeThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFastThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFirstLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getNLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getPatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScaleFactor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleFactor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScoreType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScoreType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getWTA_K(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWTA_K());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setEdgeThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int edgeThreshold=0;

    const char* keywords[] = { "edgeThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setEdgeThreshold", (char**)keywords, &edgeThreshold) )
    {
        ERRWRAP2(_self_->setEdgeThreshold(edgeThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFastThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int fastThreshold=0;

    const char* keywords[] = { "fastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setFastThreshold", (char**)keywords, &fastThreshold) )
    {
        ERRWRAP2(_self_->setFastThreshold(fastThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFirstLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int firstLevel=0;

    const char* keywords[] = { "firstLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setFirstLevel", (char**)keywords, &firstLevel) )
    {
        ERRWRAP2(_self_->setFirstLevel(firstLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setMaxFeatures", (char**)keywords, &maxFeatures) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setNLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int nlevels=0;

    const char* keywords[] = { "nlevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setNLevels", (char**)keywords, &nlevels) )
    {
        ERRWRAP2(_self_->setNLevels(nlevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setPatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int patchSize=0;

    const char* keywords[] = { "patchSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setPatchSize", (char**)keywords, &patchSize) )
    {
        ERRWRAP2(_self_->setPatchSize(patchSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScaleFactor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    double scaleFactor=0;

    const char* keywords[] = { "scaleFactor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ORB.setScaleFactor", (char**)keywords, &scaleFactor) )
    {
        ERRWRAP2(_self_->setScaleFactor(scaleFactor));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScoreType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int scoreType=0;

    const char* keywords[] = { "scoreType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setScoreType", (char**)keywords, &scoreType) )
    {
        ERRWRAP2(_self_->setScoreType(scoreType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setWTA_K(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::ORB* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_ORB_Type))
        _self_ = dynamic_cast<cv::ORB*>(((pyopencv_ORB_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    int wta_k=0;

    const char* keywords[] = { "wta_k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setWTA_K", (char**)keywords, &wta_k) )
    {
        ERRWRAP2(_self_->setWTA_K(wta_k));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_ORB_methods[] =
{
    {"getEdgeThreshold", (PyCFunction)pyopencv_cv_ORB_getEdgeThreshold, METH_VARARGS | METH_KEYWORDS, "getEdgeThreshold() -> retval\n."},
    {"getFastThreshold", (PyCFunction)pyopencv_cv_ORB_getFastThreshold, METH_VARARGS | METH_KEYWORDS, "getFastThreshold() -> retval\n."},
    {"getFirstLevel", (PyCFunction)pyopencv_cv_ORB_getFirstLevel, METH_VARARGS | METH_KEYWORDS, "getFirstLevel() -> retval\n."},
    {"getMaxFeatures", (PyCFunction)pyopencv_cv_ORB_getMaxFeatures, METH_VARARGS | METH_KEYWORDS, "getMaxFeatures() -> retval\n."},
    {"getNLevels", (PyCFunction)pyopencv_cv_ORB_getNLevels, METH_VARARGS | METH_KEYWORDS, "getNLevels() -> retval\n."},
    {"getPatchSize", (PyCFunction)pyopencv_cv_ORB_getPatchSize, METH_VARARGS | METH_KEYWORDS, "getPatchSize() -> retval\n."},
    {"getScaleFactor", (PyCFunction)pyopencv_cv_ORB_getScaleFactor, METH_VARARGS | METH_KEYWORDS, "getScaleFactor() -> retval\n."},
    {"getScoreType", (PyCFunction)pyopencv_cv_ORB_getScoreType, METH_VARARGS | METH_KEYWORDS, "getScoreType() -> retval\n."},
    {"getWTA_K", (PyCFunction)pyopencv_cv_ORB_getWTA_K, METH_VARARGS | METH_KEYWORDS, "getWTA_K() -> retval\n."},
    {"setEdgeThreshold", (PyCFunction)pyopencv_cv_ORB_setEdgeThreshold, METH_VARARGS | METH_KEYWORDS, "setEdgeThreshold(edgeThreshold) -> None\n."},
    {"setFastThreshold", (PyCFunction)pyopencv_cv_ORB_setFastThreshold, METH_VARARGS | METH_KEYWORDS, "setFastThreshold(fastThreshold) -> None\n."},
    {"setFirstLevel", (PyCFunction)pyopencv_cv_ORB_setFirstLevel, METH_VARARGS | METH_KEYWORDS, "setFirstLevel(firstLevel) -> None\n."},
    {"setMaxFeatures", (PyCFunction)pyopencv_cv_ORB_setMaxFeatures, METH_VARARGS | METH_KEYWORDS, "setMaxFeatures(maxFeatures) -> None\n."},
    {"setNLevels", (PyCFunction)pyopencv_cv_ORB_setNLevels, METH_VARARGS | METH_KEYWORDS, "setNLevels(nlevels) -> None\n."},
    {"setPatchSize", (PyCFunction)pyopencv_cv_ORB_setPatchSize, METH_VARARGS | METH_KEYWORDS, "setPatchSize(patchSize) -> None\n."},
    {"setScaleFactor", (PyCFunction)pyopencv_cv_ORB_setScaleFactor, METH_VARARGS | METH_KEYWORDS, "setScaleFactor(scaleFactor) -> None\n."},
    {"setScoreType", (PyCFunction)pyopencv_cv_ORB_setScoreType, METH_VARARGS | METH_KEYWORDS, "setScoreType(scoreType) -> None\n."},
    {"setWTA_K", (PyCFunction)pyopencv_cv_ORB_setWTA_K, METH_VARARGS | METH_KEYWORDS, "setWTA_K(wta_k) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_ORB_specials(void)
{
    pyopencv_ORB_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_ORB_Type.tp_dealloc = pyopencv_ORB_dealloc;
    pyopencv_ORB_Type.tp_repr = pyopencv_ORB_repr;
    pyopencv_ORB_Type.tp_getset = pyopencv_ORB_getseters;
    pyopencv_ORB_Type.tp_methods = pyopencv_ORB_methods;
}

static PyObject* pyopencv_MSER_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MSER %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MSER_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_MSER_detectRegions(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getDelta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMaxArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMinArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getPass2Only(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPass2Only());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setDelta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int delta=0;

    const char* keywords[] = { "delta", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setDelta", (char**)keywords, &delta) )
    {
        ERRWRAP2(_self_->setDelta(delta));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMaxArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int maxArea=0;

    const char* keywords[] = { "maxArea", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setMaxArea", (char**)keywords, &maxArea) )
    {
        ERRWRAP2(_self_->setMaxArea(maxArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMinArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    int minArea=0;

    const char* keywords[] = { "minArea", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setMinArea", (char**)keywords, &minArea) )
    {
        ERRWRAP2(_self_->setMinArea(minArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setPass2Only(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::MSER* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:MSER.setPass2Only", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setPass2Only(f));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_MSER_methods[] =
{
    {"detectRegions", (PyCFunction)pyopencv_cv_MSER_detectRegions, METH_VARARGS | METH_KEYWORDS, "detectRegions(image) -> msers, bboxes\n.   @brief Detect %MSER regions\n.   \n.   @param image input image (8UC1, 8UC3 or 8UC4, must be greater or equal than 3x3)\n.   @param msers resulting list of point sets\n.   @param bboxes resulting bounding boxes"},
    {"getDelta", (PyCFunction)pyopencv_cv_MSER_getDelta, METH_VARARGS | METH_KEYWORDS, "getDelta() -> retval\n."},
    {"getMaxArea", (PyCFunction)pyopencv_cv_MSER_getMaxArea, METH_VARARGS | METH_KEYWORDS, "getMaxArea() -> retval\n."},
    {"getMinArea", (PyCFunction)pyopencv_cv_MSER_getMinArea, METH_VARARGS | METH_KEYWORDS, "getMinArea() -> retval\n."},
    {"getPass2Only", (PyCFunction)pyopencv_cv_MSER_getPass2Only, METH_VARARGS | METH_KEYWORDS, "getPass2Only() -> retval\n."},
    {"setDelta", (PyCFunction)pyopencv_cv_MSER_setDelta, METH_VARARGS | METH_KEYWORDS, "setDelta(delta) -> None\n."},
    {"setMaxArea", (PyCFunction)pyopencv_cv_MSER_setMaxArea, METH_VARARGS | METH_KEYWORDS, "setMaxArea(maxArea) -> None\n."},
    {"setMinArea", (PyCFunction)pyopencv_cv_MSER_setMinArea, METH_VARARGS | METH_KEYWORDS, "setMinArea(minArea) -> None\n."},
    {"setPass2Only", (PyCFunction)pyopencv_cv_MSER_setPass2Only, METH_VARARGS | METH_KEYWORDS, "setPass2Only(f) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_MSER_specials(void)
{
    pyopencv_MSER_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_MSER_Type.tp_dealloc = pyopencv_MSER_dealloc;
    pyopencv_MSER_Type.tp_repr = pyopencv_MSER_repr;
    pyopencv_MSER_Type.tp_getset = pyopencv_MSER_getseters;
    pyopencv_MSER_Type.tp_methods = pyopencv_MSER_methods;
}

static PyObject* pyopencv_FastFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FastFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_FastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:FastFeatureDetector.setNonmaxSuppression", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FastFeatureDetector.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::FastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_FastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::FastFeatureDetector*>(((pyopencv_FastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    int type=0;

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FastFeatureDetector.setType", (char**)keywords, &type) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_FastFeatureDetector_methods[] =
{
    {"getNonmaxSuppression", (PyCFunction)pyopencv_cv_FastFeatureDetector_getNonmaxSuppression, METH_VARARGS | METH_KEYWORDS, "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", (PyCFunction)pyopencv_cv_FastFeatureDetector_getThreshold, METH_VARARGS | METH_KEYWORDS, "getThreshold() -> retval\n."},
    {"getType", (PyCFunction)pyopencv_cv_FastFeatureDetector_getType, METH_VARARGS | METH_KEYWORDS, "getType() -> retval\n."},
    {"setNonmaxSuppression", (PyCFunction)pyopencv_cv_FastFeatureDetector_setNonmaxSuppression, METH_VARARGS | METH_KEYWORDS, "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", (PyCFunction)pyopencv_cv_FastFeatureDetector_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None\n."},
    {"setType", (PyCFunction)pyopencv_cv_FastFeatureDetector_setType, METH_VARARGS | METH_KEYWORDS, "setType(type) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_FastFeatureDetector_specials(void)
{
    pyopencv_FastFeatureDetector_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_FastFeatureDetector_Type.tp_dealloc = pyopencv_FastFeatureDetector_dealloc;
    pyopencv_FastFeatureDetector_Type.tp_repr = pyopencv_FastFeatureDetector_repr;
    pyopencv_FastFeatureDetector_Type.tp_getset = pyopencv_FastFeatureDetector_getseters;
    pyopencv_FastFeatureDetector_Type.tp_methods = pyopencv_FastFeatureDetector_methods;
}

static PyObject* pyopencv_AgastFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AgastFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AgastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:AgastFeatureDetector.setNonmaxSuppression", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AgastFeatureDetector.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AgastFeatureDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AgastFeatureDetector_Type))
        _self_ = dynamic_cast<cv::AgastFeatureDetector*>(((pyopencv_AgastFeatureDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    int type=0;

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AgastFeatureDetector.setType", (char**)keywords, &type) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_AgastFeatureDetector_methods[] =
{
    {"getNonmaxSuppression", (PyCFunction)pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression, METH_VARARGS | METH_KEYWORDS, "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", (PyCFunction)pyopencv_cv_AgastFeatureDetector_getThreshold, METH_VARARGS | METH_KEYWORDS, "getThreshold() -> retval\n."},
    {"getType", (PyCFunction)pyopencv_cv_AgastFeatureDetector_getType, METH_VARARGS | METH_KEYWORDS, "getType() -> retval\n."},
    {"setNonmaxSuppression", (PyCFunction)pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression, METH_VARARGS | METH_KEYWORDS, "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", (PyCFunction)pyopencv_cv_AgastFeatureDetector_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None\n."},
    {"setType", (PyCFunction)pyopencv_cv_AgastFeatureDetector_setType, METH_VARARGS | METH_KEYWORDS, "setType(type) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_AgastFeatureDetector_specials(void)
{
    pyopencv_AgastFeatureDetector_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_AgastFeatureDetector_Type.tp_dealloc = pyopencv_AgastFeatureDetector_dealloc;
    pyopencv_AgastFeatureDetector_Type.tp_repr = pyopencv_AgastFeatureDetector_repr;
    pyopencv_AgastFeatureDetector_Type.tp_getset = pyopencv_AgastFeatureDetector_getseters;
    pyopencv_AgastFeatureDetector_Type.tp_methods = pyopencv_AgastFeatureDetector_methods;
}

static PyObject* pyopencv_GFTTDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<GFTTDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_GFTTDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_GFTTDetector_getBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getHarrisDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHarrisDetector());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getK());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMinDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getQualityLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getQualityLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GFTTDetector.setBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setHarrisDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:GFTTDetector.setHarrisDetector", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setHarrisDetector(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double k=0;

    const char* keywords[] = { "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setK", (char**)keywords, &k) )
    {
        ERRWRAP2(_self_->setK(k));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GFTTDetector.setMaxFeatures", (char**)keywords, &maxFeatures) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMinDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double minDistance=0;

    const char* keywords[] = { "minDistance", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setMinDistance", (char**)keywords, &minDistance) )
    {
        ERRWRAP2(_self_->setMinDistance(minDistance));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setQualityLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::GFTTDetector* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_GFTTDetector_Type))
        _self_ = dynamic_cast<cv::GFTTDetector*>(((pyopencv_GFTTDetector_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    double qlevel=0;

    const char* keywords[] = { "qlevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setQualityLevel", (char**)keywords, &qlevel) )
    {
        ERRWRAP2(_self_->setQualityLevel(qlevel));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_GFTTDetector_methods[] =
{
    {"getBlockSize", (PyCFunction)pyopencv_cv_GFTTDetector_getBlockSize, METH_VARARGS | METH_KEYWORDS, "getBlockSize() -> retval\n."},
    {"getHarrisDetector", (PyCFunction)pyopencv_cv_GFTTDetector_getHarrisDetector, METH_VARARGS | METH_KEYWORDS, "getHarrisDetector() -> retval\n."},
    {"getK", (PyCFunction)pyopencv_cv_GFTTDetector_getK, METH_VARARGS | METH_KEYWORDS, "getK() -> retval\n."},
    {"getMaxFeatures", (PyCFunction)pyopencv_cv_GFTTDetector_getMaxFeatures, METH_VARARGS | METH_KEYWORDS, "getMaxFeatures() -> retval\n."},
    {"getMinDistance", (PyCFunction)pyopencv_cv_GFTTDetector_getMinDistance, METH_VARARGS | METH_KEYWORDS, "getMinDistance() -> retval\n."},
    {"getQualityLevel", (PyCFunction)pyopencv_cv_GFTTDetector_getQualityLevel, METH_VARARGS | METH_KEYWORDS, "getQualityLevel() -> retval\n."},
    {"setBlockSize", (PyCFunction)pyopencv_cv_GFTTDetector_setBlockSize, METH_VARARGS | METH_KEYWORDS, "setBlockSize(blockSize) -> None\n."},
    {"setHarrisDetector", (PyCFunction)pyopencv_cv_GFTTDetector_setHarrisDetector, METH_VARARGS | METH_KEYWORDS, "setHarrisDetector(val) -> None\n."},
    {"setK", (PyCFunction)pyopencv_cv_GFTTDetector_setK, METH_VARARGS | METH_KEYWORDS, "setK(k) -> None\n."},
    {"setMaxFeatures", (PyCFunction)pyopencv_cv_GFTTDetector_setMaxFeatures, METH_VARARGS | METH_KEYWORDS, "setMaxFeatures(maxFeatures) -> None\n."},
    {"setMinDistance", (PyCFunction)pyopencv_cv_GFTTDetector_setMinDistance, METH_VARARGS | METH_KEYWORDS, "setMinDistance(minDistance) -> None\n."},
    {"setQualityLevel", (PyCFunction)pyopencv_cv_GFTTDetector_setQualityLevel, METH_VARARGS | METH_KEYWORDS, "setQualityLevel(qlevel) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_GFTTDetector_specials(void)
{
    pyopencv_GFTTDetector_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_GFTTDetector_Type.tp_dealloc = pyopencv_GFTTDetector_dealloc;
    pyopencv_GFTTDetector_Type.tp_repr = pyopencv_GFTTDetector_repr;
    pyopencv_GFTTDetector_Type.tp_getset = pyopencv_GFTTDetector_getseters;
    pyopencv_GFTTDetector_Type.tp_methods = pyopencv_GFTTDetector_methods;
}

static PyObject* pyopencv_SimpleBlobDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SimpleBlobDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SimpleBlobDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_SimpleBlobDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_SimpleBlobDetector_specials(void)
{
    pyopencv_SimpleBlobDetector_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_SimpleBlobDetector_Type.tp_dealloc = pyopencv_SimpleBlobDetector_dealloc;
    pyopencv_SimpleBlobDetector_Type.tp_repr = pyopencv_SimpleBlobDetector_repr;
    pyopencv_SimpleBlobDetector_Type.tp_getset = pyopencv_SimpleBlobDetector_getseters;
    pyopencv_SimpleBlobDetector_Type.tp_methods = pyopencv_SimpleBlobDetector_methods;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SimpleBlobDetector_Params %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_SimpleBlobDetector_Params_get_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.blobColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the blobColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.blobColor) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByColor) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByInertia);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByInertia attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByInertia) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxInertiaRatio) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxThreshold) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_minArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistBetweenBlobs);
}

static int pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistBetweenBlobs attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDistBetweenBlobs) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minInertiaRatio) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minRepeatability);
}

static int pyopencv_SimpleBlobDetector_Params_set_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRepeatability attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minRepeatability) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minThreshold) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.thresholdStep);
}

static int pyopencv_SimpleBlobDetector_Params_set_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the thresholdStep attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.thresholdStep) ? 0 : -1;
}


static PyGetSetDef pyopencv_SimpleBlobDetector_Params_getseters[] =
{
    {(char*)"blobColor", (getter)pyopencv_SimpleBlobDetector_Params_get_blobColor, (setter)pyopencv_SimpleBlobDetector_Params_set_blobColor, (char*)"blobColor", NULL},
    {(char*)"filterByArea", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByArea, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByArea, (char*)"filterByArea", NULL},
    {(char*)"filterByCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByCircularity, (char*)"filterByCircularity", NULL},
    {(char*)"filterByColor", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByColor, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByColor, (char*)"filterByColor", NULL},
    {(char*)"filterByConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByConvexity, (char*)"filterByConvexity", NULL},
    {(char*)"filterByInertia", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByInertia, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByInertia, (char*)"filterByInertia", NULL},
    {(char*)"maxArea", (getter)pyopencv_SimpleBlobDetector_Params_get_maxArea, (setter)pyopencv_SimpleBlobDetector_Params_set_maxArea, (char*)"maxArea", NULL},
    {(char*)"maxCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxCircularity, (char*)"maxCircularity", NULL},
    {(char*)"maxConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxConvexity, (char*)"maxConvexity", NULL},
    {(char*)"maxInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio, (char*)"maxInertiaRatio", NULL},
    {(char*)"maxThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_maxThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_maxThreshold, (char*)"maxThreshold", NULL},
    {(char*)"minArea", (getter)pyopencv_SimpleBlobDetector_Params_get_minArea, (setter)pyopencv_SimpleBlobDetector_Params_set_minArea, (char*)"minArea", NULL},
    {(char*)"minCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_minCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_minCircularity, (char*)"minCircularity", NULL},
    {(char*)"minConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_minConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_minConvexity, (char*)"minConvexity", NULL},
    {(char*)"minDistBetweenBlobs", (getter)pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs, (setter)pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs, (char*)"minDistBetweenBlobs", NULL},
    {(char*)"minInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio, (char*)"minInertiaRatio", NULL},
    {(char*)"minRepeatability", (getter)pyopencv_SimpleBlobDetector_Params_get_minRepeatability, (setter)pyopencv_SimpleBlobDetector_Params_set_minRepeatability, (char*)"minRepeatability", NULL},
    {(char*)"minThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_minThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_minThreshold, (char*)"minThreshold", NULL},
    {(char*)"thresholdStep", (getter)pyopencv_SimpleBlobDetector_Params_get_thresholdStep, (setter)pyopencv_SimpleBlobDetector_Params_set_thresholdStep, (char*)"thresholdStep", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_SimpleBlobDetector_Params_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_SimpleBlobDetector_Params_specials(void)
{
    pyopencv_SimpleBlobDetector_Params_Type.tp_base = NULL;
    pyopencv_SimpleBlobDetector_Params_Type.tp_dealloc = pyopencv_SimpleBlobDetector_Params_dealloc;
    pyopencv_SimpleBlobDetector_Params_Type.tp_repr = pyopencv_SimpleBlobDetector_Params_repr;
    pyopencv_SimpleBlobDetector_Params_Type.tp_getset = pyopencv_SimpleBlobDetector_Params_getseters;
    pyopencv_SimpleBlobDetector_Params_Type.tp_methods = pyopencv_SimpleBlobDetector_Params_methods;
}

static PyObject* pyopencv_KAZE_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KAZE %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_KAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_KAZE_getDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getExtended(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExtended());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getUpright(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUpright());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int diff=0;

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setDiffusivity", (char**)keywords, &diff) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setExtended(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    bool extended=0;

    const char* keywords[] = { "extended", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:KAZE.setExtended", (char**)keywords, &extended) )
    {
        ERRWRAP2(_self_->setExtended(extended));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setNOctaveLayers", (char**)keywords, &octaveLayers) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setNOctaves", (char**)keywords, &octaves) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:KAZE.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setUpright(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::KAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_KAZE_Type))
        _self_ = dynamic_cast<cv::KAZE*>(((pyopencv_KAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    bool upright=0;

    const char* keywords[] = { "upright", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:KAZE.setUpright", (char**)keywords, &upright) )
    {
        ERRWRAP2(_self_->setUpright(upright));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_KAZE_methods[] =
{
    {"getDiffusivity", (PyCFunction)pyopencv_cv_KAZE_getDiffusivity, METH_VARARGS | METH_KEYWORDS, "getDiffusivity() -> retval\n."},
    {"getExtended", (PyCFunction)pyopencv_cv_KAZE_getExtended, METH_VARARGS | METH_KEYWORDS, "getExtended() -> retval\n."},
    {"getNOctaveLayers", (PyCFunction)pyopencv_cv_KAZE_getNOctaveLayers, METH_VARARGS | METH_KEYWORDS, "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", (PyCFunction)pyopencv_cv_KAZE_getNOctaves, METH_VARARGS | METH_KEYWORDS, "getNOctaves() -> retval\n."},
    {"getThreshold", (PyCFunction)pyopencv_cv_KAZE_getThreshold, METH_VARARGS | METH_KEYWORDS, "getThreshold() -> retval\n."},
    {"getUpright", (PyCFunction)pyopencv_cv_KAZE_getUpright, METH_VARARGS | METH_KEYWORDS, "getUpright() -> retval\n."},
    {"setDiffusivity", (PyCFunction)pyopencv_cv_KAZE_setDiffusivity, METH_VARARGS | METH_KEYWORDS, "setDiffusivity(diff) -> None\n."},
    {"setExtended", (PyCFunction)pyopencv_cv_KAZE_setExtended, METH_VARARGS | METH_KEYWORDS, "setExtended(extended) -> None\n."},
    {"setNOctaveLayers", (PyCFunction)pyopencv_cv_KAZE_setNOctaveLayers, METH_VARARGS | METH_KEYWORDS, "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", (PyCFunction)pyopencv_cv_KAZE_setNOctaves, METH_VARARGS | METH_KEYWORDS, "setNOctaves(octaves) -> None\n."},
    {"setThreshold", (PyCFunction)pyopencv_cv_KAZE_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None\n."},
    {"setUpright", (PyCFunction)pyopencv_cv_KAZE_setUpright, METH_VARARGS | METH_KEYWORDS, "setUpright(upright) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_KAZE_specials(void)
{
    pyopencv_KAZE_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_KAZE_Type.tp_dealloc = pyopencv_KAZE_dealloc;
    pyopencv_KAZE_Type.tp_repr = pyopencv_KAZE_repr;
    pyopencv_KAZE_Type.tp_getset = pyopencv_KAZE_getseters;
    pyopencv_KAZE_Type.tp_methods = pyopencv_KAZE_methods;
}

static PyObject* pyopencv_AKAZE_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AKAZE %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AKAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_AKAZE_getDescriptorChannels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorChannels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorChannels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int dch=0;

    const char* keywords[] = { "dch", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorChannels", (char**)keywords, &dch) )
    {
        ERRWRAP2(_self_->setDescriptorChannels(dch));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int dsize=0;

    const char* keywords[] = { "dsize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorSize", (char**)keywords, &dsize) )
    {
        ERRWRAP2(_self_->setDescriptorSize(dsize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int dtype=0;

    const char* keywords[] = { "dtype", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorType", (char**)keywords, &dtype) )
    {
        ERRWRAP2(_self_->setDescriptorType(dtype));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int diff=0;

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDiffusivity", (char**)keywords, &diff) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setNOctaveLayers", (char**)keywords, &octaveLayers) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setNOctaves", (char**)keywords, &octaves) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::AKAZE* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_AKAZE_Type))
        _self_ = dynamic_cast<cv::AKAZE*>(((pyopencv_AKAZE_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:AKAZE.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_AKAZE_methods[] =
{
    {"getDescriptorChannels", (PyCFunction)pyopencv_cv_AKAZE_getDescriptorChannels, METH_VARARGS | METH_KEYWORDS, "getDescriptorChannels() -> retval\n."},
    {"getDescriptorSize", (PyCFunction)pyopencv_cv_AKAZE_getDescriptorSize, METH_VARARGS | METH_KEYWORDS, "getDescriptorSize() -> retval\n."},
    {"getDescriptorType", (PyCFunction)pyopencv_cv_AKAZE_getDescriptorType, METH_VARARGS | METH_KEYWORDS, "getDescriptorType() -> retval\n."},
    {"getDiffusivity", (PyCFunction)pyopencv_cv_AKAZE_getDiffusivity, METH_VARARGS | METH_KEYWORDS, "getDiffusivity() -> retval\n."},
    {"getNOctaveLayers", (PyCFunction)pyopencv_cv_AKAZE_getNOctaveLayers, METH_VARARGS | METH_KEYWORDS, "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", (PyCFunction)pyopencv_cv_AKAZE_getNOctaves, METH_VARARGS | METH_KEYWORDS, "getNOctaves() -> retval\n."},
    {"getThreshold", (PyCFunction)pyopencv_cv_AKAZE_getThreshold, METH_VARARGS | METH_KEYWORDS, "getThreshold() -> retval\n."},
    {"setDescriptorChannels", (PyCFunction)pyopencv_cv_AKAZE_setDescriptorChannels, METH_VARARGS | METH_KEYWORDS, "setDescriptorChannels(dch) -> None\n."},
    {"setDescriptorSize", (PyCFunction)pyopencv_cv_AKAZE_setDescriptorSize, METH_VARARGS | METH_KEYWORDS, "setDescriptorSize(dsize) -> None\n."},
    {"setDescriptorType", (PyCFunction)pyopencv_cv_AKAZE_setDescriptorType, METH_VARARGS | METH_KEYWORDS, "setDescriptorType(dtype) -> None\n."},
    {"setDiffusivity", (PyCFunction)pyopencv_cv_AKAZE_setDiffusivity, METH_VARARGS | METH_KEYWORDS, "setDiffusivity(diff) -> None\n."},
    {"setNOctaveLayers", (PyCFunction)pyopencv_cv_AKAZE_setNOctaveLayers, METH_VARARGS | METH_KEYWORDS, "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", (PyCFunction)pyopencv_cv_AKAZE_setNOctaves, METH_VARARGS | METH_KEYWORDS, "setNOctaves(octaves) -> None\n."},
    {"setThreshold", (PyCFunction)pyopencv_cv_AKAZE_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_AKAZE_specials(void)
{
    pyopencv_AKAZE_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_AKAZE_Type.tp_dealloc = pyopencv_AKAZE_dealloc;
    pyopencv_AKAZE_Type.tp_repr = pyopencv_AKAZE_repr;
    pyopencv_AKAZE_Type.tp_getset = pyopencv_AKAZE_getseters;
    pyopencv_AKAZE_Type.tp_methods = pyopencv_AKAZE_methods;
}

static PyObject* pyopencv_DescriptorMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DescriptorMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DescriptorMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_DescriptorMatcher_add(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    {
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clone(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    bool emptyTrainData=false;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "emptyTrainData", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|b:DescriptorMatcher.clone", (char**)keywords, &emptyTrainData) )
    {
        ERRWRAP2(retval = _self_->clone(emptyTrainData));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_getTrainDescriptors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    std::vector<Mat> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_isMaskSupported(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMaskSupported());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_knnMatch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &k, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &k, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &k, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &k, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_match(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_radiusMatch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOf|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &maxDistance, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOf|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &maxDistance, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Of|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &maxDistance, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Of|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &maxDistance, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_train(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->train());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::DescriptorMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_DescriptorMatcher_methods[] =
{
    {"add", (PyCFunction)pyopencv_cv_DescriptorMatcher_add, METH_VARARGS | METH_KEYWORDS, "add(descriptors) -> None\n.   @brief Adds descriptors to train a CPU(trainDescCollectionis) or GPU(utrainDescCollectionis) descriptor\n.   collection.\n.   \n.   If the collection is not empty, the new descriptors are added to existing train descriptors.\n.   \n.   @param descriptors Descriptors to add. Each descriptors[i] is a set of descriptors from the same\n.   train image."},
    {"clear", (PyCFunction)pyopencv_cv_DescriptorMatcher_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None\n.   @brief Clears the train descriptor collections."},
    {"clone", (PyCFunction)pyopencv_cv_DescriptorMatcher_clone, METH_VARARGS | METH_KEYWORDS, "clone([, emptyTrainData]) -> retval\n.   @brief Clones the matcher.\n.   \n.   @param emptyTrainData If emptyTrainData is false, the method creates a deep copy of the object,\n.   that is, copies both parameters and train data. If emptyTrainData is true, the method creates an\n.   object copy with the current parameters but with empty train data."},
    {"empty", (PyCFunction)pyopencv_cv_DescriptorMatcher_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval\n.   @brief Returns true if there are no train descriptors in the both collections."},
    {"getTrainDescriptors", (PyCFunction)pyopencv_cv_DescriptorMatcher_getTrainDescriptors, METH_VARARGS | METH_KEYWORDS, "getTrainDescriptors() -> retval\n.   @brief Returns a constant link to the train descriptor collection trainDescCollection ."},
    {"isMaskSupported", (PyCFunction)pyopencv_cv_DescriptorMatcher_isMaskSupported, METH_VARARGS | METH_KEYWORDS, "isMaskSupported() -> retval\n.   @brief Returns true if the descriptor matcher supports masking permissible matches."},
    {"knnMatch", (PyCFunction)pyopencv_cv_DescriptorMatcher_knnMatch, METH_VARARGS | METH_KEYWORDS, "knnMatch(queryDescriptors, trainDescriptors, k[, mask[, compactResult]]) -> matches\n.   @brief Finds the k best matches for each descriptor from a query set.\n.   \n.   @param queryDescriptors Query set of descriptors.\n.   @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.   collection stored in the class object.\n.   @param mask Mask specifying permissible matches between an input query and train matrices of\n.   descriptors.\n.   @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.   @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.   less than k possible matches in total.\n.   @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.   false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.   the matches vector does not contain matches for fully masked-out query descriptors.\n.   \n.   These extended variants of DescriptorMatcher::match methods find several best matches for each query\n.   descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match\n.   for the details about query and train descriptors.\n\n\n\nknnMatch(queryDescriptors, k[, masks[, compactResult]]) -> matches\n.   @overload\n.   @param queryDescriptors Query set of descriptors.\n.   @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.   @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.   less than k possible matches in total.\n.   @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.   descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.   @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.   false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.   the matches vector does not contain matches for fully masked-out query descriptors."},
    {"match", (PyCFunction)pyopencv_cv_DescriptorMatcher_match, METH_VARARGS | METH_KEYWORDS, "match(queryDescriptors, trainDescriptors[, mask]) -> matches\n.   @brief Finds the best match for each descriptor from a query set.\n.   \n.   @param queryDescriptors Query set of descriptors.\n.   @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.   collection stored in the class object.\n.   @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.   descriptor. So, matches size may be smaller than the query descriptors count.\n.   @param mask Mask specifying permissible matches between an input query and train matrices of\n.   descriptors.\n.   \n.   In the first variant of this method, the train descriptors are passed as an input argument. In the\n.   second variant of the method, train descriptors collection that was set by DescriptorMatcher::add is\n.   used. Optional mask (or masks) can be passed to specify which query and training descriptors can be\n.   matched. Namely, queryDescriptors[i] can be matched with trainDescriptors[j] only if\n.   mask.at\\<uchar\\>(i,j) is non-zero.\n\n\n\nmatch(queryDescriptors[, masks]) -> matches\n.   @overload\n.   @param queryDescriptors Query set of descriptors.\n.   @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.   descriptor. So, matches size may be smaller than the query descriptors count.\n.   @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.   descriptors and stored train descriptors from the i-th image trainDescCollection[i]."},
    {"radiusMatch", (PyCFunction)pyopencv_cv_DescriptorMatcher_radiusMatch, METH_VARARGS | METH_KEYWORDS, "radiusMatch(queryDescriptors, trainDescriptors, maxDistance[, mask[, compactResult]]) -> matches\n.   @brief For each query descriptor, finds the training descriptors not farther than the specified distance.\n.   \n.   @param queryDescriptors Query set of descriptors.\n.   @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.   collection stored in the class object.\n.   @param matches Found matches.\n.   @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.   false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.   the matches vector does not contain matches for fully masked-out query descriptors.\n.   @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.   metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.   in Pixels)!\n.   @param mask Mask specifying permissible matches between an input query and train matrices of\n.   descriptors.\n.   \n.   For each query descriptor, the methods find such training descriptors that the distance between the\n.   query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are\n.   returned in the distance increasing order.\n\n\n\nradiusMatch(queryDescriptors, maxDistance[, masks[, compactResult]]) -> matches\n.   @overload\n.   @param queryDescriptors Query set of descriptors.\n.   @param matches Found matches.\n.   @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.   metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.   in Pixels)!\n.   @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.   descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.   @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.   false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.   the matches vector does not contain matches for fully masked-out query descriptors."},
    {"read", (PyCFunction)pyopencv_cv_DescriptorMatcher_read, METH_VARARGS | METH_KEYWORDS, "read(fileName) -> None\n."},
    {"train", (PyCFunction)pyopencv_cv_DescriptorMatcher_train, METH_VARARGS | METH_KEYWORDS, "train() -> None\n.   @brief Trains a descriptor matcher\n.   \n.   Trains a descriptor matcher (for example, the flann index). In all methods to match, the method\n.   train() is run every time before matching. Some descriptor matchers (for example, BruteForceMatcher)\n.   have an empty implementation of this method. Other matchers really train their inner structures (for\n.   example, FlannBasedMatcher trains flann::Index )."},
    {"write", (PyCFunction)pyopencv_cv_DescriptorMatcher_write, METH_VARARGS | METH_KEYWORDS, "write(fileName) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_DescriptorMatcher_specials(void)
{
    pyopencv_DescriptorMatcher_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_DescriptorMatcher_Type.tp_dealloc = pyopencv_DescriptorMatcher_dealloc;
    pyopencv_DescriptorMatcher_Type.tp_repr = pyopencv_DescriptorMatcher_repr;
    pyopencv_DescriptorMatcher_Type.tp_getset = pyopencv_DescriptorMatcher_getseters;
    pyopencv_DescriptorMatcher_Type.tp_methods = pyopencv_DescriptorMatcher_methods;
}

static PyObject* pyopencv_BFMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BFMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BFMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BFMatcher_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BFMatcher_specials(void)
{
    pyopencv_BFMatcher_Type.tp_base = &pyopencv_DescriptorMatcher_Type;
    pyopencv_BFMatcher_Type.tp_dealloc = pyopencv_BFMatcher_dealloc;
    pyopencv_BFMatcher_Type.tp_repr = pyopencv_BFMatcher_repr;
    pyopencv_BFMatcher_Type.tp_getset = pyopencv_BFMatcher_getseters;
    pyopencv_BFMatcher_Type.tp_methods = pyopencv_BFMatcher_methods;
}

static PyObject* pyopencv_FlannBasedMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FlannBasedMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FlannBasedMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_FlannBasedMatcher_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_FlannBasedMatcher_specials(void)
{
    pyopencv_FlannBasedMatcher_Type.tp_base = &pyopencv_DescriptorMatcher_Type;
    pyopencv_FlannBasedMatcher_Type.tp_dealloc = pyopencv_FlannBasedMatcher_dealloc;
    pyopencv_FlannBasedMatcher_Type.tp_repr = pyopencv_FlannBasedMatcher_repr;
    pyopencv_FlannBasedMatcher_Type.tp_getset = pyopencv_FlannBasedMatcher_getseters;
    pyopencv_FlannBasedMatcher_Type.tp_methods = pyopencv_FlannBasedMatcher_methods;
}

static PyObject* pyopencv_BOWTrainer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BOWTrainer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BOWTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BOWTrainer_add(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWTrainer_Type))
        _self_ = ((pyopencv_BOWTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWTrainer_Type))
        _self_ = ((pyopencv_BOWTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_cluster(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWTrainer_Type))
        _self_ = ((pyopencv_BOWTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    {
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_descriptorsCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWTrainer_Type))
        _self_ = ((pyopencv_BOWTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorsCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_getDescriptors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWTrainer_Type))
        _self_ = ((pyopencv_BOWTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    std::vector<Mat> retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_BOWTrainer_methods[] =
{
    {"add", (PyCFunction)pyopencv_cv_BOWTrainer_add, METH_VARARGS | METH_KEYWORDS, "add(descriptors) -> None\n.   @brief Adds descriptors to a training set.\n.   \n.   @param descriptors Descriptors to add to a training set. Each row of the descriptors matrix is a\n.   descriptor.\n.   \n.   The training set is clustered using clustermethod to construct the vocabulary."},
    {"clear", (PyCFunction)pyopencv_cv_BOWTrainer_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None\n."},
    {"cluster", (PyCFunction)pyopencv_cv_BOWTrainer_cluster, METH_VARARGS | METH_KEYWORDS, "cluster() -> retval\n.   @overload\n\n\n\ncluster(descriptors) -> retval\n.   @brief Clusters train descriptors.\n.   \n.   @param descriptors Descriptors to cluster. Each row of the descriptors matrix is a descriptor.\n.   Descriptors are not added to the inner train descriptor set.\n.   \n.   The vocabulary consists of cluster centers. So, this method returns the vocabulary. In the first\n.   variant of the method, train descriptors stored in the object are clustered. In the second variant,\n.   input descriptors are clustered."},
    {"descriptorsCount", (PyCFunction)pyopencv_cv_BOWTrainer_descriptorsCount, METH_VARARGS | METH_KEYWORDS, "descriptorsCount() -> retval\n.   @brief Returns the count of all descriptors stored in the training set."},
    {"getDescriptors", (PyCFunction)pyopencv_cv_BOWTrainer_getDescriptors, METH_VARARGS | METH_KEYWORDS, "getDescriptors() -> retval\n.   @brief Returns a training set of descriptors."},

    {NULL,          NULL}
};

static void pyopencv_BOWTrainer_specials(void)
{
    pyopencv_BOWTrainer_Type.tp_base = NULL;
    pyopencv_BOWTrainer_Type.tp_dealloc = pyopencv_BOWTrainer_dealloc;
    pyopencv_BOWTrainer_Type.tp_repr = pyopencv_BOWTrainer_repr;
    pyopencv_BOWTrainer_Type.tp_getset = pyopencv_BOWTrainer_getseters;
    pyopencv_BOWTrainer_Type.tp_methods = pyopencv_BOWTrainer_methods;
}

static PyObject* pyopencv_BOWKMeansTrainer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BOWKMeansTrainer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BOWKMeansTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BOWKMeansTrainer_cluster(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWKMeansTrainer* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWKMeansTrainer_Type))
        _self_ = ((pyopencv_BOWKMeansTrainer_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWKMeansTrainer' or its derivative)");
    {
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWKMeansTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWKMeansTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_BOWKMeansTrainer_methods[] =
{
    {"cluster", (PyCFunction)pyopencv_cv_BOWKMeansTrainer_cluster, METH_VARARGS | METH_KEYWORDS, "cluster() -> retval\n.   \n\n\n\ncluster(descriptors) -> retval\n."},

    {NULL,          NULL}
};

static void pyopencv_BOWKMeansTrainer_specials(void)
{
    pyopencv_BOWKMeansTrainer_Type.tp_base = &pyopencv_BOWTrainer_Type;
    pyopencv_BOWKMeansTrainer_Type.tp_dealloc = pyopencv_BOWKMeansTrainer_dealloc;
    pyopencv_BOWKMeansTrainer_Type.tp_repr = pyopencv_BOWKMeansTrainer_repr;
    pyopencv_BOWKMeansTrainer_Type.tp_getset = pyopencv_BOWKMeansTrainer_getseters;
    pyopencv_BOWKMeansTrainer_Type.tp_methods = pyopencv_BOWKMeansTrainer_methods;
}

static PyObject* pyopencv_BOWImgDescriptorExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BOWImgDescriptorExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BOWImgDescriptorExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWImgDescriptorExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWImgDescriptorExtractor_Type))
        _self_ = ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_imgDescriptor = NULL;
    Mat imgDescriptor;

    const char* keywords[] = { "image", "keypoints", "imgDescriptor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:BOWImgDescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_imgDescriptor) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to(pyobj_imgDescriptor, imgDescriptor, ArgInfo("imgDescriptor", 1)) )
    {
        ERRWRAP2(_self_->compute2(image, keypoints, imgDescriptor));
        return pyopencv_from(imgDescriptor);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_imgDescriptor = NULL;
    Mat imgDescriptor;

    const char* keywords[] = { "image", "keypoints", "imgDescriptor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:BOWImgDescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_imgDescriptor) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to(pyobj_imgDescriptor, imgDescriptor, ArgInfo("imgDescriptor", 1)) )
    {
        ERRWRAP2(_self_->compute2(image, keypoints, imgDescriptor));
        return pyopencv_from(imgDescriptor);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWImgDescriptorExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWImgDescriptorExtractor_Type))
        _self_ = ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWImgDescriptorExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWImgDescriptorExtractor_Type))
        _self_ = ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWImgDescriptorExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWImgDescriptorExtractor_Type))
        _self_ = ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVocabulary());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::BOWImgDescriptorExtractor* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_BOWImgDescriptorExtractor_Type))
        _self_ = ((pyopencv_BOWImgDescriptorExtractor_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    {
    PyObject* pyobj_vocabulary = NULL;
    Mat vocabulary;

    const char* keywords[] = { "vocabulary", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWImgDescriptorExtractor.setVocabulary", (char**)keywords, &pyobj_vocabulary) &&
        pyopencv_to(pyobj_vocabulary, vocabulary, ArgInfo("vocabulary", 0)) )
    {
        ERRWRAP2(_self_->setVocabulary(vocabulary));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_vocabulary = NULL;
    Mat vocabulary;

    const char* keywords[] = { "vocabulary", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWImgDescriptorExtractor.setVocabulary", (char**)keywords, &pyobj_vocabulary) &&
        pyopencv_to(pyobj_vocabulary, vocabulary, ArgInfo("vocabulary", 0)) )
    {
        ERRWRAP2(_self_->setVocabulary(vocabulary));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_BOWImgDescriptorExtractor_methods[] =
{
    {"compute", (PyCFunction)pyopencv_cv_BOWImgDescriptorExtractor_compute, METH_VARARGS | METH_KEYWORDS, "compute(image, keypoints[, imgDescriptor]) -> imgDescriptor\n.   @overload\n.   @param keypointDescriptors Computed descriptors to match with vocabulary.\n.   @param imgDescriptor Computed output image descriptor.\n.   @param pointIdxsOfClusters Indices of keypoints that belong to the cluster. This means that\n.   pointIdxsOfClusters[i] are keypoint indices that belong to the i -th cluster (word of vocabulary)\n.   returned if it is non-zero."},
    {"descriptorSize", (PyCFunction)pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize, METH_VARARGS | METH_KEYWORDS, "descriptorSize() -> retval\n.   @brief Returns an image descriptor size if the vocabulary is set. Otherwise, it returns 0."},
    {"descriptorType", (PyCFunction)pyopencv_cv_BOWImgDescriptorExtractor_descriptorType, METH_VARARGS | METH_KEYWORDS, "descriptorType() -> retval\n.   @brief Returns an image descriptor type."},
    {"getVocabulary", (PyCFunction)pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary, METH_VARARGS | METH_KEYWORDS, "getVocabulary() -> retval\n.   @brief Returns the set vocabulary."},
    {"setVocabulary", (PyCFunction)pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary, METH_VARARGS | METH_KEYWORDS, "setVocabulary(vocabulary) -> None\n.   @brief Sets a visual vocabulary.\n.   \n.   @param vocabulary Vocabulary (can be trained using the inheritor of BOWTrainer ). Each row of the\n.   vocabulary is a visual word (cluster center)."},

    {NULL,          NULL}
};

static void pyopencv_BOWImgDescriptorExtractor_specials(void)
{
    pyopencv_BOWImgDescriptorExtractor_Type.tp_base = NULL;
    pyopencv_BOWImgDescriptorExtractor_Type.tp_dealloc = pyopencv_BOWImgDescriptorExtractor_dealloc;
    pyopencv_BOWImgDescriptorExtractor_Type.tp_repr = pyopencv_BOWImgDescriptorExtractor_repr;
    pyopencv_BOWImgDescriptorExtractor_Type.tp_getset = pyopencv_BOWImgDescriptorExtractor_getseters;
    pyopencv_BOWImgDescriptorExtractor_Type.tp_methods = pyopencv_BOWImgDescriptorExtractor_methods;
}

static PyObject* pyopencv_CirclesGridFinderParameters_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CirclesGridFinderParameters %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_CirclesGridFinderParameters_get_convexHullFactor(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.convexHullFactor);
}

static int pyopencv_CirclesGridFinderParameters_set_convexHullFactor(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the convexHullFactor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.convexHullFactor) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_densityNeighborhoodSize(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.densityNeighborhoodSize);
}

static int pyopencv_CirclesGridFinderParameters_set_densityNeighborhoodSize(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the densityNeighborhoodSize attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.densityNeighborhoodSize) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_edgeGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.edgeGain);
}

static int pyopencv_CirclesGridFinderParameters_set_edgeGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the edgeGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.edgeGain) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_edgePenalty(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.edgePenalty);
}

static int pyopencv_CirclesGridFinderParameters_set_edgePenalty(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the edgePenalty attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.edgePenalty) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_existingVertexGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.existingVertexGain);
}

static int pyopencv_CirclesGridFinderParameters_set_existingVertexGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the existingVertexGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.existingVertexGain) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_keypointScale(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.keypointScale);
}

static int pyopencv_CirclesGridFinderParameters_set_keypointScale(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the keypointScale attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.keypointScale) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_kmeansAttempts(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.kmeansAttempts);
}

static int pyopencv_CirclesGridFinderParameters_set_kmeansAttempts(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the kmeansAttempts attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.kmeansAttempts) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minDensity(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minDensity);
}

static int pyopencv_CirclesGridFinderParameters_set_minDensity(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDensity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDensity) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minDistanceToAddKeypoint(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistanceToAddKeypoint);
}

static int pyopencv_CirclesGridFinderParameters_set_minDistanceToAddKeypoint(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistanceToAddKeypoint attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDistanceToAddKeypoint) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minGraphConfidence(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minGraphConfidence);
}

static int pyopencv_CirclesGridFinderParameters_set_minGraphConfidence(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minGraphConfidence attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minGraphConfidence) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minRNGEdgeSwitchDist(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minRNGEdgeSwitchDist);
}

static int pyopencv_CirclesGridFinderParameters_set_minRNGEdgeSwitchDist(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRNGEdgeSwitchDist attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minRNGEdgeSwitchDist) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_vertexGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.vertexGain);
}

static int pyopencv_CirclesGridFinderParameters_set_vertexGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the vertexGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.vertexGain) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_vertexPenalty(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.vertexPenalty);
}

static int pyopencv_CirclesGridFinderParameters_set_vertexPenalty(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the vertexPenalty attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.vertexPenalty) ? 0 : -1;
}


static PyGetSetDef pyopencv_CirclesGridFinderParameters_getseters[] =
{
    {(char*)"convexHullFactor", (getter)pyopencv_CirclesGridFinderParameters_get_convexHullFactor, (setter)pyopencv_CirclesGridFinderParameters_set_convexHullFactor, (char*)"convexHullFactor", NULL},
    {(char*)"densityNeighborhoodSize", (getter)pyopencv_CirclesGridFinderParameters_get_densityNeighborhoodSize, (setter)pyopencv_CirclesGridFinderParameters_set_densityNeighborhoodSize, (char*)"densityNeighborhoodSize", NULL},
    {(char*)"edgeGain", (getter)pyopencv_CirclesGridFinderParameters_get_edgeGain, (setter)pyopencv_CirclesGridFinderParameters_set_edgeGain, (char*)"edgeGain", NULL},
    {(char*)"edgePenalty", (getter)pyopencv_CirclesGridFinderParameters_get_edgePenalty, (setter)pyopencv_CirclesGridFinderParameters_set_edgePenalty, (char*)"edgePenalty", NULL},
    {(char*)"existingVertexGain", (getter)pyopencv_CirclesGridFinderParameters_get_existingVertexGain, (setter)pyopencv_CirclesGridFinderParameters_set_existingVertexGain, (char*)"existingVertexGain", NULL},
    {(char*)"keypointScale", (getter)pyopencv_CirclesGridFinderParameters_get_keypointScale, (setter)pyopencv_CirclesGridFinderParameters_set_keypointScale, (char*)"keypointScale", NULL},
    {(char*)"kmeansAttempts", (getter)pyopencv_CirclesGridFinderParameters_get_kmeansAttempts, (setter)pyopencv_CirclesGridFinderParameters_set_kmeansAttempts, (char*)"kmeansAttempts", NULL},
    {(char*)"minDensity", (getter)pyopencv_CirclesGridFinderParameters_get_minDensity, (setter)pyopencv_CirclesGridFinderParameters_set_minDensity, (char*)"minDensity", NULL},
    {(char*)"minDistanceToAddKeypoint", (getter)pyopencv_CirclesGridFinderParameters_get_minDistanceToAddKeypoint, (setter)pyopencv_CirclesGridFinderParameters_set_minDistanceToAddKeypoint, (char*)"minDistanceToAddKeypoint", NULL},
    {(char*)"minGraphConfidence", (getter)pyopencv_CirclesGridFinderParameters_get_minGraphConfidence, (setter)pyopencv_CirclesGridFinderParameters_set_minGraphConfidence, (char*)"minGraphConfidence", NULL},
    {(char*)"minRNGEdgeSwitchDist", (getter)pyopencv_CirclesGridFinderParameters_get_minRNGEdgeSwitchDist, (setter)pyopencv_CirclesGridFinderParameters_set_minRNGEdgeSwitchDist, (char*)"minRNGEdgeSwitchDist", NULL},
    {(char*)"vertexGain", (getter)pyopencv_CirclesGridFinderParameters_get_vertexGain, (setter)pyopencv_CirclesGridFinderParameters_set_vertexGain, (char*)"vertexGain", NULL},
    {(char*)"vertexPenalty", (getter)pyopencv_CirclesGridFinderParameters_get_vertexPenalty, (setter)pyopencv_CirclesGridFinderParameters_set_vertexPenalty, (char*)"vertexPenalty", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_CirclesGridFinderParameters_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_CirclesGridFinderParameters_specials(void)
{
    pyopencv_CirclesGridFinderParameters_Type.tp_base = NULL;
    pyopencv_CirclesGridFinderParameters_Type.tp_dealloc = pyopencv_CirclesGridFinderParameters_dealloc;
    pyopencv_CirclesGridFinderParameters_Type.tp_repr = pyopencv_CirclesGridFinderParameters_repr;
    pyopencv_CirclesGridFinderParameters_Type.tp_getset = pyopencv_CirclesGridFinderParameters_getseters;
    pyopencv_CirclesGridFinderParameters_Type.tp_methods = pyopencv_CirclesGridFinderParameters_methods;
}

static PyObject* pyopencv_StereoMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_StereoMatcher_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    {
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disparity = NULL;
    Mat disparity;

    const char* keywords[] = { "left", "right", "disparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoMatcher.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disparity, disparity, ArgInfo("disparity", 1)) )
    {
        ERRWRAP2(_self_->compute(left, right, disparity));
        return pyopencv_from(disparity);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_left = NULL;
    UMat left;
    PyObject* pyobj_right = NULL;
    UMat right;
    PyObject* pyobj_disparity = NULL;
    UMat disparity;

    const char* keywords[] = { "left", "right", "disparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoMatcher.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disparity, disparity, ArgInfo("disparity", 1)) )
    {
        ERRWRAP2(_self_->compute(left, right, disparity));
        return pyopencv_from(disparity);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getDisp12MaxDiff(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDisp12MaxDiff());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getMinDisparity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDisparity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getNumDisparities(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumDisparities());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getSpeckleRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSpeckleRange());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getSpeckleWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSpeckleWindowSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setDisp12MaxDiff(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int disp12MaxDiff=0;

    const char* keywords[] = { "disp12MaxDiff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setDisp12MaxDiff", (char**)keywords, &disp12MaxDiff) )
    {
        ERRWRAP2(_self_->setDisp12MaxDiff(disp12MaxDiff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setMinDisparity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int minDisparity=0;

    const char* keywords[] = { "minDisparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setMinDisparity", (char**)keywords, &minDisparity) )
    {
        ERRWRAP2(_self_->setMinDisparity(minDisparity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setNumDisparities(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int numDisparities=0;

    const char* keywords[] = { "numDisparities", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setNumDisparities", (char**)keywords, &numDisparities) )
    {
        ERRWRAP2(_self_->setNumDisparities(numDisparities));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setSpeckleRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int speckleRange=0;

    const char* keywords[] = { "speckleRange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleRange", (char**)keywords, &speckleRange) )
    {
        ERRWRAP2(_self_->setSpeckleRange(speckleRange));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setSpeckleWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoMatcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    int speckleWindowSize=0;

    const char* keywords[] = { "speckleWindowSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleWindowSize", (char**)keywords, &speckleWindowSize) )
    {
        ERRWRAP2(_self_->setSpeckleWindowSize(speckleWindowSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoMatcher_methods[] =
{
    {"compute", (PyCFunction)pyopencv_cv_StereoMatcher_compute, METH_VARARGS | METH_KEYWORDS, "compute(left, right[, disparity]) -> disparity\n.   @brief Computes disparity map for the specified stereo pair\n.   \n.   @param left Left 8-bit single-channel image.\n.   @param right Right image of the same size and the same type as the left one.\n.   @param disparity Output disparity map. It has the same size as the input images. Some algorithms,\n.   like StereoBM or StereoSGBM compute 16-bit fixed-point disparity map (where each disparity value\n.   has 4 fractional bits), whereas other algorithms output 32-bit floating-point disparity map."},
    {"getBlockSize", (PyCFunction)pyopencv_cv_StereoMatcher_getBlockSize, METH_VARARGS | METH_KEYWORDS, "getBlockSize() -> retval\n."},
    {"getDisp12MaxDiff", (PyCFunction)pyopencv_cv_StereoMatcher_getDisp12MaxDiff, METH_VARARGS | METH_KEYWORDS, "getDisp12MaxDiff() -> retval\n."},
    {"getMinDisparity", (PyCFunction)pyopencv_cv_StereoMatcher_getMinDisparity, METH_VARARGS | METH_KEYWORDS, "getMinDisparity() -> retval\n."},
    {"getNumDisparities", (PyCFunction)pyopencv_cv_StereoMatcher_getNumDisparities, METH_VARARGS | METH_KEYWORDS, "getNumDisparities() -> retval\n."},
    {"getSpeckleRange", (PyCFunction)pyopencv_cv_StereoMatcher_getSpeckleRange, METH_VARARGS | METH_KEYWORDS, "getSpeckleRange() -> retval\n."},
    {"getSpeckleWindowSize", (PyCFunction)pyopencv_cv_StereoMatcher_getSpeckleWindowSize, METH_VARARGS | METH_KEYWORDS, "getSpeckleWindowSize() -> retval\n."},
    {"setBlockSize", (PyCFunction)pyopencv_cv_StereoMatcher_setBlockSize, METH_VARARGS | METH_KEYWORDS, "setBlockSize(blockSize) -> None\n."},
    {"setDisp12MaxDiff", (PyCFunction)pyopencv_cv_StereoMatcher_setDisp12MaxDiff, METH_VARARGS | METH_KEYWORDS, "setDisp12MaxDiff(disp12MaxDiff) -> None\n."},
    {"setMinDisparity", (PyCFunction)pyopencv_cv_StereoMatcher_setMinDisparity, METH_VARARGS | METH_KEYWORDS, "setMinDisparity(minDisparity) -> None\n."},
    {"setNumDisparities", (PyCFunction)pyopencv_cv_StereoMatcher_setNumDisparities, METH_VARARGS | METH_KEYWORDS, "setNumDisparities(numDisparities) -> None\n."},
    {"setSpeckleRange", (PyCFunction)pyopencv_cv_StereoMatcher_setSpeckleRange, METH_VARARGS | METH_KEYWORDS, "setSpeckleRange(speckleRange) -> None\n."},
    {"setSpeckleWindowSize", (PyCFunction)pyopencv_cv_StereoMatcher_setSpeckleWindowSize, METH_VARARGS | METH_KEYWORDS, "setSpeckleWindowSize(speckleWindowSize) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_StereoMatcher_specials(void)
{
    pyopencv_StereoMatcher_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_StereoMatcher_Type.tp_dealloc = pyopencv_StereoMatcher_dealloc;
    pyopencv_StereoMatcher_Type.tp_repr = pyopencv_StereoMatcher_repr;
    pyopencv_StereoMatcher_Type.tp_getset = pyopencv_StereoMatcher_getseters;
    pyopencv_StereoMatcher_Type.tp_methods = pyopencv_StereoMatcher_methods;
}

static PyObject* pyopencv_StereoBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoBM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_StereoBM_getPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterCap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getPreFilterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getPreFilterType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getROI1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Rect retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getROI1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getROI2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Rect retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getROI2());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getSmallerBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSmallerBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getTextureThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTextureThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUniquenessRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int preFilterSize=0;

    const char* keywords[] = { "preFilterSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterSize", (char**)keywords, &preFilterSize) )
    {
        ERRWRAP2(_self_->setPreFilterSize(preFilterSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int preFilterType=0;

    const char* keywords[] = { "preFilterType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterType", (char**)keywords, &preFilterType) )
    {
        ERRWRAP2(_self_->setPreFilterType(preFilterType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setROI1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    PyObject* pyobj_roi1 = NULL;
    Rect roi1;

    const char* keywords[] = { "roi1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI1", (char**)keywords, &pyobj_roi1) &&
        pyopencv_to(pyobj_roi1, roi1, ArgInfo("roi1", 0)) )
    {
        ERRWRAP2(_self_->setROI1(roi1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setROI2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    PyObject* pyobj_roi2 = NULL;
    Rect roi2;

    const char* keywords[] = { "roi2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI2", (char**)keywords, &pyobj_roi2) &&
        pyopencv_to(pyobj_roi2, roi2, ArgInfo("roi2", 0)) )
    {
        ERRWRAP2(_self_->setROI2(roi2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setSmallerBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setSmallerBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setSmallerBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setTextureThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int textureThreshold=0;

    const char* keywords[] = { "textureThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setTextureThreshold", (char**)keywords, &textureThreshold) )
    {
        ERRWRAP2(_self_->setTextureThreshold(textureThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoBM_methods[] =
{
    {"getPreFilterCap", (PyCFunction)pyopencv_cv_StereoBM_getPreFilterCap, METH_VARARGS | METH_KEYWORDS, "getPreFilterCap() -> retval\n."},
    {"getPreFilterSize", (PyCFunction)pyopencv_cv_StereoBM_getPreFilterSize, METH_VARARGS | METH_KEYWORDS, "getPreFilterSize() -> retval\n."},
    {"getPreFilterType", (PyCFunction)pyopencv_cv_StereoBM_getPreFilterType, METH_VARARGS | METH_KEYWORDS, "getPreFilterType() -> retval\n."},
    {"getROI1", (PyCFunction)pyopencv_cv_StereoBM_getROI1, METH_VARARGS | METH_KEYWORDS, "getROI1() -> retval\n."},
    {"getROI2", (PyCFunction)pyopencv_cv_StereoBM_getROI2, METH_VARARGS | METH_KEYWORDS, "getROI2() -> retval\n."},
    {"getSmallerBlockSize", (PyCFunction)pyopencv_cv_StereoBM_getSmallerBlockSize, METH_VARARGS | METH_KEYWORDS, "getSmallerBlockSize() -> retval\n."},
    {"getTextureThreshold", (PyCFunction)pyopencv_cv_StereoBM_getTextureThreshold, METH_VARARGS | METH_KEYWORDS, "getTextureThreshold() -> retval\n."},
    {"getUniquenessRatio", (PyCFunction)pyopencv_cv_StereoBM_getUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "getUniquenessRatio() -> retval\n."},
    {"setPreFilterCap", (PyCFunction)pyopencv_cv_StereoBM_setPreFilterCap, METH_VARARGS | METH_KEYWORDS, "setPreFilterCap(preFilterCap) -> None\n."},
    {"setPreFilterSize", (PyCFunction)pyopencv_cv_StereoBM_setPreFilterSize, METH_VARARGS | METH_KEYWORDS, "setPreFilterSize(preFilterSize) -> None\n."},
    {"setPreFilterType", (PyCFunction)pyopencv_cv_StereoBM_setPreFilterType, METH_VARARGS | METH_KEYWORDS, "setPreFilterType(preFilterType) -> None\n."},
    {"setROI1", (PyCFunction)pyopencv_cv_StereoBM_setROI1, METH_VARARGS | METH_KEYWORDS, "setROI1(roi1) -> None\n."},
    {"setROI2", (PyCFunction)pyopencv_cv_StereoBM_setROI2, METH_VARARGS | METH_KEYWORDS, "setROI2(roi2) -> None\n."},
    {"setSmallerBlockSize", (PyCFunction)pyopencv_cv_StereoBM_setSmallerBlockSize, METH_VARARGS | METH_KEYWORDS, "setSmallerBlockSize(blockSize) -> None\n."},
    {"setTextureThreshold", (PyCFunction)pyopencv_cv_StereoBM_setTextureThreshold, METH_VARARGS | METH_KEYWORDS, "setTextureThreshold(textureThreshold) -> None\n."},
    {"setUniquenessRatio", (PyCFunction)pyopencv_cv_StereoBM_setUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "setUniquenessRatio(uniquenessRatio) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_StereoBM_specials(void)
{
    pyopencv_StereoBM_Type.tp_base = &pyopencv_StereoMatcher_Type;
    pyopencv_StereoBM_Type.tp_dealloc = pyopencv_StereoBM_dealloc;
    pyopencv_StereoBM_Type.tp_repr = pyopencv_StereoBM_repr;
    pyopencv_StereoBM_Type.tp_getset = pyopencv_StereoBM_getseters;
    pyopencv_StereoBM_Type.tp_methods = pyopencv_StereoBM_methods;
}

static PyObject* pyopencv_StereoSGBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoSGBM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoSGBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_StereoSGBM_getMode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getP1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getP2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP2());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterCap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUniquenessRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setMode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int mode=0;

    const char* keywords[] = { "mode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setMode", (char**)keywords, &mode) )
    {
        ERRWRAP2(_self_->setMode(mode));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setP1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int P1=0;

    const char* keywords[] = { "P1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP1", (char**)keywords, &P1) )
    {
        ERRWRAP2(_self_->setP1(P1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setP2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int P2=0;

    const char* keywords[] = { "P2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP2", (char**)keywords, &P2) )
    {
        ERRWRAP2(_self_->setP2(P2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::StereoSGBM* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoSGBM_methods[] =
{
    {"getMode", (PyCFunction)pyopencv_cv_StereoSGBM_getMode, METH_VARARGS | METH_KEYWORDS, "getMode() -> retval\n."},
    {"getP1", (PyCFunction)pyopencv_cv_StereoSGBM_getP1, METH_VARARGS | METH_KEYWORDS, "getP1() -> retval\n."},
    {"getP2", (PyCFunction)pyopencv_cv_StereoSGBM_getP2, METH_VARARGS | METH_KEYWORDS, "getP2() -> retval\n."},
    {"getPreFilterCap", (PyCFunction)pyopencv_cv_StereoSGBM_getPreFilterCap, METH_VARARGS | METH_KEYWORDS, "getPreFilterCap() -> retval\n."},
    {"getUniquenessRatio", (PyCFunction)pyopencv_cv_StereoSGBM_getUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "getUniquenessRatio() -> retval\n."},
    {"setMode", (PyCFunction)pyopencv_cv_StereoSGBM_setMode, METH_VARARGS | METH_KEYWORDS, "setMode(mode) -> None\n."},
    {"setP1", (PyCFunction)pyopencv_cv_StereoSGBM_setP1, METH_VARARGS | METH_KEYWORDS, "setP1(P1) -> None\n."},
    {"setP2", (PyCFunction)pyopencv_cv_StereoSGBM_setP2, METH_VARARGS | METH_KEYWORDS, "setP2(P2) -> None\n."},
    {"setPreFilterCap", (PyCFunction)pyopencv_cv_StereoSGBM_setPreFilterCap, METH_VARARGS | METH_KEYWORDS, "setPreFilterCap(preFilterCap) -> None\n."},
    {"setUniquenessRatio", (PyCFunction)pyopencv_cv_StereoSGBM_setUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "setUniquenessRatio(uniquenessRatio) -> None\n."},

    {NULL,          NULL}
};

static void pyopencv_StereoSGBM_specials(void)
{
    pyopencv_StereoSGBM_Type.tp_base = &pyopencv_StereoMatcher_Type;
    pyopencv_StereoSGBM_Type.tp_dealloc = pyopencv_StereoSGBM_dealloc;
    pyopencv_StereoSGBM_Type.tp_repr = pyopencv_StereoSGBM_repr;
    pyopencv_StereoSGBM_Type.tp_getset = pyopencv_StereoSGBM_getseters;
    pyopencv_StereoSGBM_Type.tp_methods = pyopencv_StereoSGBM_methods;
}

static PyObject* pyopencv_Stitcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Stitcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Stitcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_cv_Stitcher_composePanorama(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    {
    PyObject* pyobj_pano = NULL;
    Mat pano;
    Status retval;

    const char* keywords[] = { "pano", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:Stitcher.composePanorama", (char**)keywords, &pyobj_pano) &&
        pyopencv_to(pyobj_pano, pano, ArgInfo("pano", 1)) )
    {
        ERRWRAP2(retval = _self_->composePanorama(pano));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(pano));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_pano = NULL;
    UMat pano;
    Status retval;

    const char* keywords[] = { "pano", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:Stitcher.composePanorama", (char**)keywords, &pyobj_pano) &&
        pyopencv_to(pyobj_pano, pano, ArgInfo("pano", 1)) )
    {
        ERRWRAP2(retval = _self_->composePanorama(pano));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(pano));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_compositingResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->compositingResol());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_estimateTransform(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    Status retval;

    const char* keywords[] = { "images", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Stitcher.estimateTransform", (char**)keywords, &pyobj_images) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) )
    {
        ERRWRAP2(retval = _self_->estimateTransform(images));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    Status retval;

    const char* keywords[] = { "images", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Stitcher.estimateTransform", (char**)keywords, &pyobj_images) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) )
    {
        ERRWRAP2(retval = _self_->estimateTransform(images));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_panoConfidenceThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->panoConfidenceThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_registrationResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->registrationResol());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_seamEstimationResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->seamEstimationResol());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_setCompositingResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double resol_mpx=0;

    const char* keywords[] = { "resol_mpx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:Stitcher.setCompositingResol", (char**)keywords, &resol_mpx) )
    {
        ERRWRAP2(_self_->setCompositingResol(resol_mpx));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_setPanoConfidenceThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double conf_thresh=0;

    const char* keywords[] = { "conf_thresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:Stitcher.setPanoConfidenceThresh", (char**)keywords, &conf_thresh) )
    {
        ERRWRAP2(_self_->setPanoConfidenceThresh(conf_thresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_setRegistrationResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double resol_mpx=0;

    const char* keywords[] = { "resol_mpx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:Stitcher.setRegistrationResol", (char**)keywords, &resol_mpx) )
    {
        ERRWRAP2(_self_->setRegistrationResol(resol_mpx));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_setSeamEstimationResol(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double resol_mpx=0;

    const char* keywords[] = { "resol_mpx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:Stitcher.setSeamEstimationResol", (char**)keywords, &resol_mpx) )
    {
        ERRWRAP2(_self_->setSeamEstimationResol(resol_mpx));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_setWaveCorrection(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    bool flag=0;

    const char* keywords[] = { "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:Stitcher.setWaveCorrection", (char**)keywords, &flag) )
    {
        ERRWRAP2(_self_->setWaveCorrection(flag));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_stitch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_pano = NULL;
    Mat pano;
    Status retval;

    const char* keywords[] = { "images", "pano", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Stitcher.stitch", (char**)keywords, &pyobj_images, &pyobj_pano) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_pano, pano, ArgInfo("pano", 1)) )
    {
        ERRWRAP2(retval = _self_->stitch(images, pano));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(pano));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_pano = NULL;
    UMat pano;
    Status retval;

    const char* keywords[] = { "images", "pano", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Stitcher.stitch", (char**)keywords, &pyobj_images, &pyobj_pano) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_pano, pano, ArgInfo("pano", 1)) )
    {
        ERRWRAP2(retval = _self_->stitch(images, pano));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(pano));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_waveCorrection(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->waveCorrection());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Stitcher_workScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    cv::Stitcher* _self_ = NULL;
    if(PyObject_TypeCheck(self, &pyopencv_Stitcher_Type))
        _self_ = ((pyopencv_Stitcher_t*)self)->v.get();
    if (_self_ == NULL)
        return failmsgp("Incorrect type of self (must be 'Stitcher' or its derivative)");
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->workScale());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_Stitcher_methods[] =
{
    {"composePanorama", (PyCFunction)pyopencv_cv_Stitcher_composePanorama, METH_VARARGS | METH_KEYWORDS, "composePanorama([, pano]) -> retval, pano\n.   @overload"},
    {"compositingResol", (PyCFunction)pyopencv_cv_Stitcher_compositingResol, METH_VARARGS | METH_KEYWORDS, "compositingResol() -> retval\n."},
    {"estimateTransform", (PyCFunction)pyopencv_cv_Stitcher_estimateTransform, METH_VARARGS | METH_KEYWORDS, "estimateTransform(images) -> retval\n.   @overload"},
    {"panoConfidenceThresh", (PyCFunction)pyopencv_cv_Stitcher_panoConfidenceThresh, METH_VARARGS | METH_KEYWORDS, "panoConfidenceThresh() -> retval\n."},
    {"registrationResol", (PyCFunction)pyopencv_cv_Stitcher_registrationResol, METH_VARARGS | METH_KEYWORDS, "registrationResol() -> retval\n.   @brief Creates a Stitcher configured in one of the stitching modes.\n.   \n.   @param mode Scenario for stitcher operation. This is usually determined by source of images\n.   to stitch and their transformation. Default parameters will be chosen for operation in given\n.   scenario.\n.   @param try_use_gpu Flag indicating whether GPU should be used whenever it's possible.\n.   @return Stitcher class instance."},
    {"seamEstimationResol", (PyCFunction)pyopencv_cv_Stitcher_seamEstimationResol, METH_VARARGS | METH_KEYWORDS, "seamEstimationResol() -> retval\n."},
    {"setCompositingResol", (PyCFunction)pyopencv_cv_Stitcher_setCompositingResol, METH_VARARGS | METH_KEYWORDS, "setCompositingResol(resol_mpx) -> None\n."},
    {"setPanoConfidenceThresh", (PyCFunction)pyopencv_cv_Stitcher_setPanoConfidenceThresh, METH_VARARGS | METH_KEYWORDS, "setPanoConfidenceThresh(conf_thresh) -> None\n."},
    {"setRegistrationResol", (PyCFunction)pyopencv_cv_Stitcher_setRegistrationResol, METH_VARARGS | METH_KEYWORDS, "setRegistrationResol(resol_mpx) -> None\n."},
    {"setSeamEstimationResol", (PyCFunction)pyopencv_cv_Stitcher_setSeamEstimationResol, METH_VARARGS | METH_KEYWORDS, "setSeamEstimationResol(resol_mpx) -> None\n."},
    {"setWaveCorrection", (PyCFunction)pyopencv_cv_Stitcher_setWaveCorrection, METH_VARARGS | METH_KEYWORDS, "setWaveCorrection(flag) -> None\n."},
    {"stitch", (PyCFunction)pyopencv_cv_Stitcher_stitch, METH_VARARGS | METH_KEYWORDS, "stitch(images[, pano]) -> retval, pano\n.   @overload"},
    {"waveCorrection", (PyCFunction)pyopencv_cv_Stitcher_waveCorrection, METH_VARARGS | METH_KEYWORDS, "waveCorrection() -> retval\n."},
    {"workScale", (PyCFunction)pyopencv_cv_Stitcher_workScale, METH_VARARGS | METH_KEYWORDS, "workScale() -> retval\n.   @brief These functions try to stitch the given images.\n.   \n.   @param images Input images.\n.   @param rois Region of interest rectangles.\n.   @param pano Final pano.\n.   @return Status code."},

    {NULL,          NULL}
};

static void pyopencv_Stitcher_specials(void)
{
    pyopencv_Stitcher_Type.tp_base = NULL;
    pyopencv_Stitcher_Type.tp_dealloc = pyopencv_Stitcher_dealloc;
    pyopencv_Stitcher_Type.tp_repr = pyopencv_Stitcher_repr;
    pyopencv_Stitcher_Type.tp_getset = pyopencv_Stitcher_getseters;
    pyopencv_Stitcher_Type.tp_methods = pyopencv_Stitcher_methods;
}
